
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/Military_Crates/Blueprints/BP_Box_B2.BP_Box_B2_C
/// Size: 0x01D0 (0x000290 - 0x000460)
class ABP_Box_B2_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USceneComponent*                             Lid;                                                        // 0x0298   (0x0008)  
	class UStaticMeshComponent*                        SM_Box_B2_Cover;                                            // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        SM_Box_B2;                                                  // 0x02A8   (0x0008)  
	class UBoxComponent*                               Box;                                                        // 0x02B0   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02B8   (0x0008)  
	float                                              Opening_moving_up__E37E39E245106710CE6F37AABAE51BBA;        // 0x02C0   (0x0004)  
	float                                              Opening_open_E37E39E245106710CE6F37AABAE51BBA;              // 0x02C4   (0x0004)  
	SDK_UNDEFINED(1,2504) /* TEnumAsByte<ETimelineDirection> */ __um(Opening__Direction_E37E39E245106710CE6F37AABAE51BBA); // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	class UTimelineComponent*                          Opening;                                                    // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x02D8   (0x0008)  MISSED
	FTransform                                         position_start;                                             // 0x02E0   (0x0060)  
	FTransform                                         position_end;                                               // 0x0340   (0x0060)  
	FTransform                                         move_start;                                                 // 0x03A0   (0x0060)  
	FTransform                                         move_end;                                                   // 0x0400   (0x0060)  


	/// Functions
	// Function /Game/Military_Crates/Blueprints/BP_Box_B2.BP_Box_B2_C.Opening__FinishedFunc
	// void Opening__FinishedFunc();                                                                                         // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_B2.BP_Box_B2_C.Opening__UpdateFunc
	// void Opening__UpdateFunc();                                                                                           // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_B2.BP_Box_B2_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_B2.BP_Box_B2_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2119480] HasOutParms|BlueprintEvent 
	// Function /Game/Military_Crates/Blueprints/BP_Box_B2.BP_Box_B2_C.ExecuteUbergraph_BP_Box_B2
	// void ExecuteUbergraph_BP_Box_B2(int32_t EntryPoint);                                                                  // [0x2119480] Final|HasDefaults    
};

/// Class /Game/Military_Crates/Blueprints/BP_Box_B1.BP_Box_B1_C
/// Size: 0x01D0 (0x000290 - 0x000460)
class ABP_Box_B1_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        SM_Box_B1_Cover;                                            // 0x0298   (0x0008)  
	class USceneComponent*                             Lid;                                                        // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        SM_Box_B1;                                                  // 0x02A8   (0x0008)  
	class UBoxComponent*                               Box;                                                        // 0x02B0   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02B8   (0x0008)  
	float                                              Opening_moving_up__458E873E4323098E1D8EB198D6060AB6;        // 0x02C0   (0x0004)  
	float                                              Opening_open_458E873E4323098E1D8EB198D6060AB6;              // 0x02C4   (0x0004)  
	SDK_UNDEFINED(1,2505) /* TEnumAsByte<ETimelineDirection> */ __um(Opening__Direction_458E873E4323098E1D8EB198D6060AB6); // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	class UTimelineComponent*                          Opening;                                                    // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x02D8   (0x0008)  MISSED
	FTransform                                         position_start;                                             // 0x02E0   (0x0060)  
	FTransform                                         position_end;                                               // 0x0340   (0x0060)  
	FTransform                                         move_start;                                                 // 0x03A0   (0x0060)  
	FTransform                                         move_end;                                                   // 0x0400   (0x0060)  


	/// Functions
	// Function /Game/Military_Crates/Blueprints/BP_Box_B1.BP_Box_B1_C.Opening__FinishedFunc
	// void Opening__FinishedFunc();                                                                                         // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_B1.BP_Box_B1_C.Opening__UpdateFunc
	// void Opening__UpdateFunc();                                                                                           // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_B1.BP_Box_B1_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_B1.BP_Box_B1_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2119480] HasOutParms|BlueprintEvent 
	// Function /Game/Military_Crates/Blueprints/BP_Box_B1.BP_Box_B1_C.ExecuteUbergraph_BP_Box_B1
	// void ExecuteUbergraph_BP_Box_B1(int32_t EntryPoint);                                                                  // [0x2119480] Final|HasDefaults    
};

/// Class /Game/Military_Crates/Blueprints/BP_Box_A1.BP_Box_A1_C
/// Size: 0x01D0 (0x000290 - 0x000460)
class ABP_Box_A1_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        SM_Box_A1_Cover;                                            // 0x0298   (0x0008)  
	class USceneComponent*                             Lid;                                                        // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        SM_Box_A1;                                                  // 0x02A8   (0x0008)  
	class UBoxComponent*                               Box;                                                        // 0x02B0   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02B8   (0x0008)  
	float                                              Opening_moving_up__A26A509349D81D2A58182FB4001F1F41;        // 0x02C0   (0x0004)  
	float                                              Opening_open_A26A509349D81D2A58182FB4001F1F41;              // 0x02C4   (0x0004)  
	SDK_UNDEFINED(1,2506) /* TEnumAsByte<ETimelineDirection> */ __um(Opening__Direction_A26A509349D81D2A58182FB4001F1F41); // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	class UTimelineComponent*                          Opening;                                                    // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x02D8   (0x0008)  MISSED
	FTransform                                         position_start;                                             // 0x02E0   (0x0060)  
	FTransform                                         position_end;                                               // 0x0340   (0x0060)  
	FTransform                                         move_start;                                                 // 0x03A0   (0x0060)  
	FTransform                                         move_end;                                                   // 0x0400   (0x0060)  


	/// Functions
	// Function /Game/Military_Crates/Blueprints/BP_Box_A1.BP_Box_A1_C.Opening__FinishedFunc
	// void Opening__FinishedFunc();                                                                                         // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_A1.BP_Box_A1_C.Opening__UpdateFunc
	// void Opening__UpdateFunc();                                                                                           // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_A1.BP_Box_A1_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_A1.BP_Box_A1_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2119480] HasOutParms|BlueprintEvent 
	// Function /Game/Military_Crates/Blueprints/BP_Box_A1.BP_Box_A1_C.ExecuteUbergraph_BP_Box_A1
	// void ExecuteUbergraph_BP_Box_A1(int32_t EntryPoint);                                                                  // [0x2119480] Final|HasDefaults    
};

