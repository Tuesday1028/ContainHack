
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ArchVisCharacter.ArchVisCharacter
/// Size: 0x0060 (0x000620 - 0x000680)
class AArchVisCharacter : public ACharacter
{ 
public:
	SDK_UNDEFINED(16,1935) /* FString */               __um(LookUpAxisName);                                       // 0x0618   (0x0010)  
	SDK_UNDEFINED(16,1936) /* FString */               __um(LookUpAtRateAxisName);                                 // 0x0628   (0x0010)  
	SDK_UNDEFINED(16,1937) /* FString */               __um(TurnAxisName);                                         // 0x0638   (0x0010)  
	SDK_UNDEFINED(16,1938) /* FString */               __um(TurnAtRateAxisName);                                   // 0x0648   (0x0010)  
	SDK_UNDEFINED(16,1939) /* FString */               __um(MoveForwardAxisName);                                  // 0x0658   (0x0010)  
	SDK_UNDEFINED(16,1940) /* FString */               __um(MoveRightAxisName);                                    // 0x0668   (0x0010)  
	float                                              MouseSensitivityScale_Pitch;                                // 0x0678   (0x0004)  
	float                                              MouseSensitivityScale_Yaw;                                  // 0x067C   (0x0004)  
};

/// Class /Script/ArchVisCharacter.ArchVisCharMovementComponent
/// Size: 0x0090 (0x000F00 - 0x000F90)
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{ 
public:
	FRotator                                           RotationalAcceleration;                                     // 0x0EF8   (0x0018)  
	FRotator                                           RotationalDeceleration;                                     // 0x0F10   (0x0018)  
	FRotator                                           MaxRotationalVelocity;                                      // 0x0F28   (0x0018)  
	float                                              MinPitch;                                                   // 0x0F40   (0x0004)  
	float                                              MaxPitch;                                                   // 0x0F44   (0x0004)  
	float                                              WalkingFriction;                                            // 0x0F48   (0x0004)  
	float                                              WalkingSpeed;                                               // 0x0F4C   (0x0004)  
	float                                              WalkingAcceleration;                                        // 0x0F50   (0x0004)  
	unsigned char                                      UnknownData00_6[0x3C];                                      // 0x0F54   (0x003C)  MISSED
};

