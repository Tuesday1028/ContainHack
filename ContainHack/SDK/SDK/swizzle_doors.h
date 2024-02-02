
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/swizzle_doors/Blueprints/BP_D5.BP_D5_C
/// Size: 0x0039 (0x000290 - 0x0002C9)
class ABP_D5_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UAudioComponent*                             SFX_airlockclosing_Cue;                                     // 0x0298   (0x0008)  
	class UAudioComponent*                             SFX_airlockopening_Cue;                                     // 0x02A0   (0x0008)  
	class USkeletalMeshComponent*                      SkeletalMesh;                                               // 0x02A8   (0x0008)  
	class UBoxComponent*                               Box;                                                        // 0x02B0   (0x0008)  
	class UStaticMeshComponent*                        d5_frame;                                                   // 0x02B8   (0x0008)  
	double                                             AnimationTime;                                              // 0x02C0   (0x0008)  
	bool                                               DoesTrigger;                                                // 0x02C8   (0x0001)  


	/// Functions
	// Function /Game/swizzle_doors/Blueprints/BP_D5.BP_D5_C.OpenDoor
	// void OpenDoor();                                                                                                      // [0x2119480] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/swizzle_doors/Blueprints/BP_D5.BP_D5_C.OpenDoor_Server
	// void OpenDoor_Server();                                                                                               // [0x2119480] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/swizzle_doors/Blueprints/BP_D5.BP_D5_C.CloseDoor
	// void CloseDoor();                                                                                                     // [0x2119480] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/swizzle_doors/Blueprints/BP_D5.BP_D5_C.CloseDoor_Server
	// void CloseDoor_Server();                                                                                              // [0x2119480] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/swizzle_doors/Blueprints/BP_D5.BP_D5_C.ExecuteUbergraph_BP_D5
	// void ExecuteUbergraph_BP_D5(int32_t EntryPoint);                                                                      // [0x2119480] Final                
};

/// Class /Game/swizzle_doors/Blueprints/BP_D5_fake.BP_D5_fake_C
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ABP_D5_fake_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USkeletalMeshComponent*                      SkeletalMesh;                                               // 0x0298   (0x0008)  
	class UBoxComponent*                               Box;                                                        // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        d5_frame;                                                   // 0x02A8   (0x0008)  
	double                                             AnimationTime;                                              // 0x02B0   (0x0008)  


	/// Functions
	// Function /Game/swizzle_doors/Blueprints/BP_D5_fake.BP_D5_fake_C.BndEvt__BP_D1_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__BP_D1_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2119480] HasOutParms|BlueprintEvent 
	// Function /Game/swizzle_doors/Blueprints/BP_D5_fake.BP_D5_fake_C.BndEvt__BP_D1_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__BP_D1_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2119480] BlueprintEvent       
	// Function /Game/swizzle_doors/Blueprints/BP_D5_fake.BP_D5_fake_C.ExecuteUbergraph_BP_D5_fake
	// void ExecuteUbergraph_BP_D5_fake(int32_t EntryPoint);                                                                 // [0x2119480] Final|HasDefaults    
};

