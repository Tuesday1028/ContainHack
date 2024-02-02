
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/ScienceLab/Blueprints/BP_Wire01.BP_Wire01_C
/// Size: 0x00A0 (0x000290 - 0x000330)
class ABP_Wire01_C : public AActor
{ 
public:
	class USplineComponent*                            Spline;                                                     // 0x0290   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	double                                             Spline_Length;                                              // 0x02A0   (0x0008)  
	double                                             Wire_Size;                                                  // 0x02A8   (0x0008)  
	int32_t                                            Points;                                                     // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	double                                             Specular;                                                   // 0x02B8   (0x0008)  
	double                                             Roughness;                                                  // 0x02C0   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x02C8   (0x0010)  
	int32_t                                            Wire_Var;                                                   // 0x02D8   (0x0004)  
	int32_t                                            Texture_var;                                                // 0x02DC   (0x0004)  
	int32_t                                            Spline_Mesh_Var;                                            // 0x02E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x02E4   (0x0004)  MISSED
	double                                             Spacing;                                                    // 0x02E8   (0x0008)  
	double                                             Tangent_Scale;                                              // 0x02F0   (0x0008)  
	FLinearColor                                       dirt_color;                                                 // 0x02F8   (0x0010)  
	FLinearColor                                       Color2;                                                     // 0x0308   (0x0010)  
	class USplineMeshComponent*                        Conponent_1;                                                // 0x0318   (0x0008)  
	class UMaterialInstanceDynamic*                    M1;                                                         // 0x0320   (0x0008)  
	class UMaterialInstanceDynamic*                    M2;                                                         // 0x0328   (0x0008)  


	/// Functions
	// Function /Game/ScienceLab/Blueprints/BP_Wire01.BP_Wire01_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x2119480] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/ScienceLab/Blueprints/ScientificDevice/BP_ScientificDevice02.BP_ScientificDevice02_C
/// Size: 0x0048 (0x000290 - 0x0002D8)
class ABP_ScientificDevice02_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        ScientificDevice02_Part1;                                   // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        ScientificDevice02_Hatch;                                   // 0x0298   (0x0008)  
	class UStaticMeshComponent*                        ScientificDevice02_Water;                                   // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        ScientificDevice02;                                         // 0x02A8   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02B0   (0x0008)  
	double                                             HatchRotation;                                              // 0x02B8   (0x0008)  
	double                                             BodyPosition;                                               // 0x02C0   (0x0008)  
	double                                             WaterPosition;                                              // 0x02C8   (0x0008)  
	class UMaterialInstance*                           Material;                                                   // 0x02D0   (0x0008)  


	/// Functions
	// Function /Game/ScienceLab/Blueprints/ScientificDevice/BP_ScientificDevice02.BP_ScientificDevice02_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x2119480] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/ScienceLab/Blueprints/ScientificDevice/BP_ScientificDevice03.BP_ScientificDevice03_C
/// Size: 0x0048 (0x000290 - 0x0002D8)
class ABP_ScientificDevice03_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        ScientificDevice03_Part1;                                   // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        ScientificDevice03_Water;                                   // 0x0298   (0x0008)  
	class UStaticMeshComponent*                        ScientificDevice03;                                         // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        ScientificDevice02_Hatch;                                   // 0x02A8   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02B0   (0x0008)  
	double                                             HatchRotation;                                              // 0x02B8   (0x0008)  
	double                                             BodyPosition;                                               // 0x02C0   (0x0008)  
	double                                             WaterPosition;                                              // 0x02C8   (0x0008)  
	class UMaterialInstance*                           Material;                                                   // 0x02D0   (0x0008)  


