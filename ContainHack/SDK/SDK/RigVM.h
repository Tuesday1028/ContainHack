
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/RigVM.ERigVMPinDirection
/// Size: 0x07
enum class ERigVMPinDirection : uint8_t
{
	ERigVMPinDirection__Input                                                        = 0,
	ERigVMPinDirection__Output                                                       = 1,
	ERigVMPinDirection__IO                                                           = 2,
	ERigVMPinDirection__Visible                                                      = 3,
	ERigVMPinDirection__Hidden                                                       = 4,
	ERigVMPinDirection__Invalid                                                      = 5,
	ERigVMPinDirection__ERigVMPinDirection_MAX                                       = 6
};

/// Enum /Script/RigVM.ERigVMBreakpointAction
/// Size: 0x06
enum class ERigVMBreakpointAction : uint8_t
{
	ERigVMBreakpointAction__None                                                     = 0,
	ERigVMBreakpointAction__Resume                                                   = 1,
	ERigVMBreakpointAction__StepOver                                                 = 2,
	ERigVMBreakpointAction__StepInto                                                 = 3,
	ERigVMBreakpointAction__StepOut                                                  = 4,
	ERigVMBreakpointAction__Max                                                      = 5
};

/// Enum /Script/RigVM.ERigVMParameterType
/// Size: 0x04
enum class ERigVMParameterType : uint8_t
{
	ERigVMParameterType__Input                                                       = 0,
	ERigVMParameterType__Output                                                      = 1,
	ERigVMParameterType__Invalid                                                     = 2,
	ERigVMParameterType__ERigVMParameterType_MAX                                     = 3
};

