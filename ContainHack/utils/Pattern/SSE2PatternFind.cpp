//  �����㷨���Կ�ѩ��̳[url=https://bbs.kanxue.com/thread-209946.htm]https://bbs.kanxue.com/thread-209946.htm[/url]�����ߣ�liuzewei 
//  ֧��ͨ���??��֧��һ���ƥ�䣬֧��x86 x64
//  ��ʹ���뱣������

#include <windows.h>
#include <intrin.h>
#include <psapi.h>
#include <string>
#include <vector>
#include <memory>

/*  SSE2PatternFind()����������
1)  module  ��Ҫ������ģ�� HMODULE hModule = GetModuleHandle(L"ģ������");
2)  pattern  ���������룬֧��ͨ���?? ��ʽΪ��std::string pattern = "55 ?? 77 88 ?? AA BB";
3)  searchNum  ����������0Ϊ��������ģ�飬Ĭ��Ϊ0
4)  deviation  �������ַ��Ŀ���ַ��ƫ�ƾ��룬�ϸ�������Ĭ�ϲ�ƫ��
    return����ֵ���ҵ��ĵ�ַ
    ���� std::vector<ULONGLONG> retList = SSE2PatternFind(hModule, pattern, 10);
*/
std::vector<ULONGLONG> SSE2PatternFind(HMODULE module, std::string pattern, ULONGLONG searchNum = 0, ULONGLONG deviation = 0)
{
    std::vector<ULONGLONG> retList;
    //  "12 34 ?? 78 ?? BC"
    //  ȥ�����пո��ͷ����
    if (!pattern.empty())
    {
        pattern.erase(std::remove(pattern.begin(), pattern.end(), ' '), pattern.end());
        pattern.erase(0, pattern.find_first_not_of("?"));
    }
    //  �����볤�Ȳ���Ϊ����
    if (pattern.length() % 2 != 0) return retList;
    //  �����볤��
    int len = pattern.length() / 2;
    std::string SigMask = "";
    std::string finalPattern = "";

    //  ��������ת��ΪĿ���ʽ������mask����Ӧ��ƥ��
    for (int i = 0; i < len; i++) {
        std::string tempStr = pattern.substr(i * 2, 2);
        SigMask += (tempStr == "??") ? "?" : "x";
        finalPattern += (tempStr == "??") ? char(0xFF) : char(strtoul(tempStr.c_str(), nullptr, 16));
    }

    //  �����ʼ�������򱨴�
    MODULEINFO moduleInfo = { 0 };
    if (GetModuleInformation(GetCurrentProcess(), module, &moduleInfo, sizeof(moduleInfo)) == 0)
        return retList;
    ULONGLONG VirtualAddress = (ULONGLONG)moduleInfo.lpBaseOfDll;
    ULONGLONG VirtualLength = moduleInfo.SizeOfImage;

    // �������
    PUCHAR MaxAddress = (PUCHAR)(VirtualAddress + VirtualLength);
    PUCHAR BaseAddress;
    PUCHAR CurrAddress;
    PUCHAR CurrPattern;
    PCHAR CurrMask;
    BOOLEAN CurrEqual;
    register UCHAR CurrUChar;

    // SSE ������ر���   
    __m128i SigHead = _mm_set1_epi8((CHAR)finalPattern[0]);
    __m128i CurHead, CurComp;
    ULONG MskComp, IdxComp;
    ULONGLONG i, j, nCount = 0;

    //
    //   ��һ�����ʹ�� SSE �����ֽڼ���Ϊ�� 16 �ֽ�ÿ�Σ����ռ��� 12 ��������Ҫ��Դ��ˣ�
    //
    //   �ڶ����Ӵ�ƥ�䲻��ʹ�� SSE ���٣�ԭ������
    //     1. SSE ��Ϊ��ָ������ݣ�������ָ�� CPU ���ڱȳ���ָ��Ҫ��
    //
    //     2. �Ӹ�������˵���Ӵ�ƥ��ʱ��һ���ֽ�����ʧ���� SSE һ���ԶԱ� 16 ���ֽ�����ʧ���ڸ����ϼ������
    //
    //     3. ����ʵ����� SSE �Ż��ڶ����Ӵ�ƥ�佫�����������ղ����ٶ�
    //
    //     4. �����ϣ���ʹ SSE ����ָ���볣��ָ�����ͬ����CPU���ڣ����Ҳֻ�ܼ��� 16 ��
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
                // ��Ϊ�Ǳ�����������ϵͳ�������ڴ棬������������Ķ�ջ����ȻҲ�������������ڴ��һ����
                // ���Ϊ�˱���ƥ�䵽���� SigPattern ��������������Ӧ���˲������粻��Ҫ�������м� 2 ��
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