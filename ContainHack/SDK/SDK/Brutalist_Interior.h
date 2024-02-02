
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Contain
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Fps
/// dependency: MediaAssets

/// Class /Game/Brutalist_Interior/Blueprints/BP_Light_Panel_01.BP_Light_Panel_01_C
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ABP_Light_Panel_01_C : public AActor
{ 
public:
	class URectLightComponent*                         RectLight;                                                  // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        panel;                                                      // 0x0298   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02A0   (0x0008)  
};

/// Class /Game/Brutalist_Interior/Blueprints/BP_Door_Static.BP_Door_Static_C
/// Size: 0x0038 (0x000290 - 0x0002C8)
class ABP_Door_Static_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        SM_Card_Reader_01_L2;                                       // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        SM_Card_Reader_02;                                          // 0x0298   (0x0008)  
	class UStaticMeshComponent*                        SM_Card_Reader_01_L1;                                       // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        SM_Card_Reader_01;                                          // 0x02A8   (0x0008)  
	class UStaticMeshComponent*                        SM_MO_Door_01;                                              // 0x02B0   (0x0008)  
	class UStaticMeshComponent*                        SM_MO_Door_Frame_01;                                        // 0x02B8   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02C0   (0x0008)  
};

/// Class /Game/Brutalist_Interior/Blueprints/BP_Door_Factory_v3.BP_Door_Factory_v3_C
/// Size: 0x0020 (0x000290 - 0x0002B0)
class ABP_Door_Factory_v3_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        SM_MO_Door_02;                                              // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        SM_MO_FireDoor_01_Frame;                                    // 0x0298   (0x0008)  
	class UStaticMeshComponent*                        SM_MO_Door_01;                                              // 0x02A0   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02A8   (0x0008)  
};

/// Class /Game/Brutalist_Interior/Blueprints/BP_HoloDisplay_01.BP_HoloDisplay_01_C
/// Size: 0x0020 (0x000290 - 0x0002B0)
class ABP_HoloDisplay_01_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        Neon2;                                                      // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        Neon1;                                                      // 0x0298   (0x0008)  
	class UStaticMeshComponent*                        Poster;                                                     // 0x02A0   (0x0008)  
	class USceneComponent*                             SharedRoot;                                                 // 0x02A8   (0x0008)  
};

/// Class /Game/Brutalist_Interior/Blueprints/BP_Colum_Light_01.BP_Colum_Light_01_C
/// Size: 0x0048 (0x000290 - 0x0002D8)
class ABP_Colum_Light_01_C : public AActor
{ 
public:
	class UStaticMeshComponent*                        StaticMeshComponent7;                                       // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent6;                                       // 0x0298   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent5;                                       // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent4;                                       // 0x02A8   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent3;                                       // 0x02B0   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent2;                                       // 0x02B8   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent1;                                       // 0x02C0   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent0;                                       // 0x02C8   (0x0008)  
	class USceneComponent*                             SharedRoot;                                                 // 0x02D0   (0x0008)  
};

/// Class /Game/Brutalist_Interior/Levels/HUB01.HUB01_C
/// Size: 0x0068 (0x000298 - 0x000300)
class AHUB01_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class AB_DemoCharacter_C*                          As_B_Demo_Character;                                        // 0x02A0   (0x0008)  
	class UObject*                                     WGRef;                                                      // 0x02A8   (0x0008)  
	class AB_DemoController_C*                         As_B_Demo_Controller;                                       // 0x02B0   (0x0008)  
	class UObject*                                     NewVar;                                                     // 0x02B8   (0x0008)  
	SDK_UNDEFINED(16,2011) /* FString */               __um(In_URL);                                               // 0x02C0   (0x0010)  
	class AB_DemoGameModeBase_C*                       As_B_Demo_Game_Mode_Base;                                   // 0x02D0   (0x0008)  
	class UGI_Contain_C*                               As_GI_Contain;                                              // 0x02D8   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x02E0   (0x0008)  
	class UGI_Contain_C*                               As_GI_Contain0;                                             // 0x02E8   (0x0008)  
	class USettings_SG_C*                              SettingsSave;                                               // 0x02F0   (0x0008)  
	class APostProcessVolume*                          PostProcessVolume_0_ExecuteUbergraph_HUB01_RefProperty;     // 0x02F8   (0x0008)  


	/// Functions
	// Function /Game/Brutalist_Interior/Levels/HUB01.HUB01_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x2119480] Event|Protected|BlueprintEvent 
	// Function /Game/Brutalist_Interior/Levels/HUB01.HUB01_C.ClientCharacter
	// void ClientCharacter();                                                                                               // [0x2119480] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/Brutalist_Interior/Levels/HUB01.HUB01_C.ExecuteUbergraph_HUB01
	// void ExecuteUbergraph_HUB01(int32_t EntryPoint);                                                                      // [0x2119480] Final|HasDefaults    
};