/// Class /Game/Military_Crates/Blueprints/BP_Box_A3.BP_Box_A3_C
/// Size: 0x01D0 (0x000290 - 0x000460)
class ABP_Box_A3_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        SM_Box_A3_Cover;                                            // 0x0298   (0x0008)  
	class USceneComponent*                             Lid;                                                        // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        SM_Box_A3;                                                  // 0x02A8   (0x0008)  
	class UBoxComponent*                               Box;                                                        // 0x02B0   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02B8   (0x0008)  
	float                                              Opening_moving_up__A968A83F45D93D37E48CDFB14DB111BE;        // 0x02C0   (0x0004)  
	float                                              Opening_open_A968A83F45D93D37E48CDFB14DB111BE;              // 0x02C4   (0x0004)  
	SDK_UNDEFINED(1,2507) /* TEnumAsByte<ETimelineDirection> */ __um(Opening__Direction_A968A83F45D93D37E48CDFB14DB111BE); // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	class UTimelineComponent*                          Opening;                                                    // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x02D8   (0x0008)  MISSED
	FTransform                                         position_start;                                             // 0x02E0   (0x0060)  
	FTransform                                         position_end;                                               // 0x0340   (0x0060)  
	FTransform                                         move_start;                                                 // 0x03A0   (0x0060)  
	FTransform                                         move_end;                                                   // 0x0400   (0x0060)  


	/// Functions
	// Function /Game/Military_Crates/Blueprints/BP_Box_A3.BP_Box_A3_C.Opening__FinishedFunc
	// void Opening__FinishedFunc();                                                                                         // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_A3.BP_Box_A3_C.Opening__UpdateFunc
	// void Opening__UpdateFunc();                                                                                           // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_A3.BP_Box_A3_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_A3.BP_Box_A3_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2119480] HasOutParms|BlueprintEvent 
	// Function /Game/Military_Crates/Blueprints/BP_Box_A3.BP_Box_A3_C.ExecuteUbergraph_BP_Box_A3
	// void ExecuteUbergraph_BP_Box_A3(int32_t EntryPoint);                                                                  // [0x2119480] Final|HasDefaults    
};

/// Class /Game/Military_Crates/Blueprints/BP_Box_A2.BP_Box_A2_C
/// Size: 0x01D0 (0x000290 - 0x000460)
class ABP_Box_A2_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UBoxComponent*                               Box;                                                        // 0x0298   (0x0008)  
	class USceneComponent*                             Lid;                                                        // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        SM_Box_A2_Cover;                                            // 0x02A8   (0x0008)  
	class UStaticMeshComponent*                        SM_Box_A2;                                                  // 0x02B0   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02B8   (0x0008)  
	float                                              Opening_moving_up__11E9854448CE5385DC6B8AA5FF0A17C3;        // 0x02C0   (0x0004)  
	float                                              Opening_open_11E9854448CE5385DC6B8AA5FF0A17C3;              // 0x02C4   (0x0004)  
	SDK_UNDEFINED(1,2508) /* TEnumAsByte<ETimelineDirection> */ __um(Opening__Direction_11E9854448CE5385DC6B8AA5FF0A17C3); // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x02C9   (0x0007)  MISSED
	class UTimelineComponent*                          Opening;                                                    // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x02D8   (0x0008)  MISSED
	FTransform                                         position_start;                                             // 0x02E0   (0x0060)  
	FTransform                                         position_end;                                               // 0x0340   (0x0060)  
	FTransform                                         move_start;                                                 // 0x03A0   (0x0060)  
	FTransform                                         move_end;                                                   // 0x0400   (0x0060)  


	/// Functions
	// Function /Game/Military_Crates/Blueprints/BP_Box_A2.BP_Box_A2_C.Opening__FinishedFunc
	// void Opening__FinishedFunc();                                                                                         // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_A2.BP_Box_A2_C.Opening__UpdateFunc
	// void Opening__UpdateFunc();                                                                                           // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_A2.BP_Box_A2_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x2119480] BlueprintEvent       
	// Function /Game/Military_Crates/Blueprints/BP_Box_A2.BP_Box_A2_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x2119480] HasOutParms|BlueprintEvent 
	// Function /Game/Military_Crates/Blueprints/BP_Box_A2.BP_Box_A2_C.ExecuteUbergraph_BP_Box_A2
	// void ExecuteUbergraph_BP_Box_A2(int32_t EntryPoint);                                                                  // [0x2119480] Final|HasDefaults    
};

