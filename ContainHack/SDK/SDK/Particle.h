
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/Particle/BP_Spline_Particle.BP_Spline_Particle_C
/// Size: 0x0038 (0x000290 - 0x0002C8)
class ABP_Spline_Particle_C : public AActor
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x0290   (0x0008)  
	class USplineComponent*                            Spline;                                                     // 0x0298   (0x0008)  
	class USceneComponent*                             DefaultSceneRoot;                                           // 0x02A0   (0x0008)  
	float                                              Timeline_NewTrack_0_16843D5441C02DD8091CD1B17771E621;       // 0x02A8   (0x0004)  
	SDK_UNDEFINED(1,2535) /* TEnumAsByte<ETimelineDirection> */ __um(Timeline__Direction_16843D5441C02DD8091CD1B17771E621); // 0x02AC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02AD   (0x0003)  MISSED
	class UTimelineComponent*                          Timeline;                                                   // 0x02B0   (0x0008)  
	class AActor*                                      Particle;                                                   // 0x02B8   (0x0008)  
	double                                             Speed;                                                      // 0x02C0   (0x0008)  


	/// Functions
	// Function /Game/Particle/BP_Spline_Particle.BP_Spline_Particle_C.UserConstructionScript
	// void UserConstructionScript();                                                                                        // [0x2119480] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Particle/BP_Spline_Particle.BP_Spline_Particle_C.Timeline__FinishedFunc
	// void Timeline__FinishedFunc();                                                                                        // [0x2119480] BlueprintEvent       
	// Function /Game/Particle/BP_Spline_Particle.BP_Spline_Particle_C.Timeline__UpdateFunc
	// void Timeline__UpdateFunc();                                                                                          // [0x2119480] BlueprintEvent       
	// Function /Game/Particle/BP_Spline_Particle.BP_Spline_Particle_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                              // [0x2119480] Event|Protected|BlueprintEvent 
	// Function /Game/Particle/BP_Spline_Particle.BP_Spline_Particle_C.PlayTimeline
	// void PlayTimeline();                                                                                                  // [0x2119480] BlueprintCallable|BlueprintEvent 
	// Function /Game/Particle/BP_Spline_Particle.BP_Spline_Particle_C.ExecuteUbergraph_BP_Spline_Particle
	// void ExecuteUbergraph_BP_Spline_Particle(int32_t EntryPoint);                                                         // [0x2119480] Final|HasDefaults    
};

