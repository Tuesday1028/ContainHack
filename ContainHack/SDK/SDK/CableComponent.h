
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CableComponent.CableActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ACableActor : public AActor
{ 
public:
	class UCableComponent*                             CableComponent;                                             // 0x0290   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x00B0 (0x000570 - 0x000620)
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x0570   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x0571   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0572   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x0578   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x05A0   (0x0008)  
	FVector                                            EndLocation;                                                // 0x05A8   (0x0018)  
	float                                              CableLength;                                                // 0x05C0   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x05C4   (0x0004)  
	float                                              SubstepTime;                                                // 0x05C8   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x05CC   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x05D0   (0x0001)  
	bool                                               bUseSubstepping;                                            // 0x05D1   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x05D2   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x05D3   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x05D4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x05D5   (0x0003)  MISSED
	float                                              CollisionFriction;                                          // 0x05D8   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x05DC   (0x0004)  MISSED
	FVector                                            CableForce;                                                 // 0x05E0   (0x0018)  
	float                                              CableGravityScale;                                          // 0x05F8   (0x0004)  
	float                                              CableWidth;                                                 // 0x05FC   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x0600   (0x0004)  
	float                                              TileMaterial;                                               // 0x0604   (0x0004)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0608   (0x0018)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	// void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);                                     // [0x1de3800] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	// void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);                                  // [0x1de36f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                           // [0x1de35c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	// class USceneComponent* GetAttachedComponent();                                                                        // [0x1de3540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	// class AActor* GetAttachedActor();                                                                                     // [0x1de3500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