/// Enum /Script/RigVM.ERigVMOpCode
/// Size: 0x104
enum class ERigVMOpCode : uint8_t
{
	ERigVMOpCode__Execute_0_Operands                                                 = 0,
	ERigVMOpCode__Execute_1_Operands                                                 = 1,
	ERigVMOpCode__Execute_2_Operands                                                 = 2,
	ERigVMOpCode__Execute_3_Operands                                                 = 3,
	ERigVMOpCode__Execute_4_Operands                                                 = 4,
	ERigVMOpCode__Execute_5_Operands                                                 = 5,
	ERigVMOpCode__Execute_6_Operands                                                 = 6,
	ERigVMOpCode__Execute_7_Operands                                                 = 7,
	ERigVMOpCode__Execute_8_Operands                                                 = 8,
	ERigVMOpCode__Execute_9_Operands                                                 = 9,
	ERigVMOpCode__Execute_10_Operands                                                = 10,
	ERigVMOpCode__Execute_11_Operands                                                = 11,
	ERigVMOpCode__Execute_12_Operands                                                = 12,
	ERigVMOpCode__Execute_13_Operands                                                = 13,
	ERigVMOpCode__Execute_14_Operands                                                = 14,
	ERigVMOpCode__Execute_15_Operands                                                = 15,
	ERigVMOpCode__Execute_16_Operands                                                = 16,
	ERigVMOpCode__Execute_17_Operands                                                = 17,
	ERigVMOpCode__Execute_18_Operands                                                = 18,
	ERigVMOpCode__Execute_19_Operands                                                = 19,
	ERigVMOpCode__Execute_20_Operands                                                = 20,
	ERigVMOpCode__Execute_21_Operands                                                = 21,
	ERigVMOpCode__Execute_22_Operands                                                = 22,
	ERigVMOpCode__Execute_23_Operands                                                = 23,
	ERigVMOpCode__Execute_24_Operands                                                = 24,
	ERigVMOpCode__Execute_25_Operands                                                = 25,
	ERigVMOpCode__Execute_26_Operands                                                = 26,
	ERigVMOpCode__Execute_27_Operands                                                = 27,
	ERigVMOpCode__Execute_28_Operands                                                = 28,
	ERigVMOpCode__Execute_29_Operands                                                = 29,
	ERigVMOpCode__Execute_30_Operands                                                = 30,
	ERigVMOpCode__Execute_31_Operands                                                = 31,
	ERigVMOpCode__Execute_32_Operands                                                = 32,
	ERigVMOpCode__Execute_33_Operands                                                = 33,
	ERigVMOpCode__Execute_34_Operands                                                = 34,
	ERigVMOpCode__Execute_35_Operands                                                = 35,
	ERigVMOpCode__Execute_36_Operands                                                = 36,
	ERigVMOpCode__Execute_37_Operands                                                = 37,
	ERigVMOpCode__Execute_38_Operands                                                = 38,
	ERigVMOpCode__Execute_39_Operands                                                = 39,
	ERigVMOpCode__Execute_40_Operands                                                = 40,
	ERigVMOpCode__Execute_41_Operands                                                = 41,
	ERigVMOpCode__Execute_42_Operands                                                = 42,
	ERigVMOpCode__Execute_43_Operands                                                = 43,
	ERigVMOpCode__Execute_44_Operands                                                = 44,
	ERigVMOpCode__Execute_45_Operands                                                = 45,
	ERigVMOpCode__Execute_46_Operands                                                = 46,
	ERigVMOpCode__Execute_47_Operands                                                = 47,
	ERigVMOpCode__Execute_48_Operands                                                = 48,
	ERigVMOpCode__Execute_49_Operands                                                = 49,
	ERigVMOpCode__Execute_50_Operands                                                = 50,
	ERigVMOpCode__Execute_51_Operands                                                = 51,
	ERigVMOpCode__Execute_52_Operands                                                = 52,
	ERigVMOpCode__Execute_53_Operands                                                = 53,
	ERigVMOpCode__Execute_54_Operands                                                = 54,
	ERigVMOpCode__Execute_55_Operands                                                = 55,
	ERigVMOpCode__Execute_56_Operands                                                = 56,
	ERigVMOpCode__Execute_57_Operands                                                = 57,
	ERigVMOpCode__Execute_58_Operands                                                = 58,
	ERigVMOpCode__Execute_59_Operands                                                = 59,
	ERigVMOpCode__Execute_60_Operands                                                = 60,
	ERigVMOpCode__Execute_61_Operands                                                = 61,
	ERigVMOpCode__Execute_62_Operands                                                = 62,
	ERigVMOpCode__Execute_63_Operands                                                = 63,
	ERigVMOpCode__Execute_64_Operands                                                = 64,
	ERigVMOpCode__Zero                                                               = 65,
	ERigVMOpCode__BoolFalse                                                          = 66,
	ERigVMOpCode__BoolTrue                                                           = 67,
	ERigVMOpCode__Copy                                                               = 68,
	ERigVMOpCode__Increment                                                          = 69,
	ERigVMOpCode__Decrement                                                          = 70,
	ERigVMOpCode__Equals                                                             = 71,
	ERigVMOpCode__NotEquals                                                          = 72,
	ERigVMOpCode__JumpAbsolute                                                       = 73,
	ERigVMOpCode__JumpForward                                                        = 74,
	ERigVMOpCode__JumpBackward                                                       = 75,
	ERigVMOpCode__JumpAbsoluteIf                                                     = 76,
	ERigVMOpCode__JumpForwardIf                                                      = 77,
	ERigVMOpCode__JumpBackwardIf                                                     = 78,
	ERigVMOpCode__ChangeType                                                         = 79,
	ERigVMOpCode__Exit                                                               = 80,
	ERigVMOpCode__BeginBlock                                                         = 81,
	ERigVMOpCode__EndBlock                                                           = 82,
	ERigVMOpCode__ArrayReset                                                         = 83,
	ERigVMOpCode__ArrayGetNum                                                        = 84,
	ERigVMOpCode__ArraySetNum                                                        = 85,
	ERigVMOpCode__ArrayGetAtIndex                                                    = 86,
	ERigVMOpCode__ArraySetAtIndex                                                    = 87,
	ERigVMOpCode__ArrayAdd                                                           = 88,
	ERigVMOpCode__ArrayInsert                                                        = 89,
	ERigVMOpCode__ArrayRemove                                                        = 90,
	ERigVMOpCode__ArrayFind                                                          = 91,
	ERigVMOpCode__ArrayAppend                                                        = 92,
	ERigVMOpCode__ArrayClone                                                         = 93,
	ERigVMOpCode__ArrayIterator                                                      = 94,
	ERigVMOpCode__ArrayUnion                                                         = 95,
	ERigVMOpCode__ArrayDifference                                                    = 96,
	ERigVMOpCode__ArrayIntersection                                                  = 97,
	ERigVMOpCode__ArrayReverse                                                       = 98,
	ERigVMOpCode__InvokeEntry                                                        = 99,
	ERigVMOpCode__Invalid                                                            = 100,
	ERigVMOpCode__FirstArrayOpCode                                                   = 83,
	ERigVMOpCode__LastArrayOpCode                                                    = 98,
	ERigVMOpCode__ERigVMOpCode_MAX                                                   = 101
};