	/// Functions
	// Function /Game/ScienceLab/Blueprints/ScientificDevice/BP_ScientificDevice03.BP_ScientificDevice03_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x2119480] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/ScienceLab/Blueprints/ScientificDevice/BP_Server.BP_Server_C
/// Size: 0x0180 (0x000290 - 0x000410)
class ABP_Server_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        ServerBox01;                                                // 0x0290   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	bool                                               Random;                                                     // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02A1   (0x0003)  MISSED
	int32_t                                            Module_1_;                                                  // 0x02A4   (0x0004)  
	int32_t                                            Module_2;                                                   // 0x02A8   (0x0004)  
	int32_t                                            Module_3;                                                   // 0x02AC   (0x0004)  
	int32_t                                            Module_4;                                                   // 0x02B0   (0x0004)  
	int32_t                                            Module_5;                                                   // 0x02B4   (0x0004)  
	int32_t                                            Module_6;                                                   // 0x02B8   (0x0004)  
	int32_t                                            Module_7;                                                   // 0x02BC   (0x0004)  
	int32_t                                            Module_8;                                                   // 0x02C0   (0x0004)  
	int32_t                                            Module_9;                                                   // 0x02C4   (0x0004)  
	int32_t                                            Module_10;                                                  // 0x02C8   (0x0004)  
	int32_t                                            Module_11;                                                  // 0x02CC   (0x0004)  
	FVector                                            Location_1;                                                 // 0x02D0   (0x0018)  
	FVector                                            Location_2;                                                 // 0x02E8   (0x0018)  
	FVector                                            Location_3;                                                 // 0x0300   (0x0018)  
	FVector                                            Location_4;                                                 // 0x0318   (0x0018)  
	FVector                                            Location_5;                                                 // 0x0330   (0x0018)  
	FVector                                            Location_6;                                                 // 0x0348   (0x0018)  
	FVector                                            Location_7;                                                 // 0x0360   (0x0018)  
	FVector                                            Location_8;                                                 // 0x0378   (0x0018)  
	FVector                                            Location_9;                                                 // 0x0390   (0x0018)  
	FVector                                            Location_10;                                                // 0x03A8   (0x0018)  
	double                                             Random_Int_01;                                              // 0x03C0   (0x0008)  
	double                                             Random_Int_02;                                              // 0x03C8   (0x0008)  
	double                                             Random_Int_03;                                              // 0x03D0   (0x0008)  
	double                                             Random_Int_04;                                              // 0x03D8   (0x0008)  
	double                                             Random_Int_05;                                              // 0x03E0   (0x0008)  
	double                                             Random_Int_06;                                              // 0x03E8   (0x0008)  
	double                                             Random_Int_07;                                              // 0x03F0   (0x0008)  
	double                                             Random_Int_08;                                              // 0x03F8   (0x0008)  
	double                                             Random_Int_09;                                              // 0x0400   (0x0008)  
	double                                             Random_Int_10;                                              // 0x0408   (0x0008)  


