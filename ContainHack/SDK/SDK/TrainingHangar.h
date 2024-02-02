
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/TrainingHangar/Blueprints/BP_Projector.BP_Projector_C
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ABP_Projector_C : public AActor
{ 
public:
	class USpotLightComponent*                         SpotLight1;                                                 // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        SM_ProjectorHandle1;                                        // 0x0298   (0x0008)  
	class UStaticMeshComponent*                        SM_ProjectorLampR;                                          // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        SM_ProjectorLampL;                                          // 0x02A8   (0x0008)  
	class UStaticMeshComponent*                        SM_ProjectorHandle;                                         // 0x02B0   (0x0008)  
	class UStaticMeshComponent*                        SM_ProjectorLampHolder1;                                    // 0x02B8   (0x0008)  
	class UStaticMeshComponent*                        SM_ProjectorLampHolder;                                     // 0x02C0   (0x0008)  
	class UStaticMeshComponent*                        SM_ProjectorStand2;                                         // 0x02C8   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x02D0   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02D8   (0x0008)  
};

/// Class /Game/TrainingHangar/Blueprints/BP_Target1.BP_Target1_C
/// Size: 0x0038 (0x000290 - 0x0002C8)
class ABP_Target1_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        SM_target1;                                                 // 0x0298   (0x0008)  
	class UPhysicsConstraintComponent*                 PhysicsConstraint;                                          // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        SM_TargetHolder;                                            // 0x02A8   (0x0008)  
	class UStaticMeshComponent*                        SM_Cart;                                                    // 0x02B0   (0x0008)  
	class UStaticMeshComponent*                        StaticMesh;                                                 // 0x02B8   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02C0   (0x0008)  


	/// Functions
	// Function /Game/TrainingHangar/Blueprints/BP_Target1.BP_Target1_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x2119480] Event|Protected|BlueprintEvent 
	// Function /Game/TrainingHangar/Blueprints/BP_Target1.BP_Target1_C.ExecuteUbergraph_BP_Target1
	// void ExecuteUbergraph_BP_Target1(int32_t EntryPoint);                                                                 // [0x2119480] Final                
};

