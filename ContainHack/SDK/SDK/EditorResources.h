
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FieldSystemEngine

/// Enum /Engine/EditorResources/FieldNodes/_Resources/EFieldForceVel.EFieldForceVel
/// Size: 0x03
enum class EFieldForceVel : uint8_t
{
	EFieldForceVel__NewEnumerator0                                                   = 0,
	EFieldForceVel__NewEnumerator1                                                   = 1,
	EFieldForceVel__EFieldForceVel_MAX                                               = 2
};

/// Enum /Engine/EditorResources/FieldNodes/_Resources/EFieldShapeType.EFieldShapeType
/// Size: 0x04
enum class EFieldShapeType : uint8_t
{
	EFieldShapeType__NewEnumerator0                                                  = 0,
	EFieldShapeType__NewEnumerator1                                                  = 1,
	EFieldShapeType__NewEnumerator2                                                  = 2,
	EFieldShapeType__EFieldShapeType_MAX                                             = 3
};

/// Enum /Engine/EditorResources/FieldNodes/_Resources/EFieldActivationType.EFieldActivationType
/// Size: 0x05
enum class EFieldActivationType : uint8_t
{
	EFieldActivationType__NewEnumerator0                                             = 0,
	EFieldActivationType__NewEnumerator2                                             = 1,
	EFieldActivationType__NewEnumerator3                                             = 2,
	EFieldActivationType__NewEnumerator4                                             = 3,
	EFieldActivationType__EFieldActivationType_MAX                                   = 4
};