/// Enum /Script/RigVM.ERigVMCopyType
/// Size: 0x04
enum class ERigVMCopyType : uint8_t
{
	ERigVMCopyType__Default                                                          = 0,
	ERigVMCopyType__FloatToDouble                                                    = 1,
	ERigVMCopyType__DoubleToFloat                                                    = 2,
	ERigVMCopyType__ERigVMCopyType_MAX                                               = 3
};

/// Enum /Script/RigVM.ERigVMMemoryType
/// Size: 0x06
enum class ERigVMMemoryType : uint8_t
{
	ERigVMMemoryType__Work                                                           = 0,
	ERigVMMemoryType__Literal                                                        = 1,
	ERigVMMemoryType__External                                                       = 2,
	ERigVMMemoryType__Debug                                                          = 3,
	ERigVMMemoryType__Invalid                                                        = 4,
	ERigVMMemoryType__ERigVMMemoryType_MAX                                           = 5
};

/// Enum /Script/RigVM.ERigVMRegisterType
/// Size: 0x06
enum class ERigVMRegisterType : uint8_t
{
	ERigVMRegisterType__Plain                                                        = 0,
	ERigVMRegisterType__String                                                       = 1,
	ERigVMRegisterType__Name                                                         = 2,
	ERigVMRegisterType__Struct                                                       = 3,
	ERigVMRegisterType__Invalid                                                      = 4,
	ERigVMRegisterType__ERigVMRegisterType_MAX                                       = 5
};

/// Enum /Script/RigVM.ERigVMUserWorkflowType
/// Size: 0x06
enum class ERigVMUserWorkflowType : uint8_t
{
	ERigVMUserWorkflowType__Invalid                                                  = 0,
	ERigVMUserWorkflowType__NodeContext                                              = 1,
	ERigVMUserWorkflowType__PinContext                                               = 2,
	ERigVMUserWorkflowType__OnPinDefaultChanged                                      = 4,
	ERigVMUserWorkflowType__All                                                      = 7,
	ERigVMUserWorkflowType__ERigVMUserWorkflowType_MAX                               = 8
};

/// Struct /Script/RigVM.RigVMUserWorkflow
/// Size: 0x0058 (0x000000 - 0x000058)
struct FRigVMUserWorkflow
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	SDK_UNDEFINED(16,2048) /* FString */               __um(Title);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2049) /* FString */               __um(Tooltip);                                              // 0x0018   (0x0010)  
	ERigVMUserWorkflowType                             Type;                                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x17];                                      // 0x0029   (0x0017)  MISSED
	SDK_UNDEFINED(16,2050) /* FDelegateProperty */     __um(PerformDynamicDelegate);                               // 0x0040   (0x0010)  
	class UClass*                                      OptionsClass;                                               // 0x0050   (0x0008)  
};

/// Class /Script/RigVM.RigVMUserWorkflowOptions
/// Size: 0x0070 (0x000028 - 0x000098)
class URigVMUserWorkflowOptions : public UObject
{ 
public:
	class UObject*                                     Subject;                                                    // 0x0028   (0x0008)  
	FRigVMUserWorkflow                                 Workflow;                                                   // 0x0030   (0x0058)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0088   (0x0010)  MISSED


