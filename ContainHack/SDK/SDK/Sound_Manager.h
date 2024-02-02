
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/Sound_Manager/Sounds/Enemy/Groan/Notify/SoundHit.SoundHit_C
/// Size: 0x0000 (0x000038 - 0x000038)
class USoundHit_C : public UAnimNotify
{ 
public:


	/// Functions
	// Function /Game/Sound_Manager/Sounds/Enemy/Groan/Notify/SoundHit.SoundHit_C.Received_Notify
	// bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, FAnimNotifyEventReference& EventReference); // [0x2119480] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Sound_Manager/Ambient/Random_Events/Magnetic_Field/Research_Field_Convo_BP.Research_Field_Convo_BP_C
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AResearch_Field_Convo_BP_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class UAudioComponent*                             Entity;                                                     // 0x0298   (0x0008)  
	class UAudioComponent*                             Audio;                                                      // 0x02A0   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02A8   (0x0008)  


	/// Functions
	// Function /Game/Sound_Manager/Ambient/Random_Events/Magnetic_Field/Research_Field_Convo_BP.Research_Field_Convo_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x2119480] Event|Protected|BlueprintEvent 
	// Function /Game/Sound_Manager/Ambient/Random_Events/Magnetic_Field/Research_Field_Convo_BP.Research_Field_Convo_BP_C.ExecuteUbergraph_Research_Field_Convo_BP
	// void ExecuteUbergraph_Research_Field_Convo_BP(int32_t EntryPoint);                                                    // [0x2119480] Final                
};