/// Class /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C
/// Size: 0x04E8 (0x000298 - 0x000780)
class AFS_MasterField_C : public AFieldSystemActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class UFieldSystemMetaDataProcessingResolution*    FieldSystemMetaDataProcessingResolution;                    // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        SM_PlanarNormal_Arrow2;                                     // 0x02A8   (0x0008)  
	class UStaticMeshComponent*                        PlaneVolumeFalloffDistance;                                 // 0x02B0   (0x0008)  
	class UBoxComponent*                               PlaneVolumeBox;                                             // 0x02B8   (0x0008)  
	class UStaticMeshComponent*                        PlaneVolume;                                                // 0x02C0   (0x0008)  
	class UStaticMeshComponent*                        SM_DirectionArrow;                                          // 0x02C8   (0x0008)  
	class USphereComponent*                            DirectionalArrowNull;                                       // 0x02D0   (0x0008)  
	class USphereComponent*                            SphereVolumeCol;                                            // 0x02D8   (0x0008)  
	class UStaticMeshComponent*                        SM_RadialArrow;                                             // 0x02E0   (0x0008)  
	class UStaticMeshComponent*                        SM_RadialArrow4;                                            // 0x02E8   (0x0008)  
	class UStaticMeshComponent*                        SM_RadialArrow3;                                            // 0x02F0   (0x0008)  
	class UStaticMeshComponent*                        SM_RadialArrow2;                                            // 0x02F8   (0x0008)  
	class UStaticMeshComponent*                        SM_RadialArrow1;                                            // 0x0300   (0x0008)  
	class UStaticMeshComponent*                        SM_RadialArrow5;                                            // 0x0308   (0x0008)  
	class UStaticMeshComponent*                        SM_PlanarNormal_Arrow1;                                     // 0x0310   (0x0008)  
	class UStaticMeshComponent*                        SM_DirectionArrow1;                                         // 0x0318   (0x0008)  
	class UStaticMeshComponent*                        SM_DirectionArrow2;                                         // 0x0320   (0x0008)  
	class UTextRenderComponent*                        NoiseMaxValueText;                                          // 0x0328   (0x0008)  
	class UTextRenderComponent*                        NoiseMinValueText;                                          // 0x0330   (0x0008)  
	class UTextRenderComponent*                        TorqueValueText;                                            // 0x0338   (0x0008)  
	class UTextRenderComponent*                        Noise_MinMaxTitle_Text;                                     // 0x0340   (0x0008)  
	class UTextRenderComponent*                        TorqueTitleText;                                            // 0x0348   (0x0008)  
	class UTextRenderComponent*                        DirectionalValueText;                                       // 0x0350   (0x0008)  
	class UTextRenderComponent*                        DirectionalMagTitleText;                                    // 0x0358   (0x0008)  
	class UTextRenderComponent*                        RadialValueText;                                            // 0x0360   (0x0008)  
	class UTextRenderComponent*                        Radial_Mag_Title_Text;                                      // 0x0368   (0x0008)  
	class UTextRenderComponent*                        StrainValueText;                                            // 0x0370   (0x0008)  
	class UTextRenderComponent*                        StrainTitleText;                                            // 0x0378   (0x0008)  
	class UTextRenderComponent*                        DelayTitleText;                                             // 0x0380   (0x0008)  
	class UTextRenderComponent*                        ActiveTitleText;                                            // 0x0388   (0x0008)  
	class UTextRenderComponent*                        DelayValueText;                                             // 0x0390   (0x0008)  
	class UStaticMeshComponent*                        SphereVolume;                                               // 0x0398   (0x0008)  
	class UTextRenderComponent*                        ActiveValueText;                                            // 0x03A0   (0x0008)  
	class UTextRenderComponent*                        FieldTitleText;                                             // 0x03A8   (0x0008)  
	class UStaticMeshComponent*                        BoxVolume;                                                  // 0x03B0   (0x0008)  
	class UTextRenderComponent*                        Field_Text;                                                 // 0x03B8   (0x0008)  
	class UBoxComponent*                               BoxVolumeCol;                                               // 0x03C0   (0x0008)  
	class UReturnResultsTerminal*                      ReturnResultsTerminal;                                      // 0x03C8   (0x0008)  
	bool                                               Field_Active;                                               // 0x03D0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x03D1   (0x0007)  MISSED
	class UOperatorField*                              OperatorFIeld_Input;                                        // 0x03D8   (0x0008)  
	bool                                               Debug;                                                      // 0x03E0   (0x0001)  
	SDK_UNDEFINED(1,2278) /* TEnumAsByte<EFieldActivationType> */ __um(ActivationType);                            // 0x03E1   (0x0001)  
	SDK_UNDEFINED(1,2279) /* TEnumAsByte<EFieldShapeType> */ __um(Field_Falloff_Shape);                            // 0x03E2   (0x0001)  
	bool                                               UseTick;                                                    // 0x03E3   (0x0001)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x03E4   (0x0004)  MISSED
	double                                             DelayAmount;                                                // 0x03E8   (0x0008)  
	bool                                               Use_External_Strain;                                        // 0x03F0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x03F1   (0x0007)  MISSED
	double                                             Strain_Magnitude;                                           // 0x03F8   (0x0008)  
	SDK_UNDEFINED(1,2280) /* TEnumAsByte<EFieldFalloffType> */ __um(StrainFalloffType);                            // 0x0400   (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0401   (0x0007)  MISSED
	FVector2D                                          StrainFalloffMinMax;                                        // 0x0408   (0x0010)  
	int32_t                                            NumStrainHits;                                              // 0x0418   (0x0004)  
	bool                                               UseRadialVector;                                            // 0x041C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x041D   (0x0003)  MISSED
	double                                             Radial_Magnitude;                                           // 0x0420   (0x0008)  
	bool                                               UseDirectionalVector;                                       // 0x0428   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0429   (0x0007)  MISSED
	double                                             DirectionalMagnitude;                                       // 0x0430   (0x0008)  
	bool                                               UseTorque;                                                  // 0x0438   (0x0001)  
	unsigned char                                      UnknownData06_5[0x7];                                       // 0x0439   (0x0007)  MISSED
	double                                             TorqueMult;                                                 // 0x0440   (0x0008)  
	SDK_UNDEFINED(1,2281) /* TEnumAsByte<EFieldFalloffType> */ __um(VelocityFieldFalloffType);                     // 0x0448   (0x0001)  
	unsigned char                                      UnknownData07_5[0x7];                                       // 0x0449   (0x0007)  MISSED
	FVector2D                                          VelocityFalloffMinMax;                                      // 0x0450   (0x0010)  
	bool                                               UseNoise;                                                   // 0x0460   (0x0001)  
	unsigned char                                      UnknownData08_5[0x7];                                       // 0x0461   (0x0007)  MISSED
	FVector2D                                          NoiseMinMax;                                                // 0x0468   (0x0010)  
	bool                                               UseDecay;                                                   // 0x0478   (0x0001)  
	unsigned char                                      UnknownData09_5[0x7];                                       // 0x0479   (0x0007)  MISSED
	double                                             DecayAmount;                                                // 0x0480   (0x0008)  
	SDK_UNDEFINED(1,2282) /* TEnumAsByte<EFieldFalloffType> */ __um(DecayFalloffType);                             // 0x0488   (0x0001)  
	unsigned char                                      UnknownData10_5[0x7];                                       // 0x0489   (0x0007)  MISSED
	FVector2D                                          DecayFalloffMinMax;                                         // 0x0490   (0x0010)  
	class UStaticMeshComponent*                        FieldVolume;                                                // 0x04A0   (0x0008)  
	double                                             DecayDelay;                                                 // 0x04A8   (0x0008)  
	double                                             MaxDecayAmount;                                             // 0x04B0   (0x0008)  
	FVector                                            RadialPositionOffset;                                       // 0x04B8   (0x0018)  
	bool                                               OverideDIrectionalVector;                                   // 0x04D0   (0x0001)  
	unsigned char                                      UnknownData11_5[0x7];                                       // 0x04D1   (0x0007)  MISSED
	FVector                                            DIrectionalVectorOveride;                                   // 0x04D8   (0x0018)  
	FVector                                            TorqueVectorOveride;                                        // 0x04F0   (0x0018)  
	SDK_UNDEFINED(1,2283) /* TEnumAsByte<EFieldForceVel> */ __um(Force_Velocity_Vector_Switch);                    // 0x0508   (0x0001)  
	unsigned char                                      UnknownData12_5[0x7];                                       // 0x0509   (0x0007)  MISSED
	double                                             ForceMult;                                                  // 0x0510   (0x0008)  
	bool                                               BoxCullingOnPlanar;                                         // 0x0518   (0x0001)  
	unsigned char                                      UnknownData13_5[0x7];                                       // 0x0519   (0x0007)  MISSED
	double                                             PlanarFalloffDistOveride;                                   // 0x0520   (0x0008)  
	bool                                               Force_Dynamic_Switch;                                       // 0x0528   (0x0001)  
	bool                                               ActivateTaggedStaticAndSkeletal;                            // 0x0529   (0x0001)  
	unsigned char                                      UnknownData14_5[0x6];                                       // 0x052A   (0x0006)  MISSED
	SDK_UNDEFINED(24,2284) /* FText */                 __um(Chaos_Field_Name);                                     // 0x0530   (0x0018)  
	FLinearColor                                       FieldColour;                                                // 0x0548   (0x0010)  
	bool                                               ShowDebugText;                                              // 0x0558   (0x0001)  
	bool                                               ShowWireFrame;                                              // 0x0559   (0x0001)  
	bool                                               ShowSolidShapes;                                            // 0x055A   (0x0001)  
	unsigned char                                      UnknownData15_5[0x5];                                       // 0x055B   (0x0005)  MISSED
	double                                             DirectionalDisplayScale;                                    // 0x0560   (0x0008)  
	double                                             RadialDisplayScale;                                         // 0x0568   (0x0008)  
	double                                             Text_Vertical_Offset;                                       // 0x0570   (0x0008)  
	SDK_UNDEFINED(1,2285) /* TEnumAsByte<EFieldPhysicsType> */ __um(LinearPhysicsType);                            // 0x0578   (0x0001)  
	SDK_UNDEFINED(1,2286) /* TEnumAsByte<EFieldPhysicsType> */ __um(AngularPhysicsType);                           // 0x0579   (0x0001)  
	SDK_UNDEFINED(1,2287) /* TEnumAsByte<EFieldFalloffType> */ __um(FieldFalloffType);                             // 0x057A   (0x0001)  
	SDK_UNDEFINED(1,2288) /* TEnumAsByte<EFieldFalloffType> */ __um(Field_Falloff_Noise);                          // 0x057B   (0x0001)  
	SDK_UNDEFINED(1,2289) /* TEnumAsByte<EFieldFalloffType> */ __um(Field_Falloff_Torque);                         // 0x057C   (0x0001)  
	bool                                               UseLifespan;                                                // 0x057D   (0x0001)  
	unsigned char                                      UnknownData16_5[0x2];                                       // 0x057E   (0x0002)  MISSED
	double                                             FieldLifespan;                                              // 0x0580   (0x0008)  
	bool                                               UseFramesForTiming;                                         // 0x0588   (0x0001)  
	unsigned char                                      UnknownData17_5[0x7];                                       // 0x0589   (0x0007)  MISSED
	double                                             FPS;                                                        // 0x0590   (0x0008)  
	EObjectStateTypeEnum                               Dynamic_State;                                              // 0x0598   (0x0001)  
	unsigned char                                      UnknownData18_5[0x7];                                       // 0x0599   (0x0007)  MISSED
	double                                             PlanarFalloffDist;                                          // 0x05A0   (0x0008)  
	double                                             TotalDecay;                                                 // 0x05A8   (0x0008)  
	FVector2D                                          falloffMinMax;                                              // 0x05B0   (0x0010)  
	FLinearColor                                       PlanarFalloffExtentColor;                                   // 0x05C0   (0x0010)  
	FVector                                            DIrectionalVelocityVector;                                  // 0x05D0   (0x0018)  
	FVector                                            UpVector;                                                   // 0x05E8   (0x0018)  
	FVector                                            WorldLocation;                                              // 0x0600   (0x0018)  
	FVector                                            forwardVector;                                              // 0x0618   (0x0018)  
	FVector                                            rightVector;                                                // 0x0630   (0x0018)  
	class USkeletalMeshComponent*                      skel;                                                       // 0x0648   (0x0008)  
	TArray<class AStaticMeshActor*>                    SimmableStaticMeshes;                                       // 0x0650   (0x0010)  
	TArray<class ASkeletalMeshActor*>                  SimmableSkelMeshes;                                         // 0x0660   (0x0010)  
	FName                                              PulseLevel;                                                 // 0x0670   (0x0008)  
	SDK_UNDEFINED(16,2290) /* TArray<FText> */         __um(TextDisplay);                                          // 0x0678   (0x0010)  
	TArray<class UTextRenderComponent*>                AllText;                                                    // 0x0688   (0x0010)  
	FLinearColor                                       ArrowColour_Dir;                                            // 0x0698   (0x0010)  
	FLinearColor                                       ArrowColour_Normal;                                         // 0x06A8   (0x0010)  
	FLinearColor                                       DeactivatedColour;                                          // 0x06B8   (0x0010)  
	FLinearColor                                       DeactivatedTextColour;                                      // 0x06C8   (0x0010)  
	class UMaterialInstanceDynamic*                    Preview_Material;                                           // 0x06D8   (0x0008)  
	double                                             TimeElapsed;                                                // 0x06E0   (0x0008)  
	double                                             NoiseScaleMult;                                             // 0x06E8   (0x0008)  
	FTransform                                         NewVar;                                                     // 0x06F0   (0x0060)  
	bool                                               isTriggered;                                                // 0x0750   (0x0001)  
	unsigned char                                      UnknownData19_5[0x7];                                       // 0x0751   (0x0007)  MISSED
	double                                             NoiseScaleBase;                                             // 0x0758   (0x0008)  
	bool                                               DestroyActor;                                               // 0x0760   (0x0001)  
	SDK_UNDEFINED(1,2291) /* TEnumAsByte<EFieldFalloffType> */ __um(FieldFalloffType_Input);                       // 0x0761   (0x0001)  
	unsigned char                                      UnknownData20_5[0x6];                                       // 0x0762   (0x0006)  MISSED
	FVector2D                                          FalloffMinMax_Input;                                        // 0x0768   (0x0010)  
	double                                             Magnitude_Input;                                            // 0x0778   (0x0008)  


	/// Functions
	// Function /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C.CalculateNoise
	// void CalculateNoise(class UNoiseField*& OutputPin);                                                                   // [0x2119480] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C.FalloffShapeSwitch
	// void FalloffShapeSwitch(TEnumAsByte<EFieldFalloffType> FalloffType, FVector2D falloffMinMax, class UOperatorField*& OperatorFieldOut); // [0x2119480] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C.MakeDynamic_EnableNonGC
	// void MakeDynamic_EnableNonGC();                                                                                       // [0x2119480] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C.InitializeFieldVariables
	// void InitializeFieldVariables();                                                                                      // [0x2119480] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C.DisplayTextSetup
	// void DisplayTextSetup();                                                                                              // [0x2119480] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C.ForceMultiplier
	// void ForceMultiplier();                                                                                               // [0x2119480] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C.SetVisibility
	// void SetVisibility();                                                                                                 // [0x2119480] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C.FalloffAndCullSwitch_Main
	// void FalloffAndCullSwitch_Main(double Magnitude, TEnumAsByte<EFieldFalloffType> FalloffType, FVector2D falloffMinMax, class UOperatorField* OperatorField, class UCullingField*& CullingField); // [0x2119480] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x2119480] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x2119480] Event|Protected|BlueprintEvent 
	// Function /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C.CE_Trigger
	// void CE_Trigger();                                                                                                    // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/EditorResources/FieldNodes/FS_MasterField.FS_MasterField_C.ExecuteUbergraph_FS_MasterField
	// void ExecuteUbergraph_FS_MasterField(int32_t EntryPoint);                                                             // [0x2119480] Final|HasDefaults    
};

