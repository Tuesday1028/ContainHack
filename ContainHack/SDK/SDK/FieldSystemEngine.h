
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/FieldSystemEngine.FieldSystemActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AFieldSystemActor : public AActor
{ 
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                       // 0x0290   (0x0008)  
};

/// Class /Script/FieldSystemEngine.FieldSystem
/// Size: 0x0010 (0x000028 - 0x000038)
class UFieldSystem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Struct /Script/FieldSystemEngine.FieldObjectCommands
/// Size: 0x0030 (0x000000 - 0x000030)
struct FFieldObjectCommands
{ 
	TArray<FName>                                      TargetNames;                                                // 0x0000   (0x0010)  
	TArray<class UFieldNodeBase*>                      RootNodes;                                                  // 0x0010   (0x0010)  
	TArray<class UFieldSystemMetaData*>                MetaDatas;                                                  // 0x0020   (0x0010)  
};

/// Class /Script/FieldSystemEngine.FieldSystemComponent
/// Size: 0x00D0 (0x000540 - 0x000610)
class UFieldSystemComponent : public UPrimitiveComponent
{ 
public:
	class UFieldSystem*                                FieldSystem;                                                // 0x0538   (0x0008)  
	bool                                               bIsWorldField;                                              // 0x0540   (0x0001)  
	bool                                               bIsChaosField;                                              // 0x0541   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0542   (0x0006)  MISSED
	SDK_UNDEFINED(16,2265) /* TArray<TWeakObjectPtr<AChaosSolverActor*>> */ __um(SupportedSolvers);                // 0x0548   (0x0010)  
	FFieldObjectCommands                               ConstructionCommands;                                       // 0x0558   (0x0030)  
	FFieldObjectCommands                               BufferCommands;                                             // 0x0588   (0x0030)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x05B8   (0x0058)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	// void ResetFieldSystem();                                                                                              // [0x33f6bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.RemovePersistentFields
	// void RemovePersistentFields();                                                                                        // [0x33f6bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	// void ApplyUniformVectorFalloffForce(bool Enabled, FVector Position, FVector Direction, float Radius, float Magnitude); // [0x33f69e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	// void ApplyStrainField(bool Enabled, FVector Position, float Radius, float Magnitude, int32_t Iterations);             // [0x33f6680] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	// void ApplyStayDynamicField(bool Enabled, FVector Position, float Radius);                                             // [0x33f63b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	// void ApplyRadialVectorFalloffForce(bool Enabled, FVector Position, float Radius, float Magnitude);                    // [0x33f6220] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	// void ApplyRadialForce(bool Enabled, FVector Position, float Magnitude);                                               // [0x33f5f60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	// void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x33f5e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	// void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);                                              // [0x33f5b40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddPersistentField
	// void AddPersistentField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x33f59e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FieldSystemEngine.FieldSystemComponent.AddFieldCommand
	// void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x33f5880] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaData
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldSystemMetaData : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataIteration
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{ 
public:
	int32_t                                            Iterations;                                                 // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
	// class UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations);                                        // [0x33f7190] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{ 
public:
	SDK_UNDEFINED(1,2266) /* TEnumAsByte<EFieldResolutionType> */ __um(ResolutionType);                            // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
	// class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType); // [0x33f7230] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldSystemMetaDataFilter
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{ 
public:
	SDK_UNDEFINED(1,2267) /* TEnumAsByte<EFieldFilterType> */ __um(FilterType);                                    // 0x00A0   (0x0001)  
	SDK_UNDEFINED(1,2268) /* TEnumAsByte<EFieldObjectType> */ __um(ObjectType);                                    // 0x00A1   (0x0001)  
	SDK_UNDEFINED(1,2269) /* TEnumAsByte<EFieldPositionType> */ __um(PositionType);                                // 0x00A2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00A3   (0x0005)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
	// class UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> FilterType, TEnumAsByte<EFieldObjectType> ObjectType, TEnumAsByte<EFieldPositionType> PositionType); // [0x33f7080] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.FieldNodeBase
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeBase : public UActorComponent
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeInt
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeInt : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeFloat
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeFloat : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.FieldNodeVector
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFieldNodeVector : public UFieldNodeBase
{ 
public:
};

/// Class /Script/FieldSystemEngine.UniformInteger
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UUniformInteger : public UFieldNodeInt
{ 
public:
	int32_t                                            Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformInteger.SetUniformInteger
	// class UUniformInteger* SetUniformInteger(int32_t Magnitude);                                                          // [0x33f7190] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialIntMask
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class URadialIntMask : public UFieldNodeInt
{ 
public:
	float                                              Radius;                                                     // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x00A8   (0x0018)  
	int32_t                                            InteriorValue;                                              // 0x00C0   (0x0004)  
	int32_t                                            ExteriorValue;                                              // 0x00C4   (0x0004)  
	SDK_UNDEFINED(1,2270) /* TEnumAsByte<ESetMaskConditionType> */ __um(SetMaskCondition);                         // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialIntMask.SetRadialIntMask
	// class URadialIntMask* SetRadialIntMask(float Radius, FVector Position, int32_t InteriorValue, int32_t ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn); // [0x33f7af0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformScalar
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UUniformScalar : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.UniformScalar.SetUniformScalar
	// class UUniformScalar* SetUniformScalar(float Magnitude);                                                              // [0x33f7db0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.WaveScalar
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UWaveScalar : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x00A8   (0x0018)  
	float                                              WaveLength;                                                 // 0x00C0   (0x0004)  
	float                                              Period;                                                     // 0x00C4   (0x0004)  
	SDK_UNDEFINED(1,2271) /* TEnumAsByte<EWaveFunctionType> */ __um(Function);                                     // 0x00C8   (0x0001)  
	SDK_UNDEFINED(1,2272) /* TEnumAsByte<EFieldFalloffType> */ __um(Falloff);                                      // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00CA   (0x0006)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.WaveScalar.SetWaveScalar
	// class UWaveScalar* SetWaveScalar(float Magnitude, FVector Position, float WaveLength, float Period, float Time, TEnumAsByte<EWaveFunctionType> Function, TEnumAsByte<EFieldFalloffType> Falloff); // [0x33f7f00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialFalloff
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class URadialFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	float                                              MinRange;                                                   // 0x00A4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00A8   (0x0004)  
	float                                              Default;                                                    // 0x00AC   (0x0004)  
	float                                              Radius;                                                     // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x00B8   (0x0018)  
	SDK_UNDEFINED(1,2273) /* TEnumAsByte<EFieldFalloffType> */ __um(Falloff);                                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RadialFalloff.SetRadialFalloff
	// class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, TEnumAsByte<EFieldFalloffType> Falloff); // [0x33f78a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.PlaneFalloff
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UPlaneFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	float                                              MinRange;                                                   // 0x00A4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00A8   (0x0004)  
	float                                              Default;                                                    // 0x00AC   (0x0004)  
	float                                              Distance;                                                   // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x00B8   (0x0018)  
	FVector                                            Normal;                                                     // 0x00D0   (0x0018)  
	SDK_UNDEFINED(1,2274) /* TEnumAsByte<EFieldFalloffType> */ __um(Falloff);                                      // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00E9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
	// class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector Position, FVector Normal, TEnumAsByte<EFieldFalloffType> Falloff); // [0x33f7600] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.BoxFalloff
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UBoxFalloff : public UFieldNodeFloat
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	float                                              MinRange;                                                   // 0x00A4   (0x0004)  
	float                                              MaxRange;                                                   // 0x00A8   (0x0004)  
	float                                              Default;                                                    // 0x00AC   (0x0004)  
	FTransform                                         Transform;                                                  // 0x00B0   (0x0060)  
	SDK_UNDEFINED(1,2275) /* TEnumAsByte<EFieldFalloffType> */ __um(Falloff);                                      // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0111   (0x000F)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.BoxFalloff.SetBoxFalloff
	// class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, TEnumAsByte<EFieldFalloffType> Falloff); // [0x33f6cc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.NoiseField
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UNoiseField : public UFieldNodeFloat
{ 
public:
	float                                              MinRange;                                                   // 0x00A0   (0x0004)  
	float                                              MaxRange;                                                   // 0x00A4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x00B0   (0x0060)  


	/// Functions
	// Function /Script/FieldSystemEngine.NoiseField.SetNoiseField
	// class UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);                               // [0x33f72c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.UniformVector
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UUniformVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FVector                                            Direction;                                                  // 0x00A8   (0x0018)  


	/// Functions
	// Function /Script/FieldSystemEngine.UniformVector.SetUniformVector
	// class UUniformVector* SetUniformVector(float Magnitude, FVector Direction);                                           // [0x33f7cc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RadialVector
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class URadialVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FVector                                            Position;                                                   // 0x00A8   (0x0018)  


	/// Functions
	// Function /Script/FieldSystemEngine.RadialVector.SetRadialVector
	// class URadialVector* SetRadialVector(float Magnitude, FVector Position);                                              // [0x33f7cc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.RandomVector
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class URandomVector : public UFieldNodeVector
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00A4   (0x0004)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.RandomVector.SetRandomVector
	// class URandomVector* SetRandomVector(float Magnitude);                                                                // [0x33f7db0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.OperatorField
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UOperatorField : public UFieldNodeBase
{ 
public:
	float                                              Magnitude;                                                  // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00A4   (0x0004)  MISSED
	class UFieldNodeBase*                              RightField;                                                 // 0x00A8   (0x0008)  
	class UFieldNodeBase*                              LeftField;                                                  // 0x00B0   (0x0008)  
	SDK_UNDEFINED(1,2276) /* TEnumAsByte<EFieldOperationType> */ __um(Operation);                                  // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00B9   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.OperatorField.SetOperatorField
	// class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase* LeftField, class UFieldNodeBase* RightField, TEnumAsByte<EFieldOperationType> Operation); // [0x33f7490] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToIntegerField
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UToIntegerField : public UFieldNodeInt
{ 
public:
	class UFieldNodeFloat*                             FloatField;                                                 // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToIntegerField.SetToIntegerField
	// class UToIntegerField* SetToIntegerField(class UFieldNodeFloat* FloatField);                                          // [0x33f7e60] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ToFloatField
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UToFloatField : public UFieldNodeFloat
{ 
public:
	class UFieldNodeInt*                               IntField;                                                   // 0x00A0   (0x0008)  


	/// Functions
	// Function /Script/FieldSystemEngine.ToFloatField.SetToFloatField
	// class UToFloatField* SetToFloatField(class UFieldNodeInt* IntegerField);                                              // [0x33f7e60] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.CullingField
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UCullingField : public UFieldNodeBase
{ 
public:
	class UFieldNodeBase*                              Culling;                                                    // 0x00A0   (0x0008)  
	class UFieldNodeBase*                              Field;                                                      // 0x00A8   (0x0008)  
	SDK_UNDEFINED(1,2277) /* TEnumAsByte<EFieldCullingOperationType> */ __um(Operation);                           // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/FieldSystemEngine.CullingField.SetCullingField
	// class UCullingField* SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation); // [0x33f6f60] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/FieldSystemEngine.ReturnResultsTerminal
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UReturnResultsTerminal : public UFieldNodeBase
{ 
public:


	/// Functions
	// Function /Script/FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
	// class UReturnResultsTerminal* SetReturnResultsTerminal();                                                             // [0x33f7e40] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