	/// Functions
	// Function /Game/ScienceLab/Blueprints/ScientificDevice/BP_Server.BP_Server_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x2119480] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/ScienceLab/Blueprints/ScientificDevice/BP_Server02.BP_Server02_C
/// Size: 0x0460 (0x000290 - 0x0006F0)
class ABP_Server02_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        ServerBox02;                                                // 0x0290   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x0298   (0x0008)  
	bool                                               Random;                                                     // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02A1   (0x0003)  MISSED
	int32_t                                            Module_1_;                                                  // 0x02A4   (0x0004)  
	int32_t                                            Module_2;                                                   // 0x02A8   (0x0004)  
	int32_t                                            Module_3;                                                   // 0x02AC   (0x0004)  
	int32_t                                            Module_4;                                                   // 0x02B0   (0x0004)  
	int32_t                                            Module_5;                                                   // 0x02B4   (0x0004)  
	int32_t                                            Module_6;                                                   // 0x02B8   (0x0004)  
	int32_t                                            Module_7;                                                   // 0x02BC   (0x0004)  
	int32_t                                            Module_8;                                                   // 0x02C0   (0x0004)  
	int32_t                                            Module_9;                                                   // 0x02C4   (0x0004)  
	int32_t                                            Module_10;                                                  // 0x02C8   (0x0004)  
	int32_t                                            Module_11;                                                  // 0x02CC   (0x0004)  
	FVector                                            Location_1;                                                 // 0x02D0   (0x0018)  
	FVector                                            Location_2;                                                 // 0x02E8   (0x0018)  
	FVector                                            Location_3;                                                 // 0x0300   (0x0018)  
	FVector                                            Location_4;                                                 // 0x0318   (0x0018)  
	FVector                                            Location_5;                                                 // 0x0330   (0x0018)  
	FVector                                            Location_6;                                                 // 0x0348   (0x0018)  
	FVector                                            Location_7;                                                 // 0x0360   (0x0018)  
	FVector                                            Location_8;                                                 // 0x0378   (0x0018)  
	FVector                                            Location_9;                                                 // 0x0390   (0x0018)  
	FVector                                            Location_10;                                                // 0x03A8   (0x0018)  
	double                                             Random_Int_01;                                              // 0x03C0   (0x0008)  
	double                                             Random_Int_02;                                              // 0x03C8   (0x0008)  
	double                                             Random_Int_03;                                              // 0x03D0   (0x0008)  
	double                                             Random_Int_04;                                              // 0x03D8   (0x0008)  
	double                                             Random_Int_05;                                              // 0x03E0   (0x0008)  
	double                                             Random_Int_06;                                              // 0x03E8   (0x0008)  
	double                                             Random_Int_07;                                              // 0x03F0   (0x0008)  
	double                                             Random_Int_08;                                              // 0x03F8   (0x0008)  
	double                                             Random_Int_09;                                              // 0x0400   (0x0008)  
	double                                             Random_Int_10;                                              // 0x0408   (0x0008)  
	int32_t                                            Module_12;                                                  // 0x0410   (0x0004)  
	int32_t                                            Module_13;                                                  // 0x0414   (0x0004)  
	int32_t                                            Module_14;                                                  // 0x0418   (0x0004)  
	int32_t                                            Module_15;                                                  // 0x041C   (0x0004)  
	int32_t                                            Module_16;                                                  // 0x0420   (0x0004)  
	int32_t                                            Module_17;                                                  // 0x0424   (0x0004)  
	int32_t                                            Module_18;                                                  // 0x0428   (0x0004)  
	int32_t                                            Module_19;                                                  // 0x042C   (0x0004)  
	int32_t                                            Module_20;                                                  // 0x0430   (0x0004)  
	int32_t                                            Module_21;                                                  // 0x0434   (0x0004)  
	int32_t                                            Module_22;                                                  // 0x0438   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x043C   (0x0004)  MISSED
	FVector                                            Location_11;                                                // 0x0440   (0x0018)  
	FVector                                            Location_12;                                                // 0x0458   (0x0018)  
	FVector                                            Location_13;                                                // 0x0470   (0x0018)  
	FVector                                            Location_14;                                                // 0x0488   (0x0018)  
	FVector                                            Location_15;                                                // 0x04A0   (0x0018)  
	FVector                                            Location_16;                                                // 0x04B8   (0x0018)  
	FVector                                            Location_17;                                                // 0x04D0   (0x0018)  
	FVector                                            Location_18;                                                // 0x04E8   (0x0018)  
	FVector                                            Location_19;                                                // 0x0500   (0x0018)  
	FVector                                            Location_20;                                                // 0x0518   (0x0018)  
	double                                             Random_Int_11;                                              // 0x0530   (0x0008)  
	double                                             Random_Int_12;                                              // 0x0538   (0x0008)  
	double                                             Random_Int_13;                                              // 0x0540   (0x0008)  
	double                                             Random_Int_14;                                              // 0x0548   (0x0008)  
	double                                             Random_Int_15;                                              // 0x0550   (0x0008)  
	double                                             Random_Int_16;                                              // 0x0558   (0x0008)  
	double                                             Random_Int_17;                                              // 0x0560   (0x0008)  
	double                                             Random_Int_18;                                              // 0x0568   (0x0008)  
	double                                             Random_Int_19;                                              // 0x0570   (0x0008)  
	double                                             Random_Int_20;                                              // 0x0578   (0x0008)  
	int32_t                                            Module_23;                                                  // 0x0580   (0x0004)  
	int32_t                                            Module_24;                                                  // 0x0584   (0x0004)  
	int32_t                                            Module_25;                                                  // 0x0588   (0x0004)  
	int32_t                                            Module_26;                                                  // 0x058C   (0x0004)  
	int32_t                                            Module_27;                                                  // 0x0590   (0x0004)  
	int32_t                                            Module_28;                                                  // 0x0594   (0x0004)  
	int32_t                                            Module_29;                                                  // 0x0598   (0x0004)  
	int32_t                                            Module_30;                                                  // 0x059C   (0x0004)  
	int32_t                                            Module_31;                                                  // 0x05A0   (0x0004)  
	int32_t                                            Module_32;                                                  // 0x05A4   (0x0004)  
	int32_t                                            Module_33;                                                  // 0x05A8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x05AC   (0x0004)  MISSED
	FVector                                            Location_21;                                                // 0x05B0   (0x0018)  
	FVector                                            Location_22;                                                // 0x05C8   (0x0018)  
	FVector                                            Location_23;                                                // 0x05E0   (0x0018)  
	FVector                                            Location_24;                                                // 0x05F8   (0x0018)  
	FVector                                            Location_25;                                                // 0x0610   (0x0018)  
	FVector                                            Location_26;                                                // 0x0628   (0x0018)  
	FVector                                            Location_27;                                                // 0x0640   (0x0018)  
	FVector                                            Location_28;                                                // 0x0658   (0x0018)  
	FVector                                            Location_29;                                                // 0x0670   (0x0018)  
	FVector                                            Location_30;                                                // 0x0688   (0x0018)  
	double                                             Random_Int_21;                                              // 0x06A0   (0x0008)  
	double                                             Random_Int_22;                                              // 0x06A8   (0x0008)  
	double                                             Random_Int_23;                                              // 0x06B0   (0x0008)  
	double                                             Random_Int_24;                                              // 0x06B8   (0x0008)  
	double                                             Random_Int_25;                                              // 0x06C0   (0x0008)  
	double                                             Random_Int_26;                                              // 0x06C8   (0x0008)  
	double                                             Random_Int_27;                                              // 0x06D0   (0x0008)  
	double                                             Random_Int_28;                                              // 0x06D8   (0x0008)  
	double                                             Random_Int_29;                                              // 0x06E0   (0x0008)  
	double                                             Random_Int_30;                                              // 0x06E8   (0x0008)  


	/// Functions
	// Function /Game/ScienceLab/Blueprints/ScientificDevice/BP_Server02.BP_Server02_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x2119480] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