/// Class /Game/Brutalist_Interior/Levels/HUB01_custom_screen.HUB01_custom_screen_C
/// Size: 0x0008 (0x000298 - 0x0002A0)
class AHUB01_custom_screen_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  


	/// Functions
	// Function /Game/Brutalist_Interior/Levels/HUB01_custom_screen.HUB01_custom_screen_C.BndEvt__HUB01_custom_screen_TriggerBox_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
	// void BndEvt__HUB01_custom_screen_TriggerBox_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x2119480] BlueprintEvent       
	// Function /Game/Brutalist_Interior/Levels/HUB01_custom_screen.HUB01_custom_screen_C.BndEvt__HUB01_custom_screen_TriggerBox_3_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature
	// void BndEvt__HUB01_custom_screen_TriggerBox_3_K2Node_ActorBoundEvent_1_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x2119480] BlueprintEvent       
	// Function /Game/Brutalist_Interior/Levels/HUB01_custom_screen.HUB01_custom_screen_C.ExecuteUbergraph_HUB01_custom_screen
	// void ExecuteUbergraph_HUB01_custom_screen(int32_t EntryPoint);                                                        // [0x2119480] Final                
};

/// Class /Game/Brutalist_Interior/Levels/Hub01_NewCustomShowcase.Hub01_NewCustomShowcase_C
/// Size: 0x0000 (0x000298 - 0x000298)
class AHub01_NewCustomShowcase_C : public ALevelScriptActor
{ 
public:
};

/// Class /Game/Brutalist_Interior/Blueprints/BP_Lamp_03.BP_Lamp_03_C
/// Size: 0x0048 (0x000290 - 0x0002D8)
class ABP_Lamp_03_C : public AActor
{ 
public:
	class UAudioComponent*                             Audio;                                                      // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        SM_MO_Lamp_Wire_v4;                                         // 0x0298   (0x0008)  
	class UStaticMeshComponent*                        SM_MO_Lamp_Wire_v3;                                         // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        SM_MO_Lamp_03_p2;                                           // 0x02A8   (0x0008)  
	class UStaticMeshComponent*                        SM_MO_Lamp_03_p3;                                           // 0x02B0   (0x0008)  
	class UStaticMeshComponent*                        SM_MO_Lamp_Wire_v2;                                         // 0x02B8   (0x0008)  
	class UStaticMeshComponent*                        SM_MO_Lamp_Wire_v1;                                         // 0x02C0   (0x0008)  
	class UStaticMeshComponent*                        SM_MO_Lamp_03_p1;                                           // 0x02C8   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02D0   (0x0008)  
};

/// Class /Game/Brutalist_Interior/Levels/HUB01_Multiplayer.HUB01_Multiplayer_C
/// Size: 0x0028 (0x000298 - 0x0002C0)
class AHUB01_Multiplayer_C : public ALevelScriptActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0298   (0x0008)  
	class AB_DemoCharacter_Child_C*                    ref;                                                        // 0x02A0   (0x0008)  
	TArray<bool>                                       Inside;                                                     // 0x02A8   (0x0010)  
	class UGI_Contain_C*                               As_GI_Contain;                                              // 0x02B8   (0x0008)  


	/// Functions
	// Function /Game/Brutalist_Interior/Levels/HUB01_Multiplayer.HUB01_Multiplayer_C.BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
	// void BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x2119480] BlueprintEvent       
	// Function /Game/Brutalist_Interior/Levels/HUB01_Multiplayer.HUB01_Multiplayer_C.BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature
	// void BndEvt__HUB01_Multiplayer_TriggerSphere_1_K2Node_ActorBoundEvent_1_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x2119480] BlueprintEvent       
	// Function /Game/Brutalist_Interior/Levels/HUB01_Multiplayer.HUB01_Multiplayer_C.BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature
	// void BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_2_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x2119480] BlueprintEvent       
	// Function /Game/Brutalist_Interior/Levels/HUB01_Multiplayer.HUB01_Multiplayer_C.BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature
	// void BndEvt__HUB01_Multiplayer_TriggerSphere_2_K2Node_ActorBoundEvent_3_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x2119480] BlueprintEvent       
	// Function /Game/Brutalist_Interior/Levels/HUB01_Multiplayer.HUB01_Multiplayer_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x2119480] Event|Protected|BlueprintEvent 
	// Function /Game/Brutalist_Interior/Levels/HUB01_Multiplayer.HUB01_Multiplayer_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                 // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Game/Brutalist_Interior/Levels/HUB01_Multiplayer.HUB01_Multiplayer_C.BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature
	// void BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_4_ActorBeginOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x2119480] BlueprintEvent       
	// Function /Game/Brutalist_Interior/Levels/HUB01_Multiplayer.HUB01_Multiplayer_C.BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature
	// void BndEvt__HUB01_Multiplayer_TriggerBox_1_K2Node_ActorBoundEvent_5_ActorEndOverlapSignature__DelegateSignature(class AActor* OverlappedActor, class AActor* OtherActor); // [0x2119480] BlueprintEvent       
	// Function /Game/Brutalist_Interior/Levels/HUB01_Multiplayer.HUB01_Multiplayer_C.ExecuteUbergraph_HUB01_Multiplayer
	// void ExecuteUbergraph_HUB01_Multiplayer(int32_t EntryPoint);                                                          // [0x2119480] Final|HasDefaults    
};

/// Class /Game/Brutalist_Interior/Levels/HUB_SR_Lights.HUB_SR_Lights_C
/// Size: 0x0000 (0x000298 - 0x000298)
class AHUB_SR_Lights_C : public ALevelScriptActor
{ 
public:
};

