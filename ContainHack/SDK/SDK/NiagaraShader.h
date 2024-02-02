
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Enum /Script/NiagaraShader.ENiagaraMipMapGenerationType
/// Size: 0x07
enum class ENiagaraMipMapGenerationType : uint8_t
{
	ENiagaraMipMapGenerationType__Unfiltered                                         = 0,
	ENiagaraMipMapGenerationType__Linear                                             = 1,
	ENiagaraMipMapGenerationType__Blur1                                              = 2,
	ENiagaraMipMapGenerationType__Blur2                                              = 3,
	ENiagaraMipMapGenerationType__Blur3                                              = 4,
	ENiagaraMipMapGenerationType__Blur4                                              = 5,
	ENiagaraMipMapGenerationType__ENiagaraMipMapGenerationType_MAX                   = 6
};

/// Enum /Script/NiagaraShader.ENiagaraGpuDispatchType
/// Size: 0x05
enum class ENiagaraGpuDispatchType : uint8_t
{
	ENiagaraGpuDispatchType__OneD                                                    = 0,
	ENiagaraGpuDispatchType__TwoD                                                    = 1,
	ENiagaraGpuDispatchType__ThreeD                                                  = 2,
	ENiagaraGpuDispatchType__Custom                                                  = 3,
	ENiagaraGpuDispatchType__ENiagaraGpuDispatchType_MAX                             = 4
};

/// Enum /Script/NiagaraShader.ENiagaraSimStageExecuteBehavior
/// Size: 0x04
enum class ENiagaraSimStageExecuteBehavior : uint8_t
{
	ENiagaraSimStageExecuteBehavior__Always                                          = 0,
	ENiagaraSimStageExecuteBehavior__OnSimulationReset                               = 1,
	ENiagaraSimStageExecuteBehavior__NotOnSimulationReset                            = 2,
	ENiagaraSimStageExecuteBehavior__ENiagaraSimStageExecuteBehavior_MAX             = 3
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity
/// Size: 0x05
enum class FNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log                                                = 0,
	FNiagaraCompileEventSeverity__Display                                            = 1,
	FNiagaraCompileEventSeverity__Warning                                            = 2,
	FNiagaraCompileEventSeverity__Error                                              = 3,
	FNiagaraCompileEventSeverity__FNiagaraCompileEventSeverity_MAX                   = 4
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSource
/// Size: 0x03
enum class FNiagaraCompileEventSource : uint8_t
{
	FNiagaraCompileEventSource__Unset                                                = 0,
	FNiagaraCompileEventSource__ScriptDependency                                     = 1,
	FNiagaraCompileEventSource__FNiagaraCompileEventSource_MAX                       = 2
};

/// Class /Script/NiagaraShader.NiagaraScriptBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraScriptBase : public UObject
{ 
public:
};

/// Struct /Script/NiagaraShader.SimulationStageMetaData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FSimulationStageMetaData
{ 
	FName                                              SimulationStageName;                                        // 0x0000   (0x0008)  
	FName                                              EnabledBinding;                                             // 0x0008   (0x0008)  
	FName                                              ElementCountXBinding;                                       // 0x0010   (0x0008)  
	FName                                              ElementCountYBinding;                                       // 0x0018   (0x0008)  
	FName                                              ElementCountZBinding;                                       // 0x0020   (0x0008)  
	FName                                              IterationSource;                                            // 0x0028   (0x0008)  
	ENiagaraSimStageExecuteBehavior                    ExecuteBehavior;                                            // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	bool                                               bWritesParticles : 1;                                       // 0x0034:0 (0x0001)  
	bool                                               bPartialParticleUpdate : 1;                                 // 0x0034:1 (0x0001)  
	bool                                               bParticleIterationStateEnabled : 1;                         // 0x0034:2 (0x0001)  
	bool                                               bOverrideElementCount : 1;                                  // 0x0034:3 (0x0001)  
	unsigned char                                      UnknownData01_4[0x3];                                       // 0x0035   (0x0003)  MISSED
	FName                                              ParticleIterationStateBinding;                              // 0x0038   (0x0008)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0040   (0x0004)  MISSED
	FIntPoint                                          ParticleIterationStateRange;                                // 0x0044   (0x0008)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FName>                                      OutputDestinations;                                         // 0x0050   (0x0010)  
	TArray<FName>                                      InputDataInterfaces;                                        // 0x0060   (0x0010)  
	int32_t                                            NumIterations;                                              // 0x0070   (0x0004)  
	FName                                              NumIterationsBinding;                                       // 0x0074   (0x0008)  
	ENiagaraGpuDispatchType                            GpuDispatchType;                                            // 0x007C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	FIntVector                                         GpuDispatchNumThreads;                                      // 0x0080   (0x000C)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x008C   (0x0004)  MISSED
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGeneratedFunction
/// Size: 0x0028 (0x000000 - 0x000028)
struct FNiagaraDataInterfaceGeneratedFunction
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
/// Size: 0x0038 (0x000000 - 0x000038)
struct FNiagaraDataInterfaceGPUParamInfo
{ 
	SDK_UNDEFINED(16,1488) /* FString */               __um(DataInterfaceHLSLSymbol);                              // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1489) /* FString */               __um(DIClassName);                                          // 0x0010   (0x0010)  
	uint32_t                                           ShaderParametersOffset;                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FNiagaraDataInterfaceGeneratedFunction>     GeneratedFunctions;                                         // 0x0028   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraShaderScriptExternalConstant
/// Size: 0x0018 (0x000000 - 0x000018)
struct FNiagaraShaderScriptExternalConstant
{ 
	FName                                              Type;                                                       // 0x0000   (0x0008)  
	SDK_UNDEFINED(16,1490) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraShaderScriptParametersMetadata
/// Size: 0x0058 (0x000000 - 0x000058)
struct FNiagaraShaderScriptParametersMetadata
{ 
	TArray<FNiagaraDataInterfaceGPUParamInfo>          DataInterfaceParamInfo;                                     // 0x0000   (0x0010)  
	SDK_UNDEFINED(16,1491) /* TArray<FString> */       __um(LooseMetadataNames);                                   // 0x0010   (0x0010)  
	bool                                               bExternalConstantsInterpolated;                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<FNiagaraShaderScriptExternalConstant>       ExternalConstants;                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0038   (0x0020)  MISSED
};

/// Struct /Script/NiagaraShader.NiagaraCompileEvent
/// Size: 0x0068 (0x000000 - 0x000068)
struct FNiagaraCompileEvent
{ 
	FNiagaraCompileEventSeverity                       Severity;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(16,1492) /* FString */               __um(Message);                                              // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,1493) /* FString */               __um(ShortDescription);                                     // 0x0018   (0x0010)  
	bool                                               bDismissable;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FGuid                                              NodeGuid;                                                   // 0x002C   (0x0010)  
	FGuid                                              PinGuid;                                                    // 0x003C   (0x0010)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FGuid>                                      StackGuids;                                                 // 0x0050   (0x0010)  
	FNiagaraCompileEventSource                         Source;                                                     // 0x0060   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0061   (0x0007)  MISSED
};