	/// Functions
	// Function /Script/RigVM.RigVMUserWorkflowOptions.RequiresDialog
	// bool RequiresDialog();                                                                                                // [0x458dd80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportWarning
	// void ReportWarning(FString InMessage);                                                                                // [0x458dc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportInfo
	// void ReportInfo(FString InMessage);                                                                                   // [0x458db50] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportError
	// void ReportError(FString InMessage);                                                                                  // [0x458da20] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.IsValid
	// bool IsValid();                                                                                                       // [0x458d9f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/RigVM.RigVMByteCodeEntry
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigVMByteCodeEntry
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            InstructionIndex;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/RigVM.RigVMByteCode
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigVMByteCode
{ 
	TArray<char>                                       ByteCode;                                                   // 0x0000   (0x0010)  
	int32_t                                            NumInstructions;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FRigVMByteCodeEntry>                        Entries;                                                    // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMInstruction
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigVMInstruction
{ 
	uint64_t                                           ByteCodeIndex;                                              // 0x0000   (0x0008)  
	ERigVMOpCode                                       OpCode;                                                     // 0x0008   (0x0001)  
	char                                               OperandAlignment;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/RigVM.RigVMInstructionArray
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigVMInstructionArray
{ 
	TArray<FRigVMInstruction>                          Instructions;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/RigVM.RigVMExtendedExecuteContext
/// Size: 0x0078 (0x000000 - 0x000078)
struct FRigVMExtendedExecuteContext
{ 
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0000   (0x0078)  MISSED
};

/// Struct /Script/RigVM.RigVMParameter
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigVMParameter
{ 
	ERigVMParameterType                                Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0008)  
	int32_t                                            RegisterIndex;                                              // 0x000C   (0x0004)  
	SDK_UNDEFINED(16,2051) /* FString */               __um(CPPType);                                              // 0x0010   (0x0010)  
	class UScriptStruct*                               ScriptStruct;                                               // 0x0020   (0x0008)  
	FName                                              ScriptStructPath;                                           // 0x0028   (0x0008)  
};

/// Class /Script/RigVM.RigVM
/// Size: 0x0280 (0x000028 - 0x0002A8)
class URigVM : public UObject
{ 
public:
	class URigVMMemoryStorage*                         WorkMemoryStorageObject;                                    // 0x0028   (0x0008)  
	class URigVMMemoryStorage*                         LiteralMemoryStorageObject;                                 // 0x0030   (0x0008)  
	class URigVMMemoryStorage*                         DebugMemoryStorageObject;                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_5[0x20];                                      // 0x0040   (0x0020)  MISSED
	FRigVMByteCode                                     ByteCodeStorage;                                            // 0x0060   (0x0030)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0090   (0x0008)  MISSED
	FRigVMInstructionArray                             Instructions;                                               // 0x0098   (0x0010)  
	FRigVMExtendedExecuteContext                       Context;                                                    // 0x00A8   (0x0078)  
	uint32_t                                           NumExecutions;                                              // 0x0120   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0124   (0x0004)  MISSED
	TArray<FName>                                      FunctionNamesStorage;                                       // 0x0128   (0x0010)  
	unsigned char                                      UnknownData03_5[0x38];                                      // 0x0138   (0x0038)  MISSED
	TArray<FRigVMParameter>                            Parameters;                                                 // 0x0170   (0x0010)  
	SDK_UNDEFINED(80,2052) /* TMap<FName, int32_t> */  __um(ParametersNameMap);                                    // 0x0180   (0x0050)  
	unsigned char                                      UnknownData04_5[0xB8];                                      // 0x01D0   (0x00B8)  MISSED
	class URigVM*                                      DeferredVMToCopy;                                           // 0x0288   (0x0008)  
	unsigned char                                      UnknownData05_6[0x18];                                      // 0x0290   (0x0018)  MISSED


	/// Functions
	// Function /Script/RigVM.RigVM.SetParameterValueVector2D
	// void SetParameterValueVector2D(FName& InParameterName, FVector2D& InValue, int32_t InArrayIndex);                     // [0x458ece0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueVector
	// void SetParameterValueVector(FName& InParameterName, FVector& InValue, int32_t InArrayIndex);                         // [0x458eea0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueTransform
	// void SetParameterValueTransform(FName& InParameterName, FTransform& InValue, int32_t InArrayIndex);                   // [0x458eaa0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueString
	// void SetParameterValueString(FName& InParameterName, FString InValue, int32_t InArrayIndex);                          // [0x458e8e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueQuat
	// void SetParameterValueQuat(FName& InParameterName, FQuat& InValue, int32_t InArrayIndex);                             // [0x458e710] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueName
	// void SetParameterValueName(FName& InParameterName, FName& InValue, int32_t InArrayIndex);                             // [0x458e540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueInt
	// void SetParameterValueInt(FName& InParameterName, int32_t InValue, int32_t InArrayIndex);                             // [0x458e380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueFloat
	// void SetParameterValueFloat(FName& InParameterName, float InValue, int32_t InArrayIndex);                             // [0x458e1d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueDouble
	// void SetParameterValueDouble(FName& InParameterName, double InValue, int32_t InArrayIndex);                           // [0x458e020] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueBool
	// void SetParameterValueBool(FName& InParameterName, bool InValue, int32_t InArrayIndex);                               // [0x458de60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetStatistics
	// FRigVMStatistics GetStatistics();                                                                                     // [0x458d9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVM.GetRigVMFunctionName
	// FString GetRigVMFunctionName(int32_t InFunctionIndex);                                                                // [0x458d8c0] Native|Public|Const  
	// Function /Script/RigVM.RigVM.GetParameterValueVector2D
	// FVector2D GetParameterValueVector2D(FName& InParameterName, int32_t InArrayIndex);                                    // [0x458d510] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueVector
	// FVector GetParameterValueVector(FName& InParameterName, int32_t InArrayIndex);                                        // [0x458d6d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueTransform
	// FTransform GetParameterValueTransform(FName& InParameterName, int32_t InArrayIndex);                                  // [0x458d280] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueString
	// FString GetParameterValueString(FName& InParameterName, int32_t InArrayIndex);                                        // [0x458d080] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueQuat
	// FQuat GetParameterValueQuat(FName& InParameterName, int32_t InArrayIndex);                                            // [0x458cea0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueName
	// FName GetParameterValueName(FName& InParameterName, int32_t InArrayIndex);                                            // [0x458cd10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueInt
	// int32_t GetParameterValueInt(FName& InParameterName, int32_t InArrayIndex);                                           // [0x458cb90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueFloat
	// float GetParameterValueFloat(FName& InParameterName, int32_t InArrayIndex);                                           // [0x458ca10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueDouble
	// double GetParameterValueDouble(FName& InParameterName, int32_t InArrayIndex);                                         // [0x458c890] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueBool
	// bool GetParameterValueBool(FName& InParameterName, int32_t InArrayIndex);                                             // [0x458c710] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.Execute
	// bool Execute(FName& InEntryName);                                                                                     // [0x458c660] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.AddRigVMFunction
	// int32_t AddRigVMFunction(class UScriptStruct* InRigVMStruct, FName& InMethodName);                                    // [0x458c580] Native|Public|HasOutParms 
};

/// Class /Script/RigVM.RigVMMemoryStorageGeneratorClass
/// Size: 0x0040 (0x000230 - 0x000270)
class URigVMMemoryStorageGeneratorClass : public UClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0230   (0x0040)  MISSED
};

/// Class /Script/RigVM.RigVMMemoryStorage
/// Size: 0x0000 (0x000028 - 0x000028)
class URigVMMemoryStorage : public UObject
{ 
public:
};

/// Class /Script/RigVM.RigVMNativized
/// Size: 0x0008 (0x0002A8 - 0x0002B0)
class URigVMNativized : public URigVM
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02A8   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMRuntimeSettings
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRigVMRuntimeSettings
{ 
	int32_t                                            MaximumArraySize;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0004   (0x0014)  MISSED
};

/// Struct /Script/RigVM.RigVMStruct
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRigVMStruct
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMExecuteContext
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigVMExecuteContext
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/RigVM.RigVMDispatchFactory
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRigVMDispatchFactory
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/RigVM.RigVMUnknownType
/// Size: 0x0004 (0x000000 - 0x000004)
struct FRigVMUnknownType
{ 
	uint32_t                                           Hash;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/RigVM.RigVMMemoryStatistics
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigVMMemoryStatistics
{ 
	int32_t                                            RegisterCount;                                              // 0x0000   (0x0004)  
	int32_t                                            DataBytes;                                                  // 0x0004   (0x0004)  
	int32_t                                            TotalBytes;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/RigVM.RigVMByteCodeStatistics
/// Size: 0x0008 (0x000000 - 0x000008)
struct FRigVMByteCodeStatistics
{ 
	int32_t                                            InstructionCount;                                           // 0x0000   (0x0004)  
	int32_t                                            DataBytes;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/RigVM.RigVMStatistics
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRigVMStatistics
{ 
	int32_t                                            BytesForCDO;                                                // 0x0000   (0x0004)  
	int32_t                                            BytesPerInstance;                                           // 0x0004   (0x0004)  
	FRigVMMemoryStatistics                             LiteralMemory;                                              // 0x0008   (0x000C)  
	FRigVMMemoryStatistics                             WorkMemory;                                                 // 0x0014   (0x000C)  
	FRigVMMemoryStatistics                             DebugMemory;                                                // 0x0020   (0x000C)  
	int32_t                                            BytesForCaching;                                            // 0x002C   (0x0004)  
	FRigVMByteCodeStatistics                           ByteCode;                                                   // 0x0030   (0x0008)  
};

/// Struct /Script/RigVM.RigVMBaseOp
/// Size: 0x0001 (0x000000 - 0x000001)
struct FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/RigVM.RigVMExecuteOp
/// Size: 0x0003 (0x000001 - 0x000004)
struct FRigVMExecuteOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMUnaryOp
/// Size: 0x0007 (0x000001 - 0x000008)
struct FRigVMUnaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x7];                                       // 0x0001   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMBinaryOp
/// Size: 0x000D (0x000001 - 0x00000E)
struct FRigVMBinaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0xD];                                       // 0x0001   (0x000D)  MISSED
};

/// Struct /Script/RigVM.RigVMTernaryOp
/// Size: 0x0013 (0x000001 - 0x000014)
struct FRigVMTernaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x13];                                      // 0x0001   (0x0013)  MISSED
};

/// Struct /Script/RigVM.RigVMQuaternaryOp
/// Size: 0x0019 (0x000001 - 0x00001A)
struct FRigVMQuaternaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x19];                                      // 0x0001   (0x0019)  MISSED
};

/// Struct /Script/RigVM.RigVMQuinaryOp
/// Size: 0x001F (0x000001 - 0x000020)
struct FRigVMQuinaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x1F];                                      // 0x0001   (0x001F)  MISSED
};

/// Struct /Script/RigVM.RigVMSenaryOp
/// Size: 0x0025 (0x000001 - 0x000026)
struct FRigVMSenaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x25];                                      // 0x0001   (0x0025)  MISSED
};

/// Struct /Script/RigVM.RigVMCopyOp
/// Size: 0x0011 (0x000001 - 0x000012)
struct FRigVMCopyOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x11];                                      // 0x0001   (0x0011)  MISSED
};

/// Struct /Script/RigVM.RigVMComparisonOp
/// Size: 0x0013 (0x000001 - 0x000014)
struct FRigVMComparisonOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x13];                                      // 0x0001   (0x0013)  MISSED
};

/// Struct /Script/RigVM.RigVMJumpOp
/// Size: 0x0007 (0x000001 - 0x000008)
struct FRigVMJumpOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x7];                                       // 0x0001   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMJumpIfOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigVMJumpIfOp : FRigVMUnaryOp
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMChangeTypeOp
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigVMChangeTypeOp : FRigVMUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMInvokeEntryOp
/// Size: 0x000B (0x000001 - 0x00000C)
struct FRigVMInvokeEntryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0xB];                                       // 0x0001   (0x000B)  MISSED
};

/// Struct /Script/RigVM.RigVMBreakpoint
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigVMBreakpoint
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/RigVM.RigVMDebugInfo
/// Size: 0x00F8 (0x000000 - 0x0000F8)
struct FRigVMDebugInfo
{ 
	unsigned char                                      UnknownData00_1[0xF8];                                      // 0x0000   (0x00F8)  MISSED
};

/// Struct /Script/RigVM.RigVMSlice
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigVMSlice
{ 
	unsigned char                                      UnknownData00_1[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMOperand
/// Size: 0x0006 (0x000000 - 0x000006)
struct FRigVMOperand
{ 
	ERigVMMemoryType                                   MemoryType;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0001   (0x0001)  MISSED
	uint16_t                                           RegisterIndex;                                              // 0x0002   (0x0002)  
	uint16_t                                           RegisterOffset;                                             // 0x0004   (0x0002)  
};

/// Struct /Script/RigVM.RigVMRegister
/// Size: 0x0024 (0x000000 - 0x000024)
struct FRigVMRegister
{ 
	ERigVMRegisterType                                 Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           ByteIndex;                                                  // 0x0004   (0x0004)  
	uint16_t                                           ElementSize;                                                // 0x0008   (0x0002)  
	uint16_t                                           ElementCount;                                               // 0x000A   (0x0002)  
	uint16_t                                           SliceCount;                                                 // 0x000C   (0x0002)  
	char                                               AlignmentBytes;                                             // 0x000E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x000F   (0x0001)  MISSED
	uint16_t                                           TrailingBytes;                                              // 0x0010   (0x0002)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	FName                                              Name;                                                       // 0x0014   (0x0008)  
	int32_t                                            ScriptStructIndex;                                          // 0x001C   (0x0004)  
	bool                                               bIsArray;                                                   // 0x0020   (0x0001)  
	bool                                               bIsDynamic;                                                 // 0x0021   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Struct /Script/RigVM.RigVMRegisterOffset
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigVMRegisterOffset
{ 
	TArray<int32_t>                                    Segments;                                                   // 0x0000   (0x0010)  
	ERigVMRegisterType                                 Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              CPPType;                                                    // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UScriptStruct*                               ScriptStruct;                                               // 0x0020   (0x0008)  
	class UScriptStruct*                               ParentScriptStruct;                                         // 0x0028   (0x0008)  
	int32_t                                            ArrayIndex;                                                 // 0x0030   (0x0004)  
	uint16_t                                           ElementSize;                                                // 0x0034   (0x0002)  
	unsigned char                                      UnknownData02_5[0x2];                                       // 0x0036   (0x0002)  MISSED
	SDK_UNDEFINED(16,2053) /* FString */               __um(CachedSegmentPath);                                    // 0x0038   (0x0010)  
};

/// Struct /Script/RigVM.RigVMMemoryContainer
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FRigVMMemoryContainer
{ 
	bool                                               bUseNameMap;                                                // 0x0000   (0x0001)  
	ERigVMMemoryType                                   MemoryType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<FRigVMRegister>                             Registers;                                                  // 0x0008   (0x0010)  
	TArray<FRigVMRegisterOffset>                       RegisterOffsets;                                            // 0x0018   (0x0010)  
	TArray<char>                                       Data;                                                       // 0x0028   (0x0010)  
	TArray<class UScriptStruct*>                       ScriptStructs;                                              // 0x0038   (0x0010)  
	SDK_UNDEFINED(80,2054) /* TMap<FName, int32_t> */  __um(NameMap);                                              // 0x0048   (0x0050)  
	bool                                               bEncounteredErrorDuringLoad;                                // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMTemplateArgumentType
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigVMTemplateArgumentType
{ 
	FName                                              CPPType;                                                    // 0x0000   (0x0008)  
	class UObject*                                     CPPTypeObject;                                              // 0x0008   (0x0008)  
};

