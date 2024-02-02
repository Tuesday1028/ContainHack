//  核心算法来自看雪论坛[url=https://bbs.kanxue.com/thread-209946.htm]https://bbs.kanxue.com/thread-209946.htm[/url]；作者：liuzewei 
//  支持通配符??，支持一码多匹配，支持x86 x64
//  如使用请保留出处

#include <windows.h>
#include <intrin.h>
#include <psapi.h>
#include <string>
#include <vector>
#include <memory>

/*  SSE2PatternFind()特征码搜索
1)  module  需要搜索的模块 HMODULE hModule = GetModuleHandle(L"模块名称");
2)  pattern  搜索特征码，支持通配符?? 格式为：std::string pattern = "55 ?? 77 88 ?? AA BB";
3)  searchNum  搜索个数，0为搜索整个模块，默认为0
4)  deviation  特征码地址离目标地址的偏移距离，上负下正，默认不偏移
    return返回值，找到的地址
    调用 std::vector<ULONGLONG> retList = SSE2PatternFind(hModule, pattern, 10);
*/
std::vector<ULONGLONG> SSE2PatternFind(HMODULE module, std::string pattern, ULONGLONG searchNum = 0, ULONGLONG deviation = 0)
{
    std::vector<ULONGLONG> retList;
    //  "12 34 ?? 78 ?? BC"
    //  去除所有空格和头部？
    if (!pattern.empty())
    {
        pattern.erase(std::remove(pattern.begin(), pattern.end(), ' '), pattern.end());
        pattern.erase(0, pattern.find_first_not_of("?"));
    }
    //  特征码长度不能为单数
    if (pattern.length() % 2 != 0) return retList;
    //  特征码长度
    int len = pattern.length() / 2;
    std::string SigMask = "";
    std::string finalPattern = "";

    //  将特征码转换为目标格式，并将mask做相应的匹配
    for (int i = 0; i < len; i++) {
        std::string tempStr = pattern.substr(i * 2, 2);
        SigMask += (tempStr == "??") ? "?" : "x";
        finalPattern += (tempStr == "??") ? char(0xFF) : char(strtoul(tempStr.c_str(), nullptr, 16));
    }

    //  必须初始化，否则报错
    MODULEINFO moduleInfo = { 0 };
    if (GetModuleInformation(GetCurrentProcess(), module, &moduleInfo, sizeof(moduleInfo)) == 0)
        return retList;
    ULONGLONG VirtualAddress = (ULONGLONG)moduleInfo.lpBaseOfDll;
    ULONGLONG VirtualLength = moduleInfo.SizeOfImage;

    // 常规变量
    PUCHAR MaxAddress = (PUCHAR)(VirtualAddress + VirtualLength);
    PUCHAR BaseAddress;
    PUCHAR CurrAddress;
    PUCHAR CurrPattern;
    PCHAR CurrMask;
    BOOLEAN CurrEqual;
    register UCHAR CurrUChar;

    // SSE 加速相关变量   
    __m128i SigHead = _mm_set1_epi8((CHAR)finalPattern[0]);
    __m128i CurHead, CurComp;
    ULONG MskComp, IdxComp;
    ULONGLONG i, j, nCount = 0;

    //
    //   第一层遍历使用 SSE 将逐字节加速为逐 16 字节每次（最终加速 12 倍获益主要来源与此）
    //
    //   第二层子串匹配不能使用 SSE 加速，原因有四
    //     1. SSE 虽为单指令多数据，但单个指令 CPU 周期比常规指令要高
    //
    //     2. 从概率上来说，子串匹配时第一个字节命中失败与 SSE 一次性对比 16 个字节命中失败在概率上几乎相等
    //
    //     3. 根据实验采用 SSE 优化第二层子串匹配将显著降低最终查找速度
    //
    //     4. 理论上，即使 SSE 单条指令与常规指令具有同样的CPU周期，最高也只能加速 16 倍
    //
    for (i = 0; i <= VirtualLength - 16; i += 16)
    {
        CurHead = _mm_loadu_si128((__m128i*)(VirtualAddress + i));
        CurComp = _mm_cmpeq_epi8(SigHead, CurHead);
        MskComp = _mm_movemask_epi8(CurComp);

        BaseAddress = (PUCHAR)(VirtualAddress + i);
        j = 0;
        while (_BitScanForward(&IdxComp, MskComp))
        {
            CurrAddress = BaseAddress + j + IdxComp;
            CurrPattern = (PUCHAR)finalPattern.c_str();
            CurrMask = (PCHAR)SigMask.c_str();
            for (; CurrAddress <= MaxAddress; CurrAddress++, CurrPattern++, CurrMask++)
            {
                // 因为是暴力搜索整个系统的物理内存，而本函数自身的堆栈区当然也属于整个物理内存的一部分
                // 因此为了避免匹配到参数 SigPattern 本身，对其做了相应过滤操作，如不需要可以自行简化 2 行
                CurrUChar = *CurrPattern;
                // *CurrPattern = CurrUChar + 0x1;
                CurrEqual = (*CurrAddress == CurrUChar);
                // *CurrPattern = CurrUChar;

                if (!CurrEqual) { if (*CurrMask == 'x') break; }
                if (*CurrMask == 0)
                {
                    retList.push_back((ULONGLONG)(BaseAddress + j + IdxComp + deviation));
                    if (++nCount >= searchNum && searchNum != 0) return retList;
                    break;
                }
            }

            ++IdxComp;
            MskComp = MskComp >> IdxComp;
            j += IdxComp;
        }
    }
    return retList;
}