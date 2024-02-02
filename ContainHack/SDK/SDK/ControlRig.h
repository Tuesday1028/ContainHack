
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: Constraints
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: RigVM

/// Enum /Script/ControlRig.EControlRigState
/// Size: 0x04
enum class EControlRigState : uint8_t
{
	EControlRigState__Init                                                           = 0,
	EControlRigState__Update                                                         = 1,
	EControlRigState__Invalid                                                        = 2,
	EControlRigState__EControlRigState_MAX                                           = 3
};

/// Enum /Script/ControlRig.ERigElementType
/// Size: 0x12
enum class ERigElementType : uint8_t
{
	ERigElementType__None                                                            = 0,
	ERigElementType__Bone                                                            = 1,
	ERigElementType__Null                                                            = 2,
	ERigElementType__Space                                                           = 2,
	ERigElementType__Control                                                         = 4,
	ERigElementType__Curve                                                           = 8,
	ERigElementType__RigidBody                                                       = 16,
	ERigElementType__Reference                                                       = 32,
	ERigElementType__Last                                                            = 64,
	ERigElementType__All                                                             = 63,
	ERigElementType__ToResetAfterConstructionEvent                                   = 13,
	ERigElementType__ERigElementType_MAX                                             = 65
};

/// Enum /Script/ControlRig.ERigControlVisibility
/// Size: 0x03
enum class ERigControlVisibility : uint8_t
{
	ERigControlVisibility__UserDefined                                               = 0,
	ERigControlVisibility__BasedOnSelection                                          = 1,
	ERigControlVisibility__ERigControlVisibility_MAX                                 = 2
};

/// Enum /Script/ControlRig.ERigControlAxis
/// Size: 0x04
enum class ERigControlAxis : uint8_t
{
	ERigControlAxis__X                                                               = 0,
	ERigControlAxis__Y                                                               = 1,
	ERigControlAxis__Z                                                               = 2,
	ERigControlAxis__ERigControlAxis_MAX                                             = 3
};

/// Enum /Script/ControlRig.ERigControlType
/// Size: 0x11
enum class ERigControlType : uint8_t
{
	ERigControlType__Bool                                                            = 0,
	ERigControlType__Float                                                           = 1,
	ERigControlType__Integer                                                         = 2,
	ERigControlType__Vector2D                                                        = 3,
	ERigControlType__Position                                                        = 4,
	ERigControlType__Scale                                                           = 5,
	ERigControlType__Rotator                                                         = 6,
	ERigControlType__Transform                                                       = 7,
	ERigControlType__TransformNoScale                                                = 8,
	ERigControlType__EulerTransform                                                  = 9,
	ERigControlType__ERigControlType_MAX                                             = 10
};

/// Enum /Script/ControlRig.ERigControlAnimationType
/// Size: 0x05
enum class ERigControlAnimationType : uint8_t
{
	ERigControlAnimationType__AnimationControl                                       = 0,
	ERigControlAnimationType__AnimationChannel                                       = 1,
	ERigControlAnimationType__ProxyControl                                           = 2,
	ERigControlAnimationType__VisualCue                                              = 3,
	ERigControlAnimationType__ERigControlAnimationType_MAX                           = 4
};

/// Enum /Script/ControlRig.EControlRigDrawSettings
/// Size: 0x05
enum class EControlRigDrawSettings : uint8_t
{
	EControlRigDrawSettings__Points                                                  = 0,
	EControlRigDrawSettings__Lines                                                   = 1,
	EControlRigDrawSettings__LineStrip                                               = 2,
	EControlRigDrawSettings__DynamicMesh                                             = 3,
	EControlRigDrawSettings__EControlRigDrawSettings_MAX                             = 4
};

/// Enum /Script/ControlRig.ERigExecutionType
/// Size: 0x03
enum class ERigExecutionType : uint8_t
{
	ERigExecutionType__Runtime                                                       = 0,
	ERigExecutionType__Editing                                                       = 1,
	ERigExecutionType__Max                                                           = 2
};

/// Enum /Script/ControlRig.ERigTransformStackEntryType
/// Size: 0x05
enum class ERigTransformStackEntryType : uint8_t
{
	TransformPose                                                                    = 0,
	ControlOffset                                                                    = 1,
	ControlShape                                                                     = 2,
	CurveValue                                                                       = 3,
	ERigTransformStackEntryType_MAX                                                  = 4
};

/// Enum /Script/ControlRig.ERigTransformType
/// Size: 0x06
enum class ERigTransformType : uint8_t
{
	ERigTransformType__InitialLocal                                                  = 0,
	ERigTransformType__CurrentLocal                                                  = 1,
	ERigTransformType__InitialGlobal                                                 = 2,
	ERigTransformType__CurrentGlobal                                                 = 3,
	ERigTransformType__NumTransformTypes                                             = 4,
	ERigTransformType__ERigTransformType_MAX                                         = 5
};

/// Enum /Script/ControlRig.EControlRigInteractionType
/// Size: 0x06
enum class EControlRigInteractionType : uint8_t
{
	EControlRigInteractionType__None                                                 = 0,
	EControlRigInteractionType__Translate                                            = 1,
	EControlRigInteractionType__Rotate                                               = 2,
	EControlRigInteractionType__Scale                                                = 4,
	EControlRigInteractionType__All                                                  = 7,
	EControlRigInteractionType__EControlRigInteractionType_MAX                       = 8
};

/// Enum /Script/ControlRig.EControlRigVectorKind
/// Size: 0x03
enum class EControlRigVectorKind : uint8_t
{
	EControlRigVectorKind__Direction                                                 = 0,
	EControlRigVectorKind__Location                                                  = 1,
	EControlRigVectorKind__EControlRigVectorKind_MAX                                 = 2
};

/// Enum /Script/ControlRig.EControlRigComponentSpace
/// Size: 0x06
enum class EControlRigComponentSpace : uint8_t
{
	EControlRigComponentSpace__WorldSpace                                            = 0,
	EControlRigComponentSpace__ActorSpace                                            = 1,
	EControlRigComponentSpace__ComponentSpace                                        = 2,
	EControlRigComponentSpace__RigSpace                                              = 3,
	EControlRigComponentSpace__LocalSpace                                            = 4,
	EControlRigComponentSpace__Max                                                   = 5
};

/// Enum /Script/ControlRig.EControlRigComponentMapDirection
/// Size: 0x03
enum class EControlRigComponentMapDirection : uint8_t
{
	EControlRigComponentMapDirection__Input                                          = 0,
	EControlRigComponentMapDirection__Output                                         = 1,
	EControlRigComponentMapDirection__EControlRigComponentMapDirection_MAX           = 2
};

/// Enum /Script/ControlRig.ETransformSpaceMode
/// Size: 0x05
enum class ETransformSpaceMode : uint8_t
{
	ETransformSpaceMode__LocalSpace                                                  = 0,
	ETransformSpaceMode__GlobalSpace                                                 = 1,
	ETransformSpaceMode__BaseSpace                                                   = 2,
	ETransformSpaceMode__BaseJoint                                                   = 3,
	ETransformSpaceMode__Max                                                         = 4
};

/// Enum /Script/ControlRig.EControlRigClampSpatialMode
/// Size: 0x04
enum class EControlRigClampSpatialMode : uint8_t
{
	EControlRigClampSpatialMode__Plane                                               = 0,
	EControlRigClampSpatialMode__Cylinder                                            = 1,
	EControlRigClampSpatialMode__Sphere                                              = 2,
	EControlRigClampSpatialMode__EControlRigClampSpatialMode_MAX                     = 3
};

/// Enum /Script/ControlRig.ETransformGetterType
/// Size: 0x03
enum class ETransformGetterType : uint8_t
{
	ETransformGetterType__Initial                                                    = 0,
	ETransformGetterType__Current                                                    = 1,
	ETransformGetterType__Max                                                        = 2
};

/// Enum /Script/ControlRig.EBoneGetterSetterMode
/// Size: 0x03
enum class EBoneGetterSetterMode : uint8_t
{
	EBoneGetterSetterMode__LocalSpace                                                = 0,
	EBoneGetterSetterMode__GlobalSpace                                               = 1,
	EBoneGetterSetterMode__Max                                                       = 2
};

/// Enum /Script/ControlRig.EControlRigDrawHierarchyMode
/// Size: 0x02
enum class EControlRigDrawHierarchyMode : uint8_t
{
	EControlRigDrawHierarchyMode__Axes                                               = 0,
	EControlRigDrawHierarchyMode__Max                                                = 1
};

/// Enum /Script/ControlRig.EControlRigAnimEasingType
/// Size: 0x32
enum class EControlRigAnimEasingType : uint8_t
{
	EControlRigAnimEasingType__Linear                                                = 0,
	EControlRigAnimEasingType__QuadraticEaseIn                                       = 1,
	EControlRigAnimEasingType__QuadraticEaseOut                                      = 2,
	EControlRigAnimEasingType__QuadraticEaseInOut                                    = 3,
	EControlRigAnimEasingType__CubicEaseIn                                           = 4,
	EControlRigAnimEasingType__CubicEaseOut                                          = 5,
	EControlRigAnimEasingType__CubicEaseInOut                                        = 6,
	EControlRigAnimEasingType__QuarticEaseIn                                         = 7,
	EControlRigAnimEasingType__QuarticEaseOut                                        = 8,
	EControlRigAnimEasingType__QuarticEaseInOut                                      = 9,
	EControlRigAnimEasingType__QuinticEaseIn                                         = 10,
	EControlRigAnimEasingType__QuinticEaseOut                                        = 11,
	EControlRigAnimEasingType__QuinticEaseInOut                                      = 12,
	EControlRigAnimEasingType__SineEaseIn                                            = 13,
	EControlRigAnimEasingType__SineEaseOut                                           = 14,
	EControlRigAnimEasingType__SineEaseInOut                                         = 15,
	EControlRigAnimEasingType__CircularEaseIn                                        = 16,
	EControlRigAnimEasingType__CircularEaseOut                                       = 17,
	EControlRigAnimEasingType__CircularEaseInOut                                     = 18,
	EControlRigAnimEasingType__ExponentialEaseIn                                     = 19,
	EControlRigAnimEasingType__ExponentialEaseOut                                    = 20,
	EControlRigAnimEasingType__ExponentialEaseInOut                                  = 21,
	EControlRigAnimEasingType__ElasticEaseIn                                         = 22,
	EControlRigAnimEasingType__ElasticEaseOut                                        = 23,
	EControlRigAnimEasingType__ElasticEaseInOut                                      = 24,
	EControlRigAnimEasingType__BackEaseIn                                            = 25,
	EControlRigAnimEasingType__BackEaseOut                                           = 26,
	EControlRigAnimEasingType__BackEaseInOut                                         = 27,
	EControlRigAnimEasingType__BounceEaseIn                                          = 28,
	EControlRigAnimEasingType__BounceEaseOut                                         = 29,
	EControlRigAnimEasingType__BounceEaseInOut                                       = 30,
	EControlRigAnimEasingType__EControlRigAnimEasingType_MAX                         = 31
};

/// Enum /Script/ControlRig.ECRSimPointIntegrateType
/// Size: 0x03
enum class ECRSimPointIntegrateType : uint8_t
{
	ECRSimPointIntegrateType__Verlet                                                 = 0,
	ECRSimPointIntegrateType__SemiExplicitEuler                                      = 1,
	ECRSimPointIntegrateType__ECRSimPointIntegrateType_MAX                           = 2
};

/// Enum /Script/ControlRig.ECRSimConstraintType
/// Size: 0x05
enum class ECRSimConstraintType : uint8_t
{
	ECRSimConstraintType__Distance                                                   = 0,
	ECRSimConstraintType__DistanceFromA                                              = 1,
	ECRSimConstraintType__DistanceFromB                                              = 2,
	ECRSimConstraintType__Plane                                                      = 3,
	ECRSimConstraintType__ECRSimConstraintType_MAX                                   = 4
};

/// Enum /Script/ControlRig.ECRSimPointForceType
/// Size: 0x02
enum class ECRSimPointForceType : uint8_t
{
	ECRSimPointForceType__Direction                                                  = 0,
	ECRSimPointForceType__ECRSimPointForceType_MAX                                   = 1
};

/// Enum /Script/ControlRig.ECRSimSoftCollisionType
/// Size: 0x04
enum class ECRSimSoftCollisionType : uint8_t
{
	ECRSimSoftCollisionType__Plane                                                   = 0,
	ECRSimSoftCollisionType__Sphere                                                  = 1,
	ECRSimSoftCollisionType__Cone                                                    = 2,
	ECRSimSoftCollisionType__ECRSimSoftCollisionType_MAX                             = 3
};

/// Enum /Script/ControlRig.EControlRigFKRigExecuteMode
/// Size: 0x04
enum class EControlRigFKRigExecuteMode : uint8_t
{
	EControlRigFKRigExecuteMode__Replace                                             = 0,
	EControlRigFKRigExecuteMode__Additive                                            = 1,
	EControlRigFKRigExecuteMode__Direct                                              = 2,
	EControlRigFKRigExecuteMode__Max                                                 = 3
};

/// Enum /Script/ControlRig.ERigBoneType
/// Size: 0x03
enum class ERigBoneType : uint8_t
{
	ERigBoneType__Imported                                                           = 0,
	ERigBoneType__User                                                               = 1,
	ERigBoneType__ERigBoneType_MAX                                                   = 2
};

/// Enum /Script/ControlRig.ERigMetadataType
/// Size: 0x22
enum class ERigMetadataType : uint8_t
{
	ERigMetadataType__Bool                                                           = 0,
	ERigMetadataType__BoolArray                                                      = 1,
	ERigMetadataType__Float                                                          = 2,
	ERigMetadataType__FloatArray                                                     = 3,
	ERigMetadataType__Int32                                                          = 4,
	ERigMetadataType__Int32Array                                                     = 5,
	ERigMetadataType__Name                                                           = 6,
	ERigMetadataType__NameArray                                                      = 7,
	ERigMetadataType__Vector                                                         = 8,
	ERigMetadataType__VectorArray                                                    = 9,
	ERigMetadataType__Rotator                                                        = 10,
	ERigMetadataType__RotatorArray                                                   = 11,
	ERigMetadataType__Quat                                                           = 12,
	ERigMetadataType__QuatArray                                                      = 13,
	ERigMetadataType__Transform                                                      = 14,
	ERigMetadataType__TransformArray                                                 = 15,
	ERigMetadataType__LinearColor                                                    = 16,
	ERigMetadataType__LinearColorArray                                               = 17,
	ERigMetadataType__RigElementKey                                                  = 18,
	ERigMetadataType__RigElementKeyArray                                             = 19,
	ERigMetadataType__Invalid                                                        = 20,
	ERigMetadataType__ERigMetadataType_MAX                                           = 21
};

/// Enum /Script/ControlRig.ERigHierarchyNotification
/// Size: 0x15
enum class ERigHierarchyNotification : uint8_t
{
	ERigHierarchyNotification__ElementAdded                                          = 0,
	ERigHierarchyNotification__ElementRemoved                                        = 1,
	ERigHierarchyNotification__ElementRenamed                                        = 2,
	ERigHierarchyNotification__ElementSelected                                       = 3,
	ERigHierarchyNotification__ElementDeselected                                     = 4,
	ERigHierarchyNotification__ParentChanged                                         = 5,
	ERigHierarchyNotification__HierarchyReset                                        = 6,
	ERigHierarchyNotification__ControlSettingChanged                                 = 7,
	ERigHierarchyNotification__ControlVisibilityChanged                              = 8,
	ERigHierarchyNotification__ControlDrivenListChanged                              = 9,
	ERigHierarchyNotification__ControlShapeTransformChanged                          = 10,
	ERigHierarchyNotification__ParentWeightsChanged                                  = 11,
	ERigHierarchyNotification__InteractionBracketOpened                              = 12,
	ERigHierarchyNotification__InteractionBracketClosed                              = 13,
	ERigHierarchyNotification__Max                                                   = 14
};

/// Enum /Script/ControlRig.ERigEvent
/// Size: 0x05
enum class ERigEvent : uint8_t
{
	ERigEvent__None                                                                  = 0,
	ERigEvent__RequestAutoKey                                                        = 1,
	ERigEvent__OpenUndoBracket                                                       = 2,
	ERigEvent__CloseUndoBracket                                                      = 3,
	ERigEvent__Max                                                                   = 4
};

/// Enum /Script/ControlRig.EControlRigSetKey
/// Size: 0x04
enum class EControlRigSetKey : uint8_t
{
	EControlRigSetKey__DoNotCare                                                     = 0,
	EControlRigSetKey__Always                                                        = 1,
	EControlRigSetKey__Never                                                         = 2,
	EControlRigSetKey__EControlRigSetKey_MAX                                         = 3
};

/// Enum /Script/ControlRig.ERigControlValueType
/// Size: 0x05
enum class ERigControlValueType : uint8_t
{
	ERigControlValueType__Initial                                                    = 0,
	ERigControlValueType__Current                                                    = 1,
	ERigControlValueType__Minimum                                                    = 2,
	ERigControlValueType__Maximum                                                    = 3,
	ERigControlValueType__ERigControlValueType_MAX                                   = 4
};

/// Enum /Script/ControlRig.ERigSpaceType
/// Size: 0x05
enum class ERigSpaceType : uint8_t
{
	ERigSpaceType__Global                                                            = 0,
	ERigSpaceType__Bone                                                              = 1,
	ERigSpaceType__Control                                                           = 2,
	ERigSpaceType__Space                                                             = 3,
	ERigSpaceType__ERigSpaceType_MAX                                                 = 4
};

/// Enum /Script/ControlRig.EMovieSceneControlRigSpaceType
/// Size: 0x04
enum class EMovieSceneControlRigSpaceType : uint8_t
{
	EMovieSceneControlRigSpaceType__Parent                                           = 0,
	EMovieSceneControlRigSpaceType__World                                            = 1,
	EMovieSceneControlRigSpaceType__ControlRig                                       = 2,
	EMovieSceneControlRigSpaceType__EMovieSceneControlRigSpaceType_MAX               = 3
};

/// Enum /Script/ControlRig.ERigUnitDebugPointMode
/// Size: 0x03
enum class ERigUnitDebugPointMode : uint8_t
{
	ERigUnitDebugPointMode__Point                                                    = 0,
	ERigUnitDebugPointMode__Vector                                                   = 1,
	ERigUnitDebugPointMode__Max                                                      = 2
};

/// Enum /Script/ControlRig.ERigUnitDebugTransformMode
/// Size: 0x04
enum class ERigUnitDebugTransformMode : uint8_t
{
	ERigUnitDebugTransformMode__Point                                                = 0,
	ERigUnitDebugTransformMode__Axes                                                 = 1,
	ERigUnitDebugTransformMode__Box                                                  = 2,
	ERigUnitDebugTransformMode__Max                                                  = 3
};

/// Enum /Script/ControlRig.ERigUnitVisualDebugPointMode
/// Size: 0x03
enum class ERigUnitVisualDebugPointMode : uint8_t
{
	ERigUnitVisualDebugPointMode__Point                                              = 0,
	ERigUnitVisualDebugPointMode__Vector                                             = 1,
	ERigUnitVisualDebugPointMode__Max                                                = 2
};

/// Enum /Script/ControlRig.EAimMode
/// Size: 0x03
enum class EAimMode : uint8_t
{
	EAimMode__AimAtTarget                                                            = 0,
	EAimMode__OrientToTarget                                                         = 1,
	EAimMode__MAX                                                                    = 2
};

/// Enum /Script/ControlRig.EApplyTransformMode
/// Size: 0x03
enum class EApplyTransformMode : uint8_t
{
	EApplyTransformMode__Override                                                    = 0,
	EApplyTransformMode__Additive                                                    = 1,
	EApplyTransformMode__Max                                                         = 2
};

/// Enum /Script/ControlRig.ERigSwitchParentMode
/// Size: 0x04
enum class ERigSwitchParentMode : uint8_t
{
	ERigSwitchParentMode__World                                                      = 0,
	ERigSwitchParentMode__DefaultParent                                              = 1,
	ERigSwitchParentMode__ParentItem                                                 = 2,
	ERigSwitchParentMode__ERigSwitchParentMode_MAX                                   = 3
};

/// Enum /Script/ControlRig.EControlRigCurveAlignment
/// Size: 0x03
enum class EControlRigCurveAlignment : uint8_t
{
	EControlRigCurveAlignment__Front                                                 = 0,
	EControlRigCurveAlignment__Stretched                                             = 1,
	EControlRigCurveAlignment__EControlRigCurveAlignment_MAX                         = 2
};

/// Enum /Script/ControlRig.EControlRigModifyBoneMode
/// Size: 0x05
enum class EControlRigModifyBoneMode : uint8_t
{
	EControlRigModifyBoneMode__OverrideLocal                                         = 0,
	EControlRigModifyBoneMode__OverrideGlobal                                        = 1,
	EControlRigModifyBoneMode__AdditiveLocal                                         = 2,
	EControlRigModifyBoneMode__AdditiveGlobal                                        = 3,
	EControlRigModifyBoneMode__Max                                                   = 4
};

/// Enum /Script/ControlRig.EConstraintInterpType
/// Size: 0x03
enum class EConstraintInterpType : uint8_t
{
	EConstraintInterpType__Average                                                   = 0,
	EConstraintInterpType__Shortest                                                  = 1,
	EConstraintInterpType__Max                                                       = 2
};

/// Enum /Script/ControlRig.ERBFKernelType
/// Size: 0x06
enum class ERBFKernelType : uint8_t
{
	ERBFKernelType__Gaussian                                                         = 0,
	ERBFKernelType__Exponential                                                      = 1,
	ERBFKernelType__Linear                                                           = 2,
	ERBFKernelType__Cubic                                                            = 3,
	ERBFKernelType__Quintic                                                          = 4,
	ERBFKernelType__ERBFKernelType_MAX                                               = 5
};

/// Enum /Script/ControlRig.ERBFQuatDistanceType
/// Size: 0x05
enum class ERBFQuatDistanceType : uint8_t
{
	ERBFQuatDistanceType__Euclidean                                                  = 0,
	ERBFQuatDistanceType__ArcLength                                                  = 1,
	ERBFQuatDistanceType__SwingAngle                                                 = 2,
	ERBFQuatDistanceType__TwistAngle                                                 = 3,
	ERBFQuatDistanceType__ERBFQuatDistanceType_MAX                                   = 4
};

/// Enum /Script/ControlRig.ERBFVectorDistanceType
/// Size: 0x04
enum class ERBFVectorDistanceType : uint8_t
{
	ERBFVectorDistanceType__Euclidean                                                = 0,
	ERBFVectorDistanceType__Manhattan                                                = 1,
	ERBFVectorDistanceType__ArcLength                                                = 2,
	ERBFVectorDistanceType__ERBFVectorDistanceType_MAX                               = 3
};

/// Class /Script/ControlRig.RigHierarchy
/// Size: 0x02F8 (0x000028 - 0x000320)
class URigHierarchy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x60];                                      // 0x0028   (0x0060)  MISSED
	uint16_t                                           TopologyVersion;                                            // 0x0088   (0x0002)  
	uint16_t                                           MetadataVersion;                                            // 0x008A   (0x0002)  
	uint16_t                                           MetadataTagVersion;                                         // 0x008C   (0x0002)  
	bool                                               bEnableDirtyPropagation;                                    // 0x008E   (0x0001)  
	unsigned char                                      UnknownData01_5[0x71];                                      // 0x008F   (0x0071)  MISSED
	int32_t                                            TransformStackIndex;                                        // 0x0100   (0x0004)  
	unsigned char                                      UnknownData02_5[0x74];                                      // 0x0104   (0x0074)  MISSED
	class URigHierarchyController*                     HierarchyController;                                        // 0x0178   (0x0008)  
	unsigned char                                      UnknownData03_5[0x58];                                      // 0x0180   (0x0058)  MISSED
	SDK_UNDEFINED(80,2055) /* TMap<FRigElementKey, FRigElementKey> */ __um(PreviousNameMap);                       // 0x01D8   (0x0050)  
	unsigned char                                      UnknownData04_5[0x80];                                      // 0x0228   (0x0080)  MISSED
	class URigHierarchy*                               HierarchyForCacheValidation;                                // 0x02A8   (0x0008)  
	unsigned char                                      UnknownData05_6[0x70];                                      // 0x02B0   (0x0070)  MISSED


	/// Functions
	// Function /Script/ControlRig.RigHierarchy.UnsetCurveValueByIndex
	// void UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo);                                                 // [0x19626e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.UnsetCurveValue
	// void UnsetCurveValue(FRigElementKey InKey, bool bSetupUndo);                                                          // [0x1962510] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToWorldSpace
	// bool SwitchToWorldSpace(FRigElementKey InChild, bool bInitial, bool bAffectChildren);                                 // [0x19623d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToParent
	// bool SwitchToParent(FRigElementKey InChild, FRigElementKey InParent, bool bInitial, bool bAffectChildren);            // [0x19621a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToDefaultParent
	// bool SwitchToDefaultParent(FRigElementKey InChild, bool bInitial, bool bAffectChildren);                              // [0x1962060] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SortKeys
	// TArray<FRigElementKey> SortKeys(TArray<FRigElementKey>& InKeys);                                                      // [0x1961ef0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.SetVectorMetadata
	// bool SetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector InValue);                                 // [0x1961c80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetVectorArrayMetadata
	// bool SetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FVector> InValue);                    // [0x19619c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTransformMetadata
	// bool SetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform InValue);                           // [0x19616d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTransformArrayMetadata
	// bool SetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FTransform> InValue);              // [0x1961410] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTag
	// bool SetTag(FRigElementKey InItem, FName InTag);                                                                      // [0x1960eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRotatorMetadata
	// bool SetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator InValue);                               // [0x1960c40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRotatorArrayMetadata
	// bool SetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRotator> InValue);                  // [0x1960980] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRigElementKeyMetadata
	// bool SetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey InValue);                   // [0x1960710] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
	// bool SetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRigElementKey> InValue);      // [0x1960450] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetQuatMetadata
	// bool SetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat InValue);                                     // [0x19601e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetQuatArrayMetadata
	// bool SetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FQuat> InValue);                        // [0x195ff20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetPose_ForBlueprint
	// void SetPose_ForBlueprint(FRigPose InPose);                                                                           // [0x195fc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetParentWeightArray
	// bool SetParentWeightArray(FRigElementKey InChild, TArray<FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren); // [0x195faa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetParentWeight
	// bool SetParentWeight(FRigElementKey InChild, FRigElementKey InParent, FRigElementWeight InWeight, bool bInitial, bool bAffectChildren); // [0x195f8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetNameMetadata
	// bool SetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName InValue);                                     // [0x195f650] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetNameArrayMetadata
	// bool SetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FName> InValue);                        // [0x195f390] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLocalTransformByIndex
	// void SetLocalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x195f0b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLocalTransform
	// void SetLocalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x195ecb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLinearColorMetadata
	// bool SetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor InValue);                       // [0x195ea50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLinearColorArrayMetadata
	// bool SetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FLinearColor> InValue);          // [0x195e790] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetInt32Metadata
	// bool SetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t InValue);                                  // [0x195e530] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetInt32ArrayMetadata
	// bool SetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<int32_t> InValue);                     // [0x195e270] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetGlobalTransformByIndex
	// void SetGlobalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // [0x195df90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetGlobalTransform
	// void SetGlobalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // [0x195db80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetFloatMetadata
	// bool SetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float InValue);                                    // [0x195d920] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetFloatArrayMetadata
	// bool SetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<float> InValue);                       // [0x195d660] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetCurveValueByIndex
	// void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo);                                    // [0x195d530] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetCurveValue
	// void SetCurveValue(FRigElementKey InKey, float InValue, bool bSetupUndo);                                             // [0x195d300] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlVisibilityByIndex
	// void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility);                                           // [0x195d210] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlVisibility
	// void SetControlVisibility(FRigElementKey InKey, bool bVisibility);                                                    // [0x195d040] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlValueByIndex
	// void SetControlValueByIndex(int32_t InElementIndex, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // [0x195cd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlValue
	// void SetControlValue(FRigElementKey InKey, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // [0x195c880] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlShapeTransformByIndex
	// void SetControlShapeTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bSetupUndo); // [0x195c640] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlShapeTransform
	// void SetControlShapeTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bSetupUndo);          // [0x195c2f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlSettingsByIndex
	// void SetControlSettingsByIndex(int32_t InElementIndex, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // [0x195c050] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlSettings
	// void SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // [0x195bcd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
	// void SetControlPreferredRotatorByIndex(int32_t InElementIndex, FRotator& InValue, bool bInitial, bool bFixEulerFlips); // [0x195bb20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotator
	// void SetControlPreferredRotator(FRigElementKey InKey, FRotator& InValue, bool bInitial, bool bFixEulerFlips);         // [0x195b8c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
	// void SetControlOffsetTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x195b5f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlOffsetTransform
	// void SetControlOffsetTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x195b200] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetBoolMetadata
	// bool SetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool InValue);                                      // [0x195afa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetBoolArrayMetadata
	// bool SetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<bool> InValue);                         // [0x195acf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SendAutoKeyEvent
	// void SendAutoKeyEvent(FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous);                         // [0x195abc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetToDefault
	// void ResetToDefault();                                                                                                // [0x195aba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetPoseToInitial
	// void ResetPoseToInitial(ERigElementType InTypeFilter);                                                                // [0x195ab20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetCurveValues
	// void ResetCurveValues();                                                                                              // [0x195ab00] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Reset
	// void Reset();                                                                                                         // [0x195aae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.RemoveMetadata
	// bool RemoveMetadata(FRigElementKey InItem, FName InMetadataName);                                                     // [0x195a9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.RemoveAllMetadata
	// bool RemoveAllMetadata(FRigElementKey InItem);                                                                        // [0x195a930] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Num
	// int32_t Num();                                                                                                        // [0x195a910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromVector2D
	// FRigControlValue MakeControlValueFromVector2D(FVector2D InValue);                                                     // [0x195a570] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromVector
	// FRigControlValue MakeControlValueFromVector(FVector InValue);                                                         // [0x195a740] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
	// FRigControlValue MakeControlValueFromTransformNoScale(FTransformNoScale InValue);                                     // [0x195a310] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromTransform
	// FRigControlValue MakeControlValueFromTransform(FTransform InValue);                                                   // [0x1959fe0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromRotator
	// FRigControlValue MakeControlValueFromRotator(FRotator InValue);                                                       // [0x1959df0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromInt
	// FRigControlValue MakeControlValueFromInt(int32_t InValue);                                                            // [0x1959c20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromFloat
	// FRigControlValue MakeControlValueFromFloat(float InValue);                                                            // [0x1959a50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
	// FRigControlValue MakeControlValueFromEulerTransform(FEulerTransform InValue);                                         // [0x19597b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromBool
	// FRigControlValue MakeControlValueFromBool(bool InValue);                                                              // [0x19595e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.IsValidIndex
	// bool IsValidIndex(int32_t InElementIndex);                                                                            // [0x1959540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsSelectedByIndex
	// bool IsSelectedByIndex(int32_t InIndex);                                                                              // [0x1959480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsSelected
	// bool IsSelected(FRigElementKey InKey);                                                                                // [0x19592f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsProcedural
	// bool IsProcedural(FRigElementKey& InKey);                                                                             // [0x1959240] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsParentedTo
	// bool IsParentedTo(FRigElementKey InChild, FRigElementKey InParent);                                                   // [0x1958f30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsCurveValueSetByIndex
	// bool IsCurveValueSetByIndex(int32_t InElementIndex);                                                                  // [0x1958e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsCurveValueSet
	// bool IsCurveValueSet(FRigElementKey InKey);                                                                           // [0x1958cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsControllerAvailable
	// bool IsControllerAvailable();                                                                                         // [0x1958ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.HasTag
	// bool HasTag(FRigElementKey InItem, FName InTag);                                                                      // [0x1958920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVectorMetadata
	// FVector GetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector DefaultValue);                         // [0x1958640] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVectorFromControlValue
	// FVector GetVectorFromControlValue(FRigControlValue InValue);                                                          // [0x19584f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetVectorArrayMetadata
	// TArray<FVector> GetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                  // [0x1958180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVector2DFromControlValue
	// FVector2D GetVector2DFromControlValue(FRigControlValue InValue);                                                      // [0x1958040] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
	// FTransformNoScale GetTransformNoScaleFromControlValue(FRigControlValue InValue);                                      // [0x1957eb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformMetadata
	// FTransform GetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform DefaultValue);                // [0x1957b10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetTransformFromControlValue
	// FTransform GetTransformFromControlValue(FRigControlValue InValue);                                                    // [0x1957970] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformArrayMetadata
	// TArray<FTransform> GetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName);                            // [0x1957600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetTags
	// TArray<FName> GetTags(FRigElementKey InItem);                                                                         // [0x19572a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetSelectedKeys
	// TArray<FRigElementKey> GetSelectedKeys(ERigElementType InTypeFilter);                                                 // [0x19571c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorMetadata
	// FRotator GetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator DefaultValue);                      // [0x1956ee0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorFromControlValue
	// FRotator GetRotatorFromControlValue(FRigControlValue InValue);                                                        // [0x1956d80] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorArrayMetadata
	// TArray<FRotator> GetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                // [0x1956a10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigidBodyKeys
	// TArray<FRigElementKey> GetRigidBodyKeys(bool bTraverse);                                                              // [0x19567b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigElementKeyMetadata
	// FRigElementKey GetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey DefaultValue);    // [0x19564e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
	// TArray<FRigElementKey> GetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName);                    // [0x1956170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetReferenceKeys
	// TArray<FRigElementKey> GetReferenceKeys(bool bTraverse);                                                              // [0x1955f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetQuatMetadata
	// FQuat GetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat DefaultValue);                               // [0x1955c40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetQuatArrayMetadata
	// TArray<FQuat> GetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                      // [0x19558d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPreviousParent
	// FRigElementKey GetPreviousParent(FRigElementKey& InKey);                                                              // [0x1955810] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPreviousName
	// FName GetPreviousName(FRigElementKey& InKey);                                                                         // [0x1955760] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPose
	// FRigPose GetPose(bool bInitial);                                                                                      // [0x19555d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentWeightArray
	// TArray<FRigElementWeight> GetParentWeightArray(FRigElementKey InChild, bool bInitial);                                // [0x1955350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentWeight
	// FRigElementWeight GetParentWeight(FRigElementKey InChild, FRigElementKey InParent, bool bInitial);                    // [0x19551f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentTransformByIndex
	// FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial);                                          // [0x1955070] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentTransform
	// FTransform GetParentTransform(FRigElementKey InKey, bool bInitial);                                                   // [0x1954e30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParents
	// TArray<FRigElementKey> GetParents(FRigElementKey InKey, bool bRecursive);                                             // [0x1955490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNumberOfParents
	// int32_t GetNumberOfParents(FRigElementKey InKey);                                                                     // [0x1954d80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNullKeys
	// TArray<FRigElementKey> GetNullKeys(bool bTraverse);                                                                   // [0x1954b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNameMetadata
	// FName GetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName DefaultValue);                               // [0x1954850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNameArrayMetadata
	// TArray<FName> GetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                      // [0x19544e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetMetadataType
	// ERigMetadataType GetMetadataType(FRigElementKey InItem, FName InMetadataName);                                        // [0x19543e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.RigHierarchy.GetMetadataNames
	// TArray<FName> GetMetadataNames(FRigElementKey InItem);                                                                // [0x19542f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.RigHierarchy.GetLocalTransformByIndex
	// FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial);                                           // [0x1954150] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalTransform
	// FTransform GetLocalTransform(FRigElementKey InKey, bool bInitial);                                                    // [0x1953ee0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
	// FTransform GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);                               // [0x1953d50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalControlShapeTransform
	// FTransform GetLocalControlShapeTransform(FRigElementKey InKey, bool bInitial);                                        // [0x1953b00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLinearColorMetadata
	// FLinearColor GetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor DefaultValue);          // [0x1953830] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLinearColorArrayMetadata
	// TArray<FLinearColor> GetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                        // [0x19534c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetKeys
	// TArray<FRigElementKey> GetKeys(TArray<int32_t> InElementIndices);                                                     // [0x19532e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetKey
	// FRigElementKey GetKey(int32_t InElementIndex);                                                                        // [0x1953210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetIntFromControlValue
	// int32_t GetIntFromControlValue(FRigControlValue InValue);                                                             // [0x19530f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetInt32Metadata
	// int32_t GetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t DefaultValue);                          // [0x1952e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetInt32ArrayMetadata
	// TArray<int32_t> GetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                   // [0x1952ab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetIndex_ForBlueprint
	// int32_t GetIndex_ForBlueprint(FRigElementKey InKey);                                                                  // [0x1952950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalTransformByIndex
	// FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial);                                          // [0x19527b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalTransform
	// FTransform GetGlobalTransform(FRigElementKey InKey, bool bInitial);                                                   // [0x1952540] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
	// FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);                              // [0x19523b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlShapeTransform
	// FTransform GetGlobalControlShapeTransform(FRigElementKey InKey, bool bInitial);                                       // [0x1952160] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
	// FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial);                             // [0x1951fd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
	// FTransform GetGlobalControlOffsetTransform(FRigElementKey InKey, bool bInitial);                                      // [0x1951d80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFloatMetadata
	// float GetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float DefaultValue);                              // [0x1951ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFloatFromControlValue
	// float GetFloatFromControlValue(FRigControlValue InValue);                                                             // [0x1951990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetFloatArrayMetadata
	// TArray<float> GetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                     // [0x1951620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFirstParent
	// FRigElementKey GetFirstParent(FRigElementKey InKey);                                                                  // [0x1951560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetEulerTransformFromControlValue
	// FEulerTransform GetEulerTransformFromControlValue(FRigControlValue InValue);                                          // [0x19513b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetDefaultParent
	// FRigElementKey GetDefaultParent(FRigElementKey InKey);                                                                // [0x19512f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveValueByIndex
	// float GetCurveValueByIndex(int32_t InElementIndex);                                                                   // [0x1951230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveValue
	// float GetCurveValue(FRigElementKey InKey);                                                                            // [0x19510b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveKeys
	// TArray<FRigElementKey> GetCurveKeys();                                                                                // [0x1950f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlValueByIndex
	// FRigControlValue GetControlValueByIndex(int32_t InElementIndex, ERigControlValueType InValueType);                    // [0x1950c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlValue
	// FRigControlValue GetControlValue(FRigElementKey InKey, ERigControlValueType InValueType);                             // [0x1950950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
	// FRotator GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial);                                    // [0x1950830] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredRotator
	// FRotator GetControlPreferredRotator(FRigElementKey InKey, bool bInitial);                                             // [0x1950620] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetController
	// class URigHierarchyController* GetController(bool bCreateIfNeeded);                                                   // [0x1950e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetControlKeys
	// TArray<FRigElementKey> GetControlKeys(bool bTraverse);                                                                // [0x19503c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetChildren
	// TArray<FRigElementKey> GetChildren(FRigElementKey InKey, bool bRecursive);                                            // [0x1950280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoolMetadata
	// bool GetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool DefaultValue);                                 // [0x194ffb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoolArrayMetadata
	// TArray<bool> GetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                       // [0x194fc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoneKeys
	// TArray<FRigElementKey> GetBoneKeys(bool bTraverse);                                                                   // [0x194f9e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
	// TArray<FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);                                                       // [0x194f900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
	// FRigNullElement FindNull_ForBlueprintOnly(FRigElementKey& InKey);                                                     // [0x194f660] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
	// FRigControlElement FindControl_ForBlueprintOnly(FRigElementKey& InKey);                                               // [0x194f1c0] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
	// FRigBoneElement FindBone_ForBlueprintOnly(FRigElementKey& InKey);                                                     // [0x194efd0] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.CopyPose
	// void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded); // [0x194ee10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.CopyHierarchy
	// void CopyHierarchy(class URigHierarchy* InHierarchy);                                                                 // [0x194ed80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Contains_ForBlueprint
	// bool Contains_ForBlueprint(FRigElementKey InKey);                                                                     // [0x194ec10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.TransformableControlHandle
/// Size: 0x0038 (0x000058 - 0x000090)
class UTransformableControlHandle : public UTransformableHandle
{ 
public:
	SDK_UNDEFINED(48,2056) /* TWeakObjectPtr<UControlRig*> */ __um(ControlRig);                                    // 0x0058   (0x0030)  
	FName                                              ControlName;                                                // 0x0088   (0x0008)  
};

/// Struct /Script/ControlRig.RigHierarchySettings
/// Size: 0x0004 (0x000000 - 0x000004)
struct FRigHierarchySettings
{ 
	int32_t                                            ProceduralElementLimit;                                     // 0x0000   (0x0004)  
};

/// Struct /Script/ControlRig.ControlRigDrawInstruction
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FControlRigDrawInstruction
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	SDK_UNDEFINED(1,2057) /* TEnumAsByte<EControlRigDrawSettings> */ __um(PrimitiveType);                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FVector>                                    Positions;                                                  // 0x0010   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0020   (0x0010)  
	float                                              Thickness;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0034   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	unsigned char                                      UnknownData02_6[0x30];                                      // 0x00A0   (0x0030)  MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawContainer
/// Size: 0x0018 (0x000000 - 0x000018)
struct FControlRigDrawContainer
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FControlRigDrawInstruction>                 Instructions;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.RigElementKey
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigElementKey
{ 
	ERigElementType                                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0008)  
};

/// Struct /Script/ControlRig.RigInfluenceEntry
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigInfluenceEntry
{ 
	FRigElementKey                                     Source;                                                     // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FRigElementKey>                             AffectedList;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigInfluenceMap
/// Size: 0x0068 (0x000000 - 0x000068)
struct FRigInfluenceMap
{ 
	FName                                              EventName;                                                  // 0x0000   (0x0008)  
	TArray<FRigInfluenceEntry>                         Entries;                                                    // 0x0008   (0x0010)  
	SDK_UNDEFINED(80,2058) /* TMap<FRigElementKey, int32_t> */ __um(KeyToIndex);                                   // 0x0018   (0x0050)  
};

/// Struct /Script/ControlRig.RigInfluenceMapPerEvent
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigInfluenceMapPerEvent
{ 
	TArray<FRigInfluenceMap>                           Maps;                                                       // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,2059) /* TMap<FName, int32_t> */  __um(EventToIndex);                                         // 0x0010   (0x0050)  
};

/// Class /Script/ControlRig.ControlRig
/// Size: 0x0538 (0x000028 - 0x000560)
class UControlRig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x1E];                                      // 0x0028   (0x001E)  MISSED
	ERigExecutionType                                  ExecutionType;                                              // 0x0046   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0047   (0x0001)  MISSED
	FRigHierarchySettings                              HierarchySettings;                                          // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FRigVMRuntimeSettings                              VMRuntimeSettings;                                          // 0x0050   (0x0018)  
	SDK_UNDEFINED(80,2060) /* TMap<FRigElementKey, FRigControlElementCustomization> */ __um(ControlCustomizations); // 0x0068   (0x0050)  
	class URigVM*                                      VM;                                                         // 0x00B8   (0x0008)  
	SDK_UNDEFINED(80,2061) /* TMap<uint32_t, URigVM*> */ __um(InitializedVMSnapshots);                             // 0x00C0   (0x0050)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0110   (0x0008)  MISSED
	class URigHierarchy*                               DynamicHierarchy;                                           // 0x0118   (0x0008)  
	SDK_UNDEFINED(48,2062) /* TWeakObjectPtr<UControlRigShapeLibrary*> */ __um(GizmoLibrary);                      // 0x0120   (0x0030)  
	SDK_UNDEFINED(16,2063) /* TArray<TWeakObjectPtr<UControlRigShapeLibrary*>> */ __um(ShapeLibraries);            // 0x0150   (0x0010)  
	unsigned char                                      UnknownData04_5[0x10];                                      // 0x0160   (0x0010)  MISSED
	SDK_UNDEFINED(80,2064) /* TMap<FName, FCachedPropertyPath> */ __um(InputProperties);                           // 0x0170   (0x0050)  
	SDK_UNDEFINED(80,2065) /* TMap<FName, FCachedPropertyPath> */ __um(OutputProperties);                          // 0x01C0   (0x0050)  
	unsigned char                                      UnknownData05_5[0xA8];                                      // 0x0210   (0x00A8)  MISSED
	FControlRigDrawContainer                           DrawContainer;                                              // 0x02B8   (0x0018)  
	unsigned char                                      UnknownData06_5[0x18];                                      // 0x02D0   (0x0018)  MISSED
	class UAnimationDataSourceRegistry*                DataSourceRegistry;                                         // 0x02E8   (0x0008)  
	TArray<FName>                                      EventQueue;                                                 // 0x02F0   (0x0010)  
	unsigned char                                      UnknownData07_5[0xD0];                                      // 0x0300   (0x00D0)  MISSED
	FRigInfluenceMapPerEvent                           Influences;                                                 // 0x03D0   (0x0060)  
	class UControlRig*                                 InteractionRig;                                             // 0x0430   (0x0008)  
	class UClass*                                      InteractionRigClass;                                        // 0x0438   (0x0008)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0440   (0x0010)  
	unsigned char                                      UnknownData08_5[0xC8];                                      // 0x0450   (0x00C8)  MISSED
	SDK_UNDEFINED(1,2066) /* FMulticastSparseDelegate */ __um(OnControlSelected_BP);                               // 0x0518   (0x0001)  
	unsigned char                                      UnknownData09_6[0x47];                                      // 0x0519   (0x0047)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRig.SupportsEvent
	// bool SupportsEvent(FName& InEventName);                                                                               // [0x19852a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.SetVariableFromString
	// bool SetVariableFromString(FName& InVariableName, FString InValue);                                                   // [0x1986900] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SetInteractionRigClass
	// void SetInteractionRigClass(class UClass* InInteractionRigClass);                                                     // [0x1986700] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SetInteractionRig
	// void SetInteractionRig(class UControlRig* InInteractionRig);                                                          // [0x1986670] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SetFramesPerSecond
	// void SetFramesPerSecond(float InFramesPerSecond);                                                                     // [0x19865f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SetDeltaTime
	// void SetDeltaTime(float InDeltaTime);                                                                                 // [0x1986570] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SetAbsoluteTime
	// void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);                                                  // [0x1986490] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SetAbsoluteAndDeltaTime
	// void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);                                                // [0x19863c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SelectControl
	// void SelectControl(FName& InControlName, bool bSelect);                                                               // [0x19862e0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.RequestInit
	// void RequestInit();                                                                                                   // [0x19862c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.RequestConstruction
	// void RequestConstruction();                                                                                           // [0x19862a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
	// void OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, FRigControlElement& Control, bool bSelected);     // [0x2119480] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/ControlRig.ControlRig.IsControlSelected
	// bool IsControlSelected(FName& InControlName);                                                                         // [0x19861f0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetVM
	// class URigVM* GetVM();                                                                                                // [0x1986000] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRig.GetVariableType
	// FName GetVariableType(FName& InVariableName);                                                                         // [0x1986100] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetVariableAsString
	// FString GetVariableAsString(FName& InVariableName);                                                                   // [0x1986060] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetSupportedEvents
	// TArray<FName> GetSupportedEvents();                                                                                   // [0x1985cc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetScriptAccessibleVariables
	// TArray<FName> GetScriptAccessibleVariables();                                                                         // [0x1985e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetInteractionRigClass
	// class UClass* GetInteractionRigClass();                                                                               // [0x1985e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetInteractionRig
	// class UControlRig* GetInteractionRig();                                                                               // [0x1985e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetHostingActor
	// class AActor* GetHostingActor();                                                                                      // [0x1985dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetHierarchy
	// class URigHierarchy* GetHierarchy();                                                                                  // [0x1985da0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRig.GetEvents
	// TArray<FName> GetEvents();                                                                                            // [0x1985cc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetCurrentFramesPerSecond
	// float GetCurrentFramesPerSecond();                                                                                    // [0x1985c60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetAbsoluteTime
	// float GetAbsoluteTime();                                                                                              // [0x1985c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.FindControlRigs
	// TArray<UControlRig*> FindControlRigs(class UObject* Outer, class UClass* OptionalClass);                              // [0x1985890] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.ExecuteEvent
	// bool ExecuteEvent(FName& InEventName);                                                                                // [0x19856b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.Execute
	// bool Execute(EControlRigState State, FName& InEventName);                                                             // [0x19855d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.CurrentControlSelection
	// TArray<FName> CurrentControlSelection();                                                                              // [0x1985550] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.CreateTransformableControlHandle
	// class UTransformableControlHandle* CreateTransformableControlHandle(class UObject* Outer, FName& ControlName);        // [0x1985360] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.ContainsEvent
	// bool ContainsEvent(FName& InEventName);                                                                               // [0x19852a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.ClearControlSelection
	// bool ClearControlSelection();                                                                                         // [0x1985270] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.CanExecute
	// bool CanExecute();                                                                                                    // [0x190d910] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigAnimInstance
/// Size: 0x0000 (0x000350 - 0x000350)
class UControlRigAnimInstance : public UAnimInstance
{ 
public:
};

/// Class /Script/ControlRig.ControlRigBlueprintGeneratedClass
/// Size: 0x0000 (0x000380 - 0x000380)
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
};

/// Struct /Script/ControlRig.ControlRigComponentMappedElement
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FControlRigComponentMappedElement
{ 
	FComponentReference                                ComponentReference;                                         // 0x0000   (0x0028)  
	int32_t                                            TransformIndex;                                             // 0x0028   (0x0004)  
	FName                                              TransformName;                                              // 0x002C   (0x0008)  
	ERigElementType                                    ElementType;                                                // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FName                                              ElementName;                                                // 0x0038   (0x0008)  
	EControlRigComponentMapDirection                   Direction;                                                  // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0041   (0x000F)  MISSED
	FTransform                                         Offset;                                                     // 0x0050   (0x0060)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	EControlRigComponentSpace                          Space;                                                      // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x00B8   (0x0008)  
	int32_t                                            ElementIndex;                                               // 0x00C0   (0x0004)  
	int32_t                                            SubIndex;                                                   // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/ControlRig.ControlRigComponent
/// Size: 0x0150 (0x000540 - 0x000690)
class UControlRigComponent : public UPrimitiveComponent
{ 
public:
	class UClass*                                      ControlRigClass;                                            // 0x0538   (0x0008)  
	SDK_UNDEFINED(16,2067) /* FMulticastInlineDelegate */ __um(OnPreInitializeDelegate);                           // 0x0540   (0x0010)  
	SDK_UNDEFINED(16,2068) /* FMulticastInlineDelegate */ __um(OnPostInitializeDelegate);                          // 0x0550   (0x0010)  
	SDK_UNDEFINED(16,2069) /* FMulticastInlineDelegate */ __um(OnPreConstructionDelegate);                         // 0x0560   (0x0010)  
	SDK_UNDEFINED(16,2070) /* FMulticastInlineDelegate */ __um(OnPostConstructionDelegate);                        // 0x0570   (0x0010)  
	SDK_UNDEFINED(16,2071) /* FMulticastInlineDelegate */ __um(OnPreForwardsSolveDelegate);                        // 0x0580   (0x0010)  
	SDK_UNDEFINED(16,2072) /* FMulticastInlineDelegate */ __um(OnPostForwardsSolveDelegate);                       // 0x0590   (0x0010)  
	TArray<FControlRigComponentMappedElement>          UserDefinedElements;                                        // 0x05A0   (0x0010)  
	TArray<FControlRigComponentMappedElement>          MappedElements;                                             // 0x05B0   (0x0010)  
	bool                                               bEnableLazyEvaluation;                                      // 0x05C0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x05C1   (0x0003)  MISSED
	float                                              LazyEvaluationPositionThreshold;                            // 0x05C4   (0x0004)  
	float                                              LazyEvaluationRotationThreshold;                            // 0x05C8   (0x0004)  
	float                                              LazyEvaluationScaleThreshold;                               // 0x05CC   (0x0004)  
	bool                                               bResetTransformBeforeTick;                                  // 0x05D0   (0x0001)  
	bool                                               bResetInitialsBeforeConstruction;                           // 0x05D1   (0x0001)  
	bool                                               bUpdateRigOnTick;                                           // 0x05D2   (0x0001)  
	bool                                               bUpdateInEditor;                                            // 0x05D3   (0x0001)  
	bool                                               bDrawBones;                                                 // 0x05D4   (0x0001)  
	bool                                               bShowDebugDrawing;                                          // 0x05D5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x05D6   (0x0002)  MISSED
	class UControlRig*                                 ControlRig;                                                 // 0x05D8   (0x0008)  
	unsigned char                                      UnknownData02_6[0xB0];                                      // 0x05E0   (0x00B0)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigComponent.Update
	// void Update(float DeltaTime);                                                                                         // [0x19f17e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetObjectBinding
	// void SetObjectBinding(class UObject* InObjectToBind);                                                                 // [0x19f1360] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetMappedElements
	// void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                  // [0x19f1170] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialSpaceTransform
	// void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);         // [0x19f0ee0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialBoneTransform
	// void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren); // [0x19f0cf0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlVector2D
	// void SetControlVector2D(FName ControlName, FVector2D Value);                                                          // [0x19f0660] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlTransform
	// void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);                       // [0x19f03d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlScale
	// void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);                              // [0x19efec0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlRotator
	// void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);                           // [0x19efb50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlRigClass
	// void SetControlRigClass(class UClass* InControlRigClass);                                                             // [0x19efab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlPosition
	// void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);                           // [0x19ef780] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlOffset
	// void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);                // [0x19ef4e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlInt
	// void SetControlInt(FName ControlName, int32_t Value);                                                                 // [0x19ef310] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlFloat
	// void SetControlFloat(FName ControlName, float Value);                                                                 // [0x19ef130] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlBool
	// void SetControlBool(FName ControlName, bool Value);                                                                   // [0x19eef50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneTransform
	// void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // [0x19eed10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	// void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);                                   // [0x19eec60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.OnPreInitialize
	// void OnPreInitialize(class UControlRigComponent* Component);                                                          // [0x19ee370] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreForwardsSolve
	// void OnPreForwardsSolve(class UControlRigComponent* Component);                                                       // [0x19ee2e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreConstruction
	// void OnPreConstruction(class UControlRigComponent* Component);                                                        // [0x19ee250] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostInitialize
	// void OnPostInitialize(class UControlRigComponent* Component);                                                         // [0x19ee1c0] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostForwardsSolve
	// void OnPostForwardsSolve(class UControlRigComponent* Component);                                                      // [0x19ee130] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostConstruction
	// void OnPostConstruction(class UControlRigComponent* Component);                                                       // [0x19ee0a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.Initialize
	// void Initialize();                                                                                                    // [0x19edcf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetSpaceTransform
	// FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                       // [0x19ed080] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialSpaceTransform
	// FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                // [0x19ece60] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialBoneTransform
	// FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                  // [0x19ecbb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetElementNames
	// TArray<FName> GetElementNames(ERigElementType ElementType);                                                           // [0x19ec930] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlVector2D
	// FVector2D GetControlVector2D(FName ControlName);                                                                      // [0x19ec7b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlTransform
	// FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);                                   // [0x19ec690] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlScale
	// FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);                                          // [0x19ec3c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRotator
	// FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);                                       // [0x19ec290] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRig
	// class UControlRig* GetControlRig();                                                                                   // [0x19ec260] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlPosition
	// FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);                                       // [0x19ec150] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlOffset
	// FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);                                      // [0x19ec030] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetControlInt
	// int32_t GetControlInt(FName ControlName);                                                                             // [0x19ebed0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlFloat
	// float GetControlFloat(FName ControlName);                                                                             // [0x19ebd70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlBool
	// bool GetControlBool(FName ControlName);                                                                               // [0x19ebc10] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetBoneTransform
	// FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                         // [0x19eb960] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetAbsoluteTime
	// float GetAbsoluteTime();                                                                                              // [0x19eb920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigComponent.DoesElementExist
	// bool DoesElementExist(FName Name, ERigElementType ElementType);                                                       // [0x19eb3c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.ClearMappedElements
	// void ClearMappedElements();                                                                                           // [0x19eb280] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.CanExecute
	// bool CanExecute();                                                                                                    // [0x19eb1f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	// void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves); // [0x19ea8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedElements
	// void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                  // [0x19ea800] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedComponents
	// void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);                                     // [0x19ea710] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
	// void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);                              // [0x19ea660] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigControlActor
/// Size: 0x00B8 (0x000290 - 0x000348)
class AControlRigControlActor : public AActor
{ 
public:
	class AActor*                                      ActorToTrack;                                               // 0x0290   (0x0008)  
	class UClass*                                      ControlRigClass;                                            // 0x0298   (0x0008)  
	bool                                               bRefreshOnTick;                                             // 0x02A0   (0x0001)  
	bool                                               bIsSelectable;                                              // 0x02A1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x02A2   (0x0006)  MISSED
	class UMaterialInterface*                          MaterialOverride;                                           // 0x02A8   (0x0008)  
	SDK_UNDEFINED(16,2073) /* FString */               __um(ColorParameter);                                       // 0x02B0   (0x0010)  
	bool                                               bCastShadows;                                               // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x02C1   (0x0007)  MISSED
	class USceneComponent*                             ActorRootComponent;                                         // 0x02C8   (0x0008)  
	SDK_UNDEFINED(48,2074) /* TWeakObjectPtr<UControlRig*> */ __um(ControlRig);                                    // 0x02D0   (0x0030)  
	TArray<FName>                                      ControlNames;                                               // 0x0300   (0x0010)  
	TArray<FTransform>                                 ShapeTransforms;                                            // 0x0310   (0x0010)  
	TArray<class UStaticMeshComponent*>                Components;                                                 // 0x0320   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            Materials;                                                  // 0x0330   (0x0010)  
	FName                                              ColorParameterName;                                         // 0x0340   (0x0008)  


	/// Functions
	// Function /Script/ControlRig.ControlRigControlActor.ResetControlActor
	// void ResetControlActor();                                                                                             // [0x19eeab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigControlActor.Refresh
	// void Refresh();                                                                                                       // [0x19ee400] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigControlActor.Clear
	// void Clear();                                                                                                         // [0x19eb260] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigShapeActor
/// Size: 0x0048 (0x000290 - 0x0002D8)
class AControlRigShapeActor : public AActor
{ 
public:
	class USceneComponent*                             ActorRootComponent;                                         // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x0298   (0x0008)  
	uint32_t                                           ControlRigIndex;                                            // 0x02A0   (0x0004)  
	SDK_UNDEFINED(8,2075) /* TWeakObjectPtr<UControlRig*> */ __um(ControlRig);                                     // 0x02A4   (0x0008)  
	FName                                              ControlName;                                                // 0x02AC   (0x0008)  
	FName                                              ShapeName;                                                  // 0x02B4   (0x0008)  
	FName                                              ColorParameterName;                                         // 0x02BC   (0x0008)  
	unsigned char                                      UnknownData00_5[0x10];                                      // 0x02C4   (0x0010)  MISSED
	bool                                               bSelected : 1;                                              // 0x02D4:0 (0x0001)  
	bool                                               bHovered : 1;                                               // 0x02D4:1 (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02D5   (0x0003)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigShapeActor.SetSelected
	// void SetSelected(bool bInSelected);                                                                                   // [0x19f1650] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetSelectable
	// void SetSelectable(bool bInSelectable);                                                                               // [0x19f15c0] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetHovered
	// void SetHovered(bool bInHovered);                                                                                     // [0x19f0c60] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetGlobalTransform
	// void SetGlobalTransform(FTransform& InTransform);                                                                     // [0x19f0ab0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetEnabled
	// void SetEnabled(bool bInEnabled);                                                                                     // [0x19f0a20] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.OnTransformChanged
	// void OnTransformChanged(FTransform& NewTransform);                                                                    // [0x2119480] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnSelectionChanged
	// void OnSelectionChanged(bool bIsSelected);                                                                            // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnManipulatingChanged
	// void OnManipulatingChanged(bool bIsManipulating);                                                                     // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnHoveredChanged
	// void OnHoveredChanged(bool bIsSelected);                                                                              // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnEnabledChanged
	// void OnEnabledChanged(bool bIsEnabled);                                                                               // [0x2119480] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.IsSelectedInEditor
	// bool IsSelectedInEditor();                                                                                            // [0x19edd70] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.IsHovered
	// bool IsHovered();                                                                                                     // [0x19edd40] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.IsEnabled
	// bool IsEnabled();                                                                                                     // [0x19edd10] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.GetGlobalTransform
	// FTransform GetGlobalTransform();                                                                                      // [0x19ecab0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ControlRig.ControlRigShapeDefinition
/// Size: 0x00B0 (0x000000 - 0x0000B0)
struct FControlRigShapeDefinition
{ 
	FName                                              ShapeName;                                                  // 0x0000   (0x0008)  
	SDK_UNDEFINED(48,2076) /* TWeakObjectPtr<UStaticMesh*> */ __um(StaticMesh);                                    // 0x0008   (0x0030)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00A0   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigShapeLibrary
/// Size: 0x0148 (0x000028 - 0x000170)
class UControlRigShapeLibrary : public UObject
{ 
public:
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FControlRigShapeDefinition                         DefaultShape;                                               // 0x0030   (0x00B0)  
	SDK_UNDEFINED(48,2077) /* TWeakObjectPtr<UMaterial*> */ __um(DefaultMaterial);                                 // 0x00E0   (0x0030)  
	SDK_UNDEFINED(48,2078) /* TWeakObjectPtr<UMaterial*> */ __um(XRayMaterial);                                    // 0x0110   (0x0030)  
	FName                                              MaterialColorParameter;                                     // 0x0140   (0x0008)  
	TArray<FControlRigShapeDefinition>                 Shapes;                                                     // 0x0148   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0158   (0x0018)  MISSED
};

/// Class /Script/ControlRig.ControlRigValidator
/// Size: 0x0040 (0x000028 - 0x000068)
class UControlRigValidator : public UObject
{ 
public:
	TArray<class UControlRigValidationPass*>           Passes;                                                     // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0038   (0x0030)  MISSED
};

/// Class /Script/ControlRig.ControlRigValidationPass
/// Size: 0x0000 (0x000028 - 0x000028)
class UControlRigValidationPass : public UObject
{ 
public:
};

/// Class /Script/ControlRig.AdditiveControlRig
/// Size: 0x0010 (0x000560 - 0x000570)
class UAdditiveControlRig : public UControlRig
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0560   (0x0010)  MISSED
};

/// Class /Script/ControlRig.FKControlRig
/// Size: 0x0040 (0x000560 - 0x0005A0)
class UFKControlRig : public UControlRig
{ 
public:
	TArray<bool>                                       IsControlActive;                                            // 0x0560   (0x0010)  
	EControlRigFKRigExecuteMode                        ApplyMode;                                                  // 0x0570   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2F];                                      // 0x0571   (0x002F)  MISSED
};

/// Class /Script/ControlRig.RigHierarchyController
/// Size: 0x0078 (0x000028 - 0x0000A0)
class URigHierarchyController : public UObject
{ 
public:
	bool                                               bReportWarningsAndErrors;                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	SDK_UNDEFINED(8,2079) /* TWeakObjectPtr<URigHierarchy*> */ __um(Hierarchy);                                    // 0x002C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x6C];                                      // 0x0034   (0x006C)  MISSED


	/// Functions
	// Function /Script/ControlRig.RigHierarchyController.SetSelection
	// bool SetSelection(TArray<FRigElementKey>& InKeys, bool bPrintPythonCommand);                                          // [0x19f16e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetParent
	// bool SetParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x19f13f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetHierarchy
	// void SetHierarchy(class URigHierarchy* InHierarchy);                                                                  // [0x19f0bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetDisplayName
	// FName SetDisplayName(FRigElementKey InControl, FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand); // [0x19f0860] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetControlSettings
	// bool SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo);                       // [0x19f01f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.SelectElement
	// bool SelectElement(FRigElementKey InKey, bool bSelect, bool bClearSelection);                                         // [0x19eeb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RenameElement
	// FRigElementKey RenameElement(FRigElementKey InElement, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection); // [0x19ee8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveParent
	// bool RemoveParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x19ee710] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveElement
	// bool RemoveElement(FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand);                              // [0x19ee5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveAllParents
	// bool RemoveAllParents(FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x19ee420] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.MirrorElements
	// TArray<FRigElementKey> MirrorElements(TArray<FRigElementKey> InKeys, FRigMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x19edda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportFromText
	// TArray<FRigElementKey> ImportFromText(FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x19edaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportCurves
	// TArray<FRigElementKey> ImportCurves(class USkeleton* InSkeleton, FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand); // [0x19ed570] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportBones
	// TArray<FRigElementKey> ImportBones(class USkeleton* InSkeleton, FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand); // [0x19ed2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.GetHierarchy
	// class URigHierarchy* GetHierarchy();                                                                                  // [0x19ecb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.GetControlSettings
	// FRigControlSettings GetControlSettings(FRigElementKey InKey);                                                         // [0x19ec4d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.ExportToText
	// FString ExportToText(TArray<FRigElementKey> InKeys);                                                                  // [0x19eb7e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.ExportSelectionToText
	// FString ExportSelectionToText();                                                                                      // [0x19eb720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.DuplicateElements
	// TArray<FRigElementKey> DuplicateElements(TArray<FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x19eb510] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.DeselectElement
	// bool DeselectElement(FRigElementKey InKey);                                                                           // [0x19eb300] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ClearSelection
	// bool ClearSelection();                                                                                                // [0x19eb2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddRigidBody
	// FRigElementKey AddRigidBody(FName InName, FRigElementKey InParent, FRigRigidBodySettings InSettings, FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x19eaf30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddParent
	// bool AddParent(FRigElementKey InChild, FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo); // [0x19ead60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddNull
	// FRigElementKey AddNull(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand); // [0x19eaaa0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddCurve
	// FRigElementKey AddCurve(FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);                      // [0x19ea4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddControl_ForBlueprint
	// FRigElementKey AddControl_ForBlueprint(FName InName, FRigElementKey InParent, FRigControlSettings InSettings, FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand); // [0x19e9f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddBone
	// FRigElementKey AddBone(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand); // [0x19e9c60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
	// FRigElementKey AddAnimationChannel_ForBlueprint(FName InName, FRigElementKey InParentControl, FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // [0x19e99b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigLayerInstance
/// Size: 0x0000 (0x000350 - 0x000350)
class UControlRigLayerInstance : public UAnimInstance
{ 
public:
};

/// Class /Script/ControlRig.ControlRigObjectHolder
/// Size: 0x0010 (0x000028 - 0x000038)
class UControlRigObjectHolder : public UObject
{ 
public:
	TArray<class UObject*>                             Objects;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigSequence
/// Size: 0x0068 (0x000220 - 0x000288)
class UControlRigSequence : public ULevelSequence
{ 
public:
	SDK_UNDEFINED(48,2080) /* TWeakObjectPtr<UAnimSequence*> */ __um(LastExportedToAnimationSequence);             // 0x0220   (0x0030)  
	SDK_UNDEFINED(48,2081) /* TWeakObjectPtr<USkeletalMesh*> */ __um(LastExportedUsingSkeletalMesh);               // 0x0250   (0x0030)  
	float                                              LastExportedFrameRate;                                      // 0x0280   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0284   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.EnumParameterNameAndCurve
/// Size: 0x0110 (0x000000 - 0x000110)
struct FEnumParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneByteChannel                             ParameterCurve;                                             // 0x0008   (0x0108)  
};

/// Struct /Script/ControlRig.IntegerParameterNameAndCurve
/// Size: 0x0108 (0x000000 - 0x000108)
struct FIntegerParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneIntegerChannel                          ParameterCurve;                                             // 0x0008   (0x0100)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigSpaceBaseKey
/// Size: 0x0010 (0x000000 - 0x000010)
struct FMovieSceneControlRigSpaceBaseKey
{ 
	EMovieSceneControlRigSpaceType                     SpaceType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FRigElementKey                                     ControlRigElement;                                          // 0x0004   (0x000C)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigSpaceChannel
/// Size: 0x00C0 (0x000050 - 0x000110)
struct FMovieSceneControlRigSpaceChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0050   (0x0010)  
	TArray<FMovieSceneControlRigSpaceBaseKey>          KeyValues;                                                  // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x0070   (0x00A0)  MISSED
};

/// Struct /Script/ControlRig.SpaceControlNameAndChannel
/// Size: 0x0118 (0x000000 - 0x000118)
struct FSpaceControlNameAndChannel
{ 
	FName                                              ControlName;                                                // 0x0000   (0x0008)  
	FMovieSceneControlRigSpaceChannel                  SpaceCurve;                                                 // 0x0008   (0x0110)  
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterSection
/// Size: 0x0270 (0x000158 - 0x0003C8)
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0158   (0x0040)  MISSED
	class UControlRig*                                 ControlRig;                                                 // 0x0198   (0x0008)  
	class UClass*                                      ControlRigClass;                                            // 0x01A0   (0x0008)  
	TArray<bool>                                       ControlsMask;                                               // 0x01A8   (0x0010)  
	FMovieSceneTransformMask                           TransformMask;                                              // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x01BC   (0x0004)  MISSED
	FMovieSceneFloatChannel                            Weight;                                                     // 0x01C0   (0x0110)  
	SDK_UNDEFINED(80,2082) /* TMap<FName, FChannelMapInfo> */ __um(ControlChannelMap);                             // 0x02D0   (0x0050)  
	TArray<FEnumParameterNameAndCurve>                 EnumParameterNamesAndCurves;                                // 0x0320   (0x0010)  
	TArray<FIntegerParameterNameAndCurve>              IntegerParameterNamesAndCurves;                             // 0x0330   (0x0010)  
	TArray<FSpaceControlNameAndChannel>                SpaceChannels;                                              // 0x0340   (0x0010)  
	TArray<FConstraintAndActiveChannel>                ConstraintsChannels;                                        // 0x0350   (0x0010)  
	unsigned char                                      UnknownData02_6[0x68];                                      // 0x0360   (0x0068)  MISSED
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterTrack
/// Size: 0x0068 (0x000098 - 0x000100)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0098   (0x0040)  MISSED
	class UControlRig*                                 ControlRig;                                                 // 0x00D8   (0x0008)  
	class UMovieSceneSection*                          SectionToKey;                                               // 0x00E0   (0x0008)  
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x00E8   (0x0010)  
	FName                                              TrackName;                                                  // 0x00F8   (0x0008)  
};

/// Class /Script/ControlRig.ControlRigSettings
/// Size: 0x0000 (0x000038 - 0x000038)
class UControlRigSettings : public UDeveloperSettings
{ 
public:
};

/// Class /Script/ControlRig.ControlRigEditorSettings
/// Size: 0x0000 (0x000038 - 0x000038)
class UControlRigEditorSettings : public UDeveloperSettings
{ 
public:
};

/// Struct /Script/ControlRig.RigControlValueStorage
/// Size: 0x0084 (0x000000 - 0x000084)
struct FRigControlValueStorage
{ 
	float                                              Float00;                                                    // 0x0000   (0x0004)  
	float                                              Float01;                                                    // 0x0004   (0x0004)  
	float                                              Float02;                                                    // 0x0008   (0x0004)  
	float                                              Float03;                                                    // 0x000C   (0x0004)  
	float                                              Float10;                                                    // 0x0010   (0x0004)  
	float                                              Float11;                                                    // 0x0014   (0x0004)  
	float                                              Float12;                                                    // 0x0018   (0x0004)  
	float                                              Float13;                                                    // 0x001C   (0x0004)  
	float                                              Float20;                                                    // 0x0020   (0x0004)  
	float                                              Float21;                                                    // 0x0024   (0x0004)  
	float                                              Float22;                                                    // 0x0028   (0x0004)  
	float                                              Float23;                                                    // 0x002C   (0x0004)  
	float                                              Float30;                                                    // 0x0030   (0x0004)  
	float                                              Float31;                                                    // 0x0034   (0x0004)  
	float                                              Float32;                                                    // 0x0038   (0x0004)  
	float                                              Float33;                                                    // 0x003C   (0x0004)  
	float                                              Float000;                                                   // 0x0040   (0x0004)  
	float                                              Float011;                                                   // 0x0044   (0x0004)  
	float                                              Float022;                                                   // 0x0048   (0x0004)  
	float                                              Float033;                                                   // 0x004C   (0x0004)  
	float                                              Float104;                                                   // 0x0050   (0x0004)  
	float                                              Float115;                                                   // 0x0054   (0x0004)  
	float                                              Float126;                                                   // 0x0058   (0x0004)  
	float                                              Float137;                                                   // 0x005C   (0x0004)  
	float                                              Float208;                                                   // 0x0060   (0x0004)  
	float                                              Float219;                                                   // 0x0064   (0x0004)  
	float                                              Float2210;                                                  // 0x0068   (0x0004)  
	float                                              Float2311;                                                  // 0x006C   (0x0004)  
	float                                              Float3012;                                                  // 0x0070   (0x0004)  
	float                                              Float3113;                                                  // 0x0074   (0x0004)  
	float                                              Float3214;                                                  // 0x0078   (0x0004)  
	float                                              Float3315;                                                  // 0x007C   (0x0004)  
	bool                                               bValid;                                                     // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0081   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigControlValue
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FRigControlValue
{ 
	FRigControlValueStorage                            FloatStorage;                                               // 0x0000   (0x0084)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0084   (0x000C)  MISSED
	FTransform                                         Storage;                                                    // 0x0090   (0x0060)  
};

/// Struct /Script/ControlRig.RigControlCopy
/// Size: 0x02A0 (0x000000 - 0x0002A0)
struct FRigControlCopy
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	FName                                              Name;                                                       // 0x0010   (0x0008)  
	ERigControlType                                    ControlType;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FRigControlValue                                   Value;                                                      // 0x0020   (0x00F0)  
	FRigElementKey                                     ParentKey;                                                  // 0x0110   (0x000C)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x011C   (0x0004)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x0120   (0x0060)  
	FTransform                                         ParentTransform;                                            // 0x0180   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x01E0   (0x0060)  
	FTransform                                         GlobalTransform;                                            // 0x0240   (0x0060)  
};

/// Struct /Script/ControlRig.ControlRigControlPose
/// Size: 0x0060 (0x000000 - 0x000060)
struct FControlRigControlPose
{ 
	TArray<FRigControlCopy>                            CopyOfControls;                                             // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0010   (0x0050)  MISSED
};

/// Class /Script/ControlRig.ControlRigPoseAsset
/// Size: 0x0060 (0x000028 - 0x000088)
class UControlRigPoseAsset : public UObject
{ 
public:
	FControlRigControlPose                             Pose;                                                       // 0x0028   (0x0060)  


	/// Functions
	// Function /Script/ControlRig.ControlRigPoseAsset.SelectControls
	// void SelectControls(class UControlRig* InControlRig, bool bDoMirror);                                                 // [0x1a3bc90] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.SavePose
	// void SavePose(class UControlRig* InControlRig, bool bUseAll);                                                         // [0x1a3bbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.ReplaceControlName
	// void ReplaceControlName(FName& CurrentName, FName& NewName);                                                          // [0x1a3ba10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.PastePose
	// void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);                                         // [0x1a3b7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.GetCurrentPose
	// void GetCurrentPose(class UControlRig* InControlRig, FControlRigControlPose& OutPose);                                // [0x1a3b5f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.GetControlNames
	// TArray<FName> GetControlNames();                                                                                      // [0x1a3b570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigPoseAsset.DoesMirrorMatch
	// bool DoesMirrorMatch(class UControlRig* ControlRig, FName& ControlName);                                              // [0x1a3b040] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigPoseMirrorSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UControlRigPoseMirrorSettings : public UObject
{ 
public:
	SDK_UNDEFINED(16,2083) /* FString */               __um(RightSide);                                            // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,2084) /* FString */               __um(LeftSide);                                             // 0x0038   (0x0010)  
	SDK_UNDEFINED(1,2085) /* TEnumAsByte<EAxis> */     __um(MirrorAxis);                                           // 0x0048   (0x0001)  
	SDK_UNDEFINED(1,2086) /* TEnumAsByte<EAxis> */     __um(AxisToFlip);                                           // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Class /Script/ControlRig.ControlRigPoseProjectSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UControlRigPoseProjectSettings : public UObject
{ 
public:
	TArray<FDirectoryPath>                             RootSaveDirs;                                               // 0x0028   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigSnapSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UControlRigSnapSettings : public UObject
{ 
public:
	bool                                               bKeepOffset;                                                // 0x0028   (0x0001)  
	bool                                               bSnapPosition;                                              // 0x0029   (0x0001)  
	bool                                               bSnapRotation;                                              // 0x002A   (0x0001)  
	bool                                               bSnapScale;                                                 // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/ControlRig.ControlRigWorkflowOptions
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{ 
public:
	class URigHierarchy*                               Hierarchy;                                                  // 0x0098   (0x0008)  
	TArray<FRigElementKey>                             Selection;                                                  // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
	// bool EnsureAtLeastOneRigElementSelected();                                                                            // [0x1a3b4f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigTransformWorkflowOptions
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{ 
public:
	SDK_UNDEFINED(1,2087) /* TEnumAsByte<ERigTransformType> */ __um(TransformType);                                // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
	// TArray<FRigVMUserWorkflow> ProvideWorkflows(class UObject* InSubject);                                                // [0x1a3b8f0] Final|Native|Public  
};

/// Struct /Script/ControlRig.CachedRigElement
/// Size: 0x0020 (0x000000 - 0x000020)
struct FCachedRigElement
{ 
	FRigElementKey                                     Key;                                                        // 0x0000   (0x000C)  
	uint16_t                                           Index;                                                      // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	int32_t                                            ContainerVersion;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigPoseElement
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FRigPoseElement
{ 
	FCachedRigElement                                  Index;                                                      // 0x0000   (0x0020)  
	FTransform                                         GlobalTransform;                                            // 0x0020   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x0080   (0x0060)  
	float                                              CurveValue;                                                 // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00E4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigPose
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigPose
{ 
	TArray<FRigPoseElement>                            Elements;                                                   // 0x0000   (0x0010)  
	int32_t                                            HierarchyTopologyVersion;                                   // 0x0010   (0x0004)  
	int32_t                                            PoseHash;                                                   // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0018   (0x0058)  MISSED
};

/// Class /Script/ControlRig.ControlRigNumericalValidationPass
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{ 
public:
	bool                                               bCheckControls;                                             // 0x0028   (0x0001)  
	bool                                               bCheckBones;                                                // 0x0029   (0x0001)  
	bool                                               bCheckCurves;                                               // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x002B   (0x0001)  MISSED
	float                                              TranslationPrecision;                                       // 0x002C   (0x0004)  
	float                                              RotationPrecision;                                          // 0x0030   (0x0004)  
	float                                              ScalePrecision;                                             // 0x0034   (0x0004)  
	float                                              CurvePrecision;                                             // 0x0038   (0x0004)  
	FName                                              EventNameA;                                                 // 0x003C   (0x0008)  
	FName                                              EventNameB;                                                 // 0x0044   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FRigPose                                           Pose;                                                       // 0x0050   (0x0070)  
};

/// Struct /Script/ControlRig.RigBaseElement
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FRigBaseElement
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FRigElementKey                                     Key;                                                        // 0x0008   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,2088) /* FString */               __um(NameString);                                           // 0x0018   (0x0010)  
	int32_t                                            Index;                                                      // 0x0028   (0x0004)  
	int32_t                                            SubIndex;                                                   // 0x002C   (0x0004)  
	bool                                               bSelected;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            CreatedAtInstructionIndex;                                  // 0x0034   (0x0004)  
	unsigned char                                      UnknownData03_6[0xB8];                                      // 0x0038   (0x00B8)  MISSED
};

/// Struct /Script/ControlRig.RigComputedTransform
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigComputedTransform
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.RigLocalAndGlobalTransform
/// Size: 0x00E0 (0x000000 - 0x0000E0)
struct FRigLocalAndGlobalTransform
{ 
	FRigComputedTransform                              Local;                                                      // 0x0000   (0x0070)  
	FRigComputedTransform                              Global;                                                     // 0x0070   (0x0070)  
};

/// Struct /Script/ControlRig.RigCurrentAndInitialTransform
/// Size: 0x01C0 (0x000000 - 0x0001C0)
struct FRigCurrentAndInitialTransform
{ 
	FRigLocalAndGlobalTransform                        Current;                                                    // 0x0000   (0x00E0)  
	FRigLocalAndGlobalTransform                        Initial;                                                    // 0x00E0   (0x00E0)  
};

/// Struct /Script/ControlRig.RigTransformElement
/// Size: 0x0200 (0x0000F0 - 0x0002F0)
struct FRigTransformElement : FRigBaseElement
{ 
	FRigCurrentAndInitialTransform                     Pose;                                                       // 0x00F0   (0x01C0)  
	unsigned char                                      UnknownData00_6[0x40];                                      // 0x02B0   (0x0040)  MISSED
};

/// Struct /Script/ControlRig.RigMultiParentElement
/// Size: 0x0100 (0x0002F0 - 0x0003F0)
struct FRigMultiParentElement : FRigTransformElement
{ 
	unsigned char                                      UnknownData00_1[0x100];                                     // 0x02F0   (0x0100)  MISSED
};

/// Struct /Script/ControlRig.RigControlLimitEnabled
/// Size: 0x0002 (0x000000 - 0x000002)
struct FRigControlLimitEnabled
{ 
	bool                                               bMinimum;                                                   // 0x0000   (0x0001)  
	bool                                               bMaximum;                                                   // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.RigControlElementCustomization
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigControlElementCustomization
{ 
	TArray<FRigElementKey>                             AvailableSpaces;                                            // 0x0000   (0x0010)  
	TArray<FRigElementKey>                             RemovedSpaces;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigControlSettings
/// Size: 0x0280 (0x000000 - 0x000280)
struct FRigControlSettings
{ 
	ERigControlAnimationType                           AnimationType;                                              // 0x0000   (0x0001)  
	ERigControlType                                    ControlType;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	FName                                              DisplayName;                                                // 0x0004   (0x0008)  
	ERigControlAxis                                    PrimaryAxis;                                                // 0x000C   (0x0001)  
	bool                                               bIsCurve;                                                   // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	TArray<FRigControlLimitEnabled>                    LimitEnabled;                                               // 0x0010   (0x0010)  
	bool                                               bDrawLimits;                                                // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_5[0xF];                                       // 0x0021   (0x000F)  MISSED
	FRigControlValue                                   MinimumValue;                                               // 0x0030   (0x00F0)  
	FRigControlValue                                   MaximumValue;                                               // 0x0120   (0x00F0)  
	bool                                               bShapeVisible;                                              // 0x0210   (0x0001)  
	ERigControlVisibility                              ShapeVisibility;                                            // 0x0211   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0212   (0x0002)  MISSED
	FName                                              ShapeName;                                                  // 0x0214   (0x0008)  
	FLinearColor                                       ShapeColor;                                                 // 0x021C   (0x0010)  
	bool                                               bIsTransientControl;                                        // 0x022C   (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x022D   (0x0003)  MISSED
	class UEnum*                                       ControlEnum;                                                // 0x0230   (0x0008)  
	FRigControlElementCustomization                    Customization;                                              // 0x0238   (0x0020)  
	TArray<FRigElementKey>                             DrivenControls;                                             // 0x0258   (0x0010)  
	unsigned char                                      UnknownData05_5[0x10];                                      // 0x0268   (0x0010)  MISSED
	bool                                               bGroupWithParentControl;                                    // 0x0278   (0x0001)  
	bool                                               bAnimatable;                                                // 0x0279   (0x0001)  
	bool                                               bShapeEnabled;                                              // 0x027A   (0x0001)  
	unsigned char                                      UnknownData06_6[0x5];                                       // 0x027B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigPreferredEulerAngles
/// Size: 0x0038 (0x000000 - 0x000038)
struct FRigPreferredEulerAngles
{ 
	EEulerRotationOrder                                RotationOrder;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            Current;                                                    // 0x0008   (0x0018)  
	FVector                                            Initial;                                                    // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigControlElement
/// Size: 0x0640 (0x0003F0 - 0x000A30)
struct FRigControlElement : FRigMultiParentElement
{ 
	FRigControlSettings                                Settings;                                                   // 0x03F0   (0x0280)  
	FRigCurrentAndInitialTransform                     Offset;                                                     // 0x0670   (0x01C0)  
	FRigCurrentAndInitialTransform                     Shape;                                                      // 0x0830   (0x01C0)  
	FRigPreferredEulerAngles                           PreferredEulerAngles;                                       // 0x09F0   (0x0038)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0A28   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit : FRigVMStruct
{ 
};

/// Struct /Script/ControlRig.ControlRigExecuteContext
/// Size: 0x0008 (0x000030 - 0x000038)
struct FControlRigExecuteContext : FRigVMExecuteContext
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnitMutable
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnitMutable : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBaseMutable
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FRigUnit_FitChainToCurve_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVector>                                    ItemPositions;                                              // 0x0008   (0x0010)  
	TArray<float>                                      ItemSegments;                                               // 0x0018   (0x0010)  
	TArray<FVector>                                    CurvePositions;                                             // 0x0028   (0x0010)  
	TArray<float>                                      CurveSegments;                                              // 0x0038   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0048   (0x0010)  
	TArray<int32_t>                                    ItemRotationA;                                              // 0x0058   (0x0010)  
	TArray<int32_t>                                    ItemRotationB;                                              // 0x0068   (0x0010)  
	TArray<float>                                      ItemRotationT;                                              // 0x0078   (0x0010)  
	TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigUnit_FitChainToCurve_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       CurveColor;                                                 // 0x0008   (0x0010)  
	FLinearColor                                       SegmentsColor;                                              // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0030   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_Rotation
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigUnit_FitChainToCurve_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0020)  
	float                                              Ratio;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigElementKeyCollection
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigElementKeyCollection
{ 
	TArray<FRigElementKey>                             Keys;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigInstanceData
/// Size: 0x0140 (0x000008 - 0x000148)
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
{ 
	bool                                               bAdditive;                                                  // 0x0008   (0x0001)  
	bool                                               bApplyBoneFilter;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	FInputBlendPose                                    BoneFilter;                                                 // 0x0010   (0x0010)  
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0020   (0x0110)  
	FMovieSceneEvaluationOperand                       Operand;                                                    // 0x0130   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigTransformStackEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
struct FRigTransformStackEntry
{ 
	FRigElementKey                                     Key;                                                        // 0x0000   (0x000C)  
	SDK_UNDEFINED(1,2089) /* TEnumAsByte<ERigTransformStackEntryType> */ __um(EntryType);                          // 0x000C   (0x0001)  
	SDK_UNDEFINED(1,2090) /* TEnumAsByte<ERigTransformType> */ __um(TransformType);                                // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	FTransform                                         OldTransform;                                               // 0x0010   (0x0060)  
	FTransform                                         NewTransform;                                               // 0x0070   (0x0060)  
	bool                                               bAffectChildren;                                            // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	SDK_UNDEFINED(16,2091) /* TArray<FString> */       __um(Callstack);                                            // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigSingleParentElement
/// Size: 0x0010 (0x0002F0 - 0x000300)
struct FRigSingleParentElement : FRigTransformElement
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x02F0   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.RigElementWeight
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigElementWeight
{ 
	float                                              Location;                                                   // 0x0000   (0x0004)  
	float                                              Rotation;                                                   // 0x0004   (0x0004)  
	float                                              Scale;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigElementParentConstraint
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigElementParentConstraint
{ 
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/ControlRig.RigBoneElement
/// Size: 0x0000 (0x000300 - 0x000300)
struct FRigBoneElement : FRigSingleParentElement
{ 
};

/// Struct /Script/ControlRig.RigNullElement
/// Size: 0x0000 (0x0003F0 - 0x0003F0)
struct FRigNullElement : FRigMultiParentElement
{ 
};

/// Struct /Script/ControlRig.RigCurveElement
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
struct FRigCurveElement : FRigBaseElement
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigRigidBodySettings
/// Size: 0x0004 (0x000000 - 0x000004)
struct FRigRigidBodySettings
{ 
	float                                              Mass;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/ControlRig.RigRigidBodyElement
/// Size: 0x0000 (0x000300 - 0x000300)
struct FRigRigidBodyElement : FRigSingleParentElement
{ 
};

/// Struct /Script/ControlRig.RigReferenceElement
/// Size: 0x0010 (0x000300 - 0x000310)
struct FRigReferenceElement : FRigSingleParentElement
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0300   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContentPerElement
/// Size: 0x0200 (0x000000 - 0x000200)
struct FRigHierarchyCopyPasteContentPerElement
{ 
	FRigElementKey                                     Key;                                                        // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	SDK_UNDEFINED(16,2092) /* FString */               __um(Content);                                              // 0x0010   (0x0010)  
	TArray<FRigElementKey>                             Parents;                                                    // 0x0020   (0x0010)  
	TArray<FRigElementWeight>                          ParentWeights;                                              // 0x0030   (0x0010)  
	FRigCurrentAndInitialTransform                     Pose;                                                       // 0x0040   (0x01C0)  
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContent
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigHierarchyCopyPasteContent
{ 
	TArray<FRigHierarchyCopyPasteContentPerElement>    Elements;                                                   // 0x0000   (0x0010)  
	TArray<ERigElementType>                            Types;                                                      // 0x0010   (0x0010)  
	SDK_UNDEFINED(16,2093) /* TArray<FString> */       __um(Contents);                                             // 0x0020   (0x0010)  
	TArray<FTransform>                                 LocalTransforms;                                            // 0x0030   (0x0010)  
	TArray<FTransform>                                 GlobalTransforms;                                           // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AnimBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_AnimBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_DebugBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBaseMutable
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_DebugBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_HighlevelBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathMutableBase
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_MathMutableBase : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_SimBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_SimBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_SimBaseMutable
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_SimBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.StructReference
/// Size: 0x0008 (0x000000 - 0x000008)
struct FStructReference
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.ControlRigIOSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FControlRigIOSettings
{ 
	bool                                               bUpdatePose;                                                // 0x0000   (0x0001)  
	bool                                               bUpdateCurves;                                              // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.ControlRigAnimNodeEventName
/// Size: 0x0008 (0x000000 - 0x000008)
struct FControlRigAnimNodeEventName
{ 
	FName                                              EventName;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/ControlRig.AnimNode_ControlRigBase
/// Size: 0x0218 (0x000058 - 0x000270)
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty
{ 
	FPoseLink                                          Source;                                                     // 0x0058   (0x0010)  
	bool                                               bResetInputPoseToInitial;                                   // 0x0068   (0x0001)  
	bool                                               bTransferInputPose;                                         // 0x0069   (0x0001)  
	bool                                               bTransferInputCurves;                                       // 0x006A   (0x0001)  
	bool                                               bTransferPoseInGlobalSpace;                                 // 0x006B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<FBoneReference>                             InputBonesToTransfer;                                       // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_5[0x1C0];                                     // 0x0080   (0x01C0)  MISSED
	SDK_UNDEFINED(8,2094) /* TWeakObjectPtr<UNodeMappingContainer*> */ __um(NodeMappingContainer);                 // 0x0240   (0x0008)  
	FControlRigIOSettings                              InputSettings;                                              // 0x0248   (0x0002)  
	FControlRigIOSettings                              OutputSettings;                                             // 0x024A   (0x0002)  
	bool                                               bExecute;                                                   // 0x024C   (0x0001)  
	unsigned char                                      UnknownData02_5[0xB];                                       // 0x024D   (0x000B)  MISSED
	TArray<FControlRigAnimNodeEventName>               EventQueue;                                                 // 0x0258   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0268   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig
/// Size: 0x0200 (0x000270 - 0x000470)
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase
{ 
	class UClass*                                      ControlRigClass;                                            // 0x0270   (0x0008)  
	class UControlRig*                                 ControlRig;                                                 // 0x0278   (0x0008)  
	float                                              Alpha;                                                      // 0x0280   (0x0004)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0284   (0x0001)  
	bool                                               bAlphaBoolEnabled : 1;                                      // 0x0285:0 (0x0001)  
	bool                                               bSetRefPoseFromSkeleton : 1;                                // 0x0285:1 (0x0001)  
	unsigned char                                      UnknownData00_4[0x2];                                       // 0x0286   (0x0002)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0288   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0290   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x02D8   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x02E0   (0x0030)  
	SDK_UNDEFINED(80,2095) /* TMap<FName, FName> */    __um(InputMapping);                                         // 0x0310   (0x0050)  
	SDK_UNDEFINED(80,2096) /* TMap<FName, FName> */    __um(OutputMapping);                                        // 0x0360   (0x0050)  
	unsigned char                                      UnknownData01_5[0xB0];                                      // 0x03B0   (0x00B0)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0460   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0464   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig_ExternalSource
/// Size: 0x0008 (0x000270 - 0x000278)
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase
{ 
	SDK_UNDEFINED(8,2097) /* TWeakObjectPtr<UControlRig*> */ __um(ControlRig);                                     // 0x0270   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigAnimInstanceProxy
/// Size: 0x00A0 (0x000880 - 0x000920)
struct FControlRigAnimInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0880   (0x00A0)  MISSED
};

/// Struct /Script/ControlRig.ControlRigComponentMappedComponent
/// Size: 0x0018 (0x000000 - 0x000018)
struct FControlRigComponentMappedComponent
{ 
	class USceneComponent*                             Component;                                                  // 0x0000   (0x0008)  
	FName                                              ElementName;                                                // 0x0008   (0x0008)  
	ERigElementType                                    ElementType;                                                // 0x0010   (0x0001)  
	EControlRigComponentMapDirection                   Direction;                                                  // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/ControlRig.ControlRigComponentMappedBone
/// Size: 0x0010 (0x000000 - 0x000010)
struct FControlRigComponentMappedBone
{ 
	FName                                              Source;                                                     // 0x0000   (0x0008)  
	FName                                              Target;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigComponentMappedCurve
/// Size: 0x0010 (0x000000 - 0x000010)
struct FControlRigComponentMappedCurve
{ 
	FName                                              Source;                                                     // 0x0000   (0x0008)  
	FName                                              Target;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.ControlShapeActorCreationParam
/// Size: 0x01D0 (0x000000 - 0x0001D0)
struct FControlShapeActorCreationParam
{ 
	unsigned char                                      UnknownData00_1[0x1D0];                                     // 0x0000   (0x01D0)  MISSED
};

/// Struct /Script/ControlRig.ControlRigValidationContext
/// Size: 0x0028 (0x000000 - 0x000028)
struct FControlRigValidationContext
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/ControlRig.ControlRigDrawInterface
/// Size: 0x0000 (0x000018 - 0x000018)
struct FControlRigDrawInterface : FControlRigDrawContainer
{ 
};

/// Struct /Script/ControlRig.CRFourPointBezier
/// Size: 0x0060 (0x000000 - 0x000060)
struct FCRFourPointBezier
{ 
	FVector                                            A;                                                          // 0x0000   (0x0018)  
	FVector                                            B;                                                          // 0x0018   (0x0018)  
	FVector                                            C;                                                          // 0x0030   (0x0018)  
	FVector                                            D;                                                          // 0x0048   (0x0018)  
};

/// Struct /Script/ControlRig.CRSimContainer
/// Size: 0x0018 (0x000000 - 0x000018)
struct FCRSimContainer
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              TimeStep;                                                   // 0x0008   (0x0004)  
	float                                              AccumulatedTime;                                            // 0x000C   (0x0004)  
	float                                              TimeLeftForStep;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.CRSimLinearSpring
/// Size: 0x0010 (0x000000 - 0x000010)
struct FCRSimLinearSpring
{ 
	int32_t                                            SubjectA;                                                   // 0x0000   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0004   (0x0004)  
	float                                              Coefficient;                                                // 0x0008   (0x0004)  
	float                                              Equilibrium;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.CRSimPoint
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCRSimPoint
{ 
	float                                              Mass;                                                       // 0x0000   (0x0004)  
	float                                              Size;                                                       // 0x0004   (0x0004)  
	float                                              LinearDamping;                                              // 0x0008   (0x0004)  
	float                                              InheritMotion;                                              // 0x000C   (0x0004)  
	FVector                                            Position;                                                   // 0x0010   (0x0018)  
	FVector                                            LinearVelocity;                                             // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRig.CRSimPointConstraint
/// Size: 0x0040 (0x000000 - 0x000040)
struct FCRSimPointConstraint
{ 
	ECRSimConstraintType                               Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            SubjectA;                                                   // 0x0004   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            DataA;                                                      // 0x0010   (0x0018)  
	FVector                                            DataB;                                                      // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRig.CRSimPointForce
/// Size: 0x0028 (0x000000 - 0x000028)
struct FCRSimPointForce
{ 
	ECRSimPointForceType                               ForceType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            Vector;                                                     // 0x0008   (0x0018)  
	float                                              Coefficient;                                                // 0x0020   (0x0004)  
	bool                                               bNormalize;                                                 // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.CRSimSoftCollision
/// Size: 0x0080 (0x000000 - 0x000080)
struct FCRSimSoftCollision
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	ECRSimSoftCollisionType                            ShapeType;                                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              MinimumDistance;                                            // 0x0064   (0x0004)  
	float                                              MaximumDistance;                                            // 0x0068   (0x0004)  
	EControlRigAnimEasingType                          FalloffType;                                                // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              Coefficient;                                                // 0x0070   (0x0004)  
	bool                                               bInverted;                                                  // 0x0074   (0x0001)  
	unsigned char                                      UnknownData02_6[0xB];                                       // 0x0075   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.CRSimPointContainer
/// Size: 0x0060 (0x000018 - 0x000078)
struct FCRSimPointContainer : FCRSimContainer
{ 
	TArray<FCRSimPoint>                                Points;                                                     // 0x0018   (0x0010)  
	TArray<FCRSimLinearSpring>                         Springs;                                                    // 0x0028   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0038   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0048   (0x0010)  
	TArray<FCRSimPointConstraint>                      Constraints;                                                // 0x0058   (0x0010)  
	TArray<FCRSimPoint>                                PreviousStep;                                               // 0x0068   (0x0010)  
};

/// Struct /Script/ControlRig.ConstraintNodeData
/// Size: 0x0140 (0x000000 - 0x000140)
struct FConstraintNodeData
{ 
	FTransform                                         RelativeParent;                                             // 0x0000   (0x0060)  
	FConstraintOffset                                  ConstraintOffset;                                           // 0x0060   (0x00C0)  
	FName                                              LinkedNode;                                                 // 0x0120   (0x0008)  
	TArray<FTransformConstraint>                       Constraints;                                                // 0x0128   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.AnimationHierarchy
/// Size: 0x0010 (0x000078 - 0x000088)
struct FAnimationHierarchy : FNodeHierarchyWithUserData
{ 
	TArray<FConstraintNodeData>                        UserData;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.RigElement
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRigElement
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            Index;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigBone
/// Size: 0x0158 (0x000018 - 0x000170)
struct FRigBone : FRigElement
{ 
	FName                                              ParentName;                                                 // 0x0018   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0024   (0x000C)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0030   (0x0060)  
	FTransform                                         GlobalTransform;                                            // 0x0090   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x00F0   (0x0060)  
	TArray<int32_t>                                    Dependents;                                                 // 0x0150   (0x0010)  
	ERigBoneType                                       Type;                                                       // 0x0160   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0161   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigBoneHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigBoneHierarchy
{ 
	TArray<FRigBone>                                   Bones;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigControl
/// Size: 0x04F8 (0x000018 - 0x000510)
struct FRigControl : FRigElement
{ 
	ERigControlType                                    ControlType;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              DisplayName;                                                // 0x001C   (0x0008)  
	FName                                              ParentName;                                                 // 0x0024   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x002C   (0x0004)  
	FName                                              SpaceName;                                                  // 0x0030   (0x0008)  
	int32_t                                            SpaceIndex;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x0040   (0x0060)  
	FRigControlValue                                   InitialValue;                                               // 0x00A0   (0x00F0)  
	FRigControlValue                                   Value;                                                      // 0x0190   (0x00F0)  
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0280   (0x0001)  
	bool                                               bIsCurve;                                                   // 0x0281   (0x0001)  
	bool                                               bAnimatable;                                                // 0x0282   (0x0001)  
	bool                                               bLimitTranslation;                                          // 0x0283   (0x0001)  
	bool                                               bLimitRotation;                                             // 0x0284   (0x0001)  
	bool                                               bLimitScale;                                                // 0x0285   (0x0001)  
	bool                                               bDrawLimits;                                                // 0x0286   (0x0001)  
	unsigned char                                      UnknownData02_5[0x9];                                       // 0x0287   (0x0009)  MISSED
	FRigControlValue                                   MinimumValue;                                               // 0x0290   (0x00F0)  
	FRigControlValue                                   MaximumValue;                                               // 0x0380   (0x00F0)  
	bool                                               bGizmoEnabled;                                              // 0x0470   (0x0001)  
	bool                                               bGizmoVisible;                                              // 0x0471   (0x0001)  
	unsigned char                                      UnknownData03_5[0x2];                                       // 0x0472   (0x0002)  MISSED
	FName                                              GizmoName;                                                  // 0x0474   (0x0008)  
	unsigned char                                      UnknownData04_5[0x4];                                       // 0x047C   (0x0004)  MISSED
	FTransform                                         GizmoTransform;                                             // 0x0480   (0x0060)  
	FLinearColor                                       GizmoColor;                                                 // 0x04E0   (0x0010)  
	TArray<int32_t>                                    Dependents;                                                 // 0x04F0   (0x0010)  
	bool                                               bIsTransientControl;                                        // 0x0500   (0x0001)  
	unsigned char                                      UnknownData05_5[0x7];                                       // 0x0501   (0x0007)  MISSED
	class UEnum*                                       ControlEnum;                                                // 0x0508   (0x0008)  
};

/// Struct /Script/ControlRig.RigControlHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigControlHierarchy
{ 
	TArray<FRigControl>                                Controls;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigCurve
/// Size: 0x0008 (0x000018 - 0x000020)
struct FRigCurve : FRigElement
{ 
	float                                              Value;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigCurveContainer
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigCurveContainer
{ 
	TArray<FRigCurve>                                  Curves;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigSpace
/// Size: 0x00D8 (0x000018 - 0x0000F0)
struct FRigSpace : FRigElement
{ 
	ERigSpaceType                                      SpaceType;                                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              ParentName;                                                 // 0x001C   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x0024   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0030   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x0090   (0x0060)  
};

/// Struct /Script/ControlRig.RigSpaceHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigSpaceHierarchy
{ 
	TArray<FRigSpace>                                  Spaces;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigHierarchyContainer
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigHierarchyContainer
{ 
	FRigBoneHierarchy                                  BoneHierarchy;                                              // 0x0000   (0x0010)  
	FRigSpaceHierarchy                                 SpaceHierarchy;                                             // 0x0010   (0x0010)  
	FRigControlHierarchy                               ControlHierarchy;                                           // 0x0020   (0x0010)  
	FRigCurveContainer                                 CurveContainer;                                             // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigHierarchyRef
/// Size: 0x0001 (0x000000 - 0x000001)
struct FRigHierarchyRef
{ 
	unsigned char                                      UnknownData00_1[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/ControlRig.RigControlModifiedContext
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRigControlModifiedContext
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/ControlRig.RigEventContext
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigEventContext
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/ControlRig.RigMirrorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigMirrorSettings
{ 
	SDK_UNDEFINED(1,2098) /* TEnumAsByte<EAxis> */     __um(MirrorAxis);                                           // 0x0000   (0x0001)  
	SDK_UNDEFINED(1,2099) /* TEnumAsByte<EAxis> */     __um(AxisToFlip);                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0002   (0x0006)  MISSED
	SDK_UNDEFINED(16,2100) /* FString */               __um(SearchString);                                         // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2101) /* FString */               __um(ReplaceString);                                        // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigBaseMetadata
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigBaseMetadata
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
	FName                                              Name;                                                       // 0x0010   (0x0008)  
	ERigMetadataType                                   Type;                                                       // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0019   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigBoolMetadata
/// Size: 0x0008 (0x000028 - 0x000030)
struct FRigBoolMetadata : FRigBaseMetadata
{ 
	bool                                               Value;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigBoolArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
struct FRigBoolArrayMetadata : FRigBaseMetadata
{ 
	TArray<bool>                                       Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigFloatMetadata
/// Size: 0x0008 (0x000028 - 0x000030)
struct FRigFloatMetadata : FRigBaseMetadata
{ 
	float                                              Value;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigFloatArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
struct FRigFloatArrayMetadata : FRigBaseMetadata
{ 
	TArray<float>                                      Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigInt32Metadata
/// Size: 0x0008 (0x000028 - 0x000030)
struct FRigInt32Metadata : FRigBaseMetadata
{ 
	int32_t                                            Value;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigInt32ArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
struct FRigInt32ArrayMetadata : FRigBaseMetadata
{ 
	TArray<int32_t>                                    Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigNameMetadata
/// Size: 0x0008 (0x000028 - 0x000030)
struct FRigNameMetadata : FRigBaseMetadata
{ 
	FName                                              Value;                                                      // 0x0028   (0x0008)  
};

/// Struct /Script/ControlRig.RigNameArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
struct FRigNameArrayMetadata : FRigBaseMetadata
{ 
	TArray<FName>                                      Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigVectorMetadata
/// Size: 0x0018 (0x000028 - 0x000040)
struct FRigVectorMetadata : FRigBaseMetadata
{ 
	FVector                                            Value;                                                      // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRig.RigVectorArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
struct FRigVectorArrayMetadata : FRigBaseMetadata
{ 
	TArray<FVector>                                    Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigRotatorMetadata
/// Size: 0x0018 (0x000028 - 0x000040)
struct FRigRotatorMetadata : FRigBaseMetadata
{ 
	FRotator                                           Value;                                                      // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRig.RigRotatorArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
struct FRigRotatorArrayMetadata : FRigBaseMetadata
{ 
	TArray<FRotator>                                   Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigQuatMetadata
/// Size: 0x0028 (0x000028 - 0x000050)
struct FRigQuatMetadata : FRigBaseMetadata
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigQuatArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
struct FRigQuatArrayMetadata : FRigBaseMetadata
{ 
	TArray<FQuat>                                      Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigTransformMetadata
/// Size: 0x0068 (0x000028 - 0x000090)
struct FRigTransformMetadata : FRigBaseMetadata
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0030   (0x0060)  
};

/// Struct /Script/ControlRig.RigTransformArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
struct FRigTransformArrayMetadata : FRigBaseMetadata
{ 
	TArray<FTransform>                                 Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigLinearColorMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
struct FRigLinearColorMetadata : FRigBaseMetadata
{ 
	FLinearColor                                       Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigLinearColorArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
struct FRigLinearColorArrayMetadata : FRigBaseMetadata
{ 
	TArray<FLinearColor>                               Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigElementKeyMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
struct FRigElementKeyMetadata : FRigBaseMetadata
{ 
	FRigElementKey                                     Value;                                                      // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigElementKeyArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
struct FRigElementKeyArrayMetadata : FRigBaseMetadata
{ 
	TArray<FRigElementKey>                             Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigInfluenceEntryModifier
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigInfluenceEntryModifier
{ 
	TArray<FRigElementKey>                             AffectedList;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.AnimNode_ControlRigInputPose
/// Size: 0x0020 (0x000010 - 0x000030)
struct FAnimNode_ControlRigInputPose : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.ControlRigLayerInstanceProxy
/// Size: 0x00A0 (0x000880 - 0x000920)
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0880   (0x00A0)  MISSED
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReference
/// Size: 0x0008 (0x000000 - 0x000008)
struct FControlRigSequenceObjectReference
{ 
	class UClass*                                      ControlRigClass;                                            // 0x0000   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferences
/// Size: 0x0010 (0x000000 - 0x000010)
struct FControlRigSequenceObjectReferences
{ 
	TArray<FControlRigSequenceObjectReference>         Array;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferenceMap
/// Size: 0x0020 (0x000000 - 0x000020)
struct FControlRigSequenceObjectReferenceMap
{ 
	TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)  
	TArray<FControlRigSequenceObjectReferences>        References;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.ChannelMapInfo
/// Size: 0x0040 (0x000000 - 0x000040)
struct FChannelMapInfo
{ 
	int32_t                                            ControlIndex;                                               // 0x0000   (0x0004)  
	int32_t                                            TotalChannelIndex;                                          // 0x0004   (0x0004)  
	int32_t                                            ChannelIndex;                                               // 0x0008   (0x0004)  
	int32_t                                            ParentControlIndex;                                         // 0x000C   (0x0004)  
	FName                                              ChannelTypeName;                                            // 0x0010   (0x0008)  
	bool                                               bDoesHaveSpace;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            SpaceChannelIndex;                                          // 0x001C   (0x0004)  
	int32_t                                            MaskIndex;                                                  // 0x0020   (0x0004)  
	int32_t                                            CategoryIndex;                                              // 0x0024   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<uint32_t>                                   ConstraintsIndex;                                           // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigParameterTemplate
/// Size: 0x0040 (0x000080 - 0x0000C0)
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
{ 
	TArray<FEnumParameterNameAndCurve>                 Enums;                                                      // 0x0080   (0x0010)  
	TArray<FIntegerParameterNameAndCurve>              Integers;                                                   // 0x0090   (0x0010)  
	TArray<FSpaceControlNameAndChannel>                Spaces;                                                     // 0x00A0   (0x0010)  
	TArray<FConstraintAndActiveChannel>                Constraints;                                                // 0x00B0   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigSettingsPerPinBool
/// Size: 0x0050 (0x000000 - 0x000050)
struct FControlRigSettingsPerPinBool
{ 
	SDK_UNDEFINED(80,2102) /* TMap<FString, bool> */   __um(Values);                                               // 0x0000   (0x0050)  
};

/// Struct /Script/ControlRig.RigDispatchFactory
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigDispatchFactory : FRigVMDispatchFactory
{ 
};

/// Struct /Script/ControlRig.RigDispatch_AnimAttributeBase
/// Size: 0x0038 (0x000018 - 0x000050)
struct FRigDispatch_AnimAttributeBase : FRigDispatchFactory
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0018   (0x0038)  MISSED
};

/// Struct /Script/ControlRig.RigDispatch_GetAnimAttribute
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigDispatch_GetAnimAttribute : FRigDispatch_AnimAttributeBase
{ 
};

/// Struct /Script/ControlRig.RigDispatch_SetAnimAttribute
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigDispatch_SetAnimAttribute : FRigDispatch_AnimAttributeBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_AnimEasingType
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_AnimEasingType : FRigUnit_AnimBase
{ 
	EControlRigAnimEasingType                          Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimEasing
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_AnimEasing : FRigUnit_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	EControlRigAnimEasingType                          Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SourceMinimum;                                              // 0x0010   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0014   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0018   (0x0004)  
	float                                              TargetMaximum;                                              // 0x001C   (0x0004)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimEvalRichCurve
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0010   (0x0088)  
	float                                              SourceMinimum;                                              // 0x0098   (0x0004)  
	float                                              SourceMaximum;                                              // 0x009C   (0x0004)  
	float                                              TargetMinimum;                                              // 0x00A0   (0x0004)  
	float                                              TargetMaximum;                                              // 0x00A4   (0x0004)  
	float                                              Result;                                                     // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AnimRichCurve
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase
{ 
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0008   (0x0088)  
};

/// Struct /Script/ControlRig.RigUnit_GetDeltaTime
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase
{ 
	float                                              Result;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetWorldTime
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_GetWorldTime : FRigUnit_AnimBase
{ 
	float                                              Year;                                                       // 0x0008   (0x0004)  
	float                                              Month;                                                      // 0x000C   (0x0004)  
	float                                              Day;                                                        // 0x0010   (0x0004)  
	float                                              WeekDay;                                                    // 0x0014   (0x0004)  
	float                                              Hours;                                                      // 0x0018   (0x0004)  
	float                                              Minutes;                                                    // 0x001C   (0x0004)  
	float                                              Seconds;                                                    // 0x0020   (0x0004)  
	float                                              OverallSeconds;                                             // 0x0024   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_FramesToSeconds
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_FramesToSeconds : FRigUnit_AnimBase
{ 
	float                                              Frames;                                                     // 0x0008   (0x0004)  
	float                                              Seconds;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SecondsToFrames
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_SecondsToFrames : FRigUnit_AnimBase
{ 
	float                                              Seconds;                                                    // 0x0008   (0x0004)  
	float                                              Frames;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceWorld
/// Size: 0x0070 (0x000008 - 0x000078)
struct FRigUnit_SphereTraceWorld : FRigUnit
{ 
	FVector                                            Start;                                                      // 0x0008   (0x0018)  
	FVector                                            End;                                                        // 0x0020   (0x0018)  
	SDK_UNDEFINED(1,2103) /* TEnumAsByte<ECollisionChannel> */ __um(Channel);                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x003C   (0x0004)  
	bool                                               bHit;                                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FVector                                            HitLocation;                                                // 0x0048   (0x0018)  
	FVector                                            HitNormal;                                                  // 0x0060   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByTraceChannel
/// Size: 0x0070 (0x000008 - 0x000078)
struct FRigUnit_SphereTraceByTraceChannel : FRigUnit
{ 
	FVector                                            Start;                                                      // 0x0008   (0x0018)  
	FVector                                            End;                                                        // 0x0020   (0x0018)  
	SDK_UNDEFINED(1,2104) /* TEnumAsByte<ETraceTypeQuery> */ __um(TraceChannel);                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x003C   (0x0004)  
	bool                                               bHit;                                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FVector                                            HitLocation;                                                // 0x0048   (0x0018)  
	FVector                                            HitNormal;                                                  // 0x0060   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByObjectTypes
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_SphereTraceByObjectTypes : FRigUnit
{ 
	FVector                                            Start;                                                      // 0x0008   (0x0018)  
	FVector                                            End;                                                        // 0x0020   (0x0018)  
	SDK_UNDEFINED(16,2105) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(ObjectTypes);                          // 0x0038   (0x0010)  
	float                                              Radius;                                                     // 0x0048   (0x0004)  
	bool                                               bHit;                                                       // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FVector                                            HitLocation;                                                // 0x0050   (0x0018)  
	FVector                                            HitNormal;                                                  // 0x0068   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_Control
/// Size: 0x0178 (0x000008 - 0x000180)
struct FRigUnit_Control : FRigUnit
{ 
	FEulerTransform                                    Transform;                                                  // 0x0008   (0x0048)  
	FTransform                                         Base;                                                       // 0x0050   (0x0060)  
	FTransform                                         InitTransform;                                              // 0x00B0   (0x0060)  
	FTransform                                         Result;                                                     // 0x0110   (0x0060)  
	FTransformFilter                                   Filter;                                                     // 0x0170   (0x0009)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0179   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Control_StaticMesh
/// Size: 0x0060 (0x000180 - 0x0001E0)
struct FRigUnit_Control_StaticMesh : FRigUnit_Control
{ 
	FTransform                                         MeshTransform;                                              // 0x0180   (0x0060)  
};

/// Struct /Script/ControlRig.RigDispatch_CoreBase
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigDispatch_CoreBase : FRigDispatchFactory
{ 
};

/// Struct /Script/ControlRig.RigDispatch_CoreEquals
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigDispatch_CoreEquals : FRigDispatch_CoreBase
{ 
};

/// Struct /Script/ControlRig.RigDispatch_CoreNotEquals
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigDispatch_CoreNotEquals : FRigDispatch_CoreEquals
{ 
};

/// Struct /Script/ControlRig.RigUnit_NameBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_NameBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_NameConcat
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_NameConcat : FRigUnit_NameBase
{ 
	FName                                              A;                                                          // 0x0008   (0x0008)  
	FName                                              B;                                                          // 0x0010   (0x0008)  
	FName                                              Result;                                                     // 0x0018   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_NameTruncate
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_NameTruncate : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	bool                                               FromEnd;                                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FName                                              Remainder;                                                  // 0x0018   (0x0008)  
	FName                                              Chopped;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_NameReplace
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_NameReplace : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Old;                                                        // 0x0010   (0x0008)  
	FName                                              New;                                                        // 0x0018   (0x0008)  
	FName                                              Result;                                                     // 0x0020   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_EndsWith
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_EndsWith : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Ending;                                                     // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_StartsWith
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_StartsWith : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Start;                                                      // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Contains
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_Contains : FRigUnit_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Search;                                                     // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigDispatch_Print
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigDispatch_Print : FRigDispatchFactory
{ 
};

/// Struct /Script/ControlRig.RigUnit_StringBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_StringBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_StringConcat
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_StringConcat : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2106) /* FString */               __um(A);                                                    // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2107) /* FString */               __um(B);                                                    // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2108) /* FString */               __um(Result);                                               // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_StringTruncate
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_StringTruncate : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2109) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	bool                                               FromEnd;                                                    // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	SDK_UNDEFINED(16,2110) /* FString */               __um(Remainder);                                            // 0x0020   (0x0010)  
	SDK_UNDEFINED(16,2111) /* FString */               __um(Chopped);                                              // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_StringReplace
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_StringReplace : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2112) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2113) /* FString */               __um(Old);                                                  // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2114) /* FString */               __um(New);                                                  // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,2115) /* FString */               __um(Result);                                               // 0x0038   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_StringEndsWith
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_StringEndsWith : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2116) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2117) /* FString */               __um(Ending);                                               // 0x0018   (0x0010)  
	bool                                               Result;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_StringStartsWith
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_StringStartsWith : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2118) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2119) /* FString */               __um(Start);                                                // 0x0018   (0x0010)  
	bool                                               Result;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_StringContains
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_StringContains : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2120) /* FString */               __um(Name);                                                 // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2121) /* FString */               __um(Search);                                               // 0x0018   (0x0010)  
	bool                                               Result;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_StringLength
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_StringLength : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2122) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	int32_t                                            Length;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_StringTrimWhitespace
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_StringTrimWhitespace : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2123) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2124) /* FString */               __um(Result);                                               // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_StringToUppercase
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_StringToUppercase : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2125) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2126) /* FString */               __um(Result);                                               // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_StringToLowercase
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_StringToLowercase : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2127) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2128) /* FString */               __um(Result);                                               // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_StringReverse
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_StringReverse : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2129) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2130) /* FString */               __um(Reverse);                                              // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_StringLeft
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_StringLeft : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2131) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,2132) /* FString */               __um(Result);                                               // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_StringRight
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_StringRight : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2133) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	SDK_UNDEFINED(16,2134) /* FString */               __um(Result);                                               // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_StringMiddle
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_StringMiddle : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2135) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	int32_t                                            Start;                                                      // 0x0018   (0x0004)  
	int32_t                                            Count;                                                      // 0x001C   (0x0004)  
	SDK_UNDEFINED(16,2136) /* FString */               __um(Result);                                               // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_StringFind
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_StringFind : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2137) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2138) /* FString */               __um(Search);                                               // 0x0018   (0x0010)  
	bool                                               Found;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            Index;                                                      // 0x002C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_StringSplit
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_StringSplit : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2139) /* FString */               __um(Value);                                                // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2140) /* FString */               __um(Separator);                                            // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2141) /* TArray<FString> */       __um(Result);                                               // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_StringJoin
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_StringJoin : FRigUnit_StringBase
{ 
	SDK_UNDEFINED(16,2142) /* TArray<FString> */       __um(Values);                                               // 0x0008   (0x0010)  
	SDK_UNDEFINED(16,2143) /* FString */               __um(Separator);                                            // 0x0018   (0x0010)  
	SDK_UNDEFINED(16,2144) /* FString */               __um(Result);                                               // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_StringPadInteger
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_StringPadInteger : FRigUnit_StringBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Digits;                                                     // 0x000C   (0x0004)  
	SDK_UNDEFINED(16,2145) /* FString */               __um(Result);                                               // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigDispatch_ToString
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigDispatch_ToString : FRigDispatchFactory
{ 
};

/// Struct /Script/ControlRig.RigDispatch_FromString
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigDispatch_FromString : FRigDispatchFactory
{ 
};

/// Struct /Script/ControlRig.RigUnit_DebugBezier
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0040   (0x0060)  
	float                                              MinimumU;                                                   // 0x00A0   (0x0004)  
	float                                              MaximumU;                                                   // 0x00A4   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x00A8   (0x0010)  
	float                                              Thickness;                                                  // 0x00B8   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00BC   (0x0004)  
	FName                                              Space;                                                      // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0130   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0131   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugBezierItemSpace
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0040   (0x0060)  
	float                                              MinimumU;                                                   // 0x00A0   (0x0004)  
	float                                              MaximumU;                                                   // 0x00A4   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x00A8   (0x0010)  
	float                                              Thickness;                                                  // 0x00B8   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00BC   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00C0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0130   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0131   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugHierarchy
/// Size: 0x0090 (0x000040 - 0x0000D0)
struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable
{ 
	float                                              Scale;                                                      // 0x0040   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0044   (0x0010)  
	float                                              Thickness;                                                  // 0x0054   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0060   (0x0060)  
	bool                                               bEnabled;                                                   // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00C1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPose
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_DebugPose : FRigUnit_DebugBaseMutable
{ 
	FRigPose                                           Pose;                                                       // 0x0040   (0x0070)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x00B4   (0x0010)  
	float                                              Thickness;                                                  // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0130   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0131   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLine
/// Size: 0x00C0 (0x000040 - 0x000100)
struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x0040   (0x0018)  
	FVector                                            B;                                                          // 0x0058   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0070   (0x0010)  
	float                                              Thickness;                                                  // 0x0080   (0x0004)  
	FName                                              Space;                                                      // 0x0084   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0090   (0x0060)  
	bool                                               bEnabled;                                                   // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineItemSpace
/// Size: 0x00C0 (0x000040 - 0x000100)
struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x0040   (0x0018)  
	FVector                                            B;                                                          // 0x0058   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0070   (0x0010)  
	float                                              Thickness;                                                  // 0x0080   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x0084   (0x000C)  
	FTransform                                         WorldOffset;                                                // 0x0090   (0x0060)  
	bool                                               bEnabled;                                                   // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStrip
/// Size: 0x00A0 (0x000040 - 0x0000E0)
struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x0040   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0050   (0x0010)  
	float                                              Thickness;                                                  // 0x0060   (0x0004)  
	FName                                              Space;                                                      // 0x0064   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0070   (0x0060)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugLineStripItemSpace
/// Size: 0x00A0 (0x000040 - 0x0000E0)
struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x0040   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0050   (0x0010)  
	float                                              Thickness;                                                  // 0x0060   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x0064   (0x000C)  
	FTransform                                         WorldOffset;                                                // 0x0070   (0x0060)  
	bool                                               bEnabled;                                                   // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00D1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPoint
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigUnit_DebugPoint : FRigUnit_DebugBase
{ 
	FVector                                            Vector;                                                     // 0x0008   (0x0018)  
	ERigUnitDebugPointMode                             Mode;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0024   (0x0010)  
	float                                              Scale;                                                      // 0x0034   (0x0004)  
	float                                              Thickness;                                                  // 0x0038   (0x0004)  
	FName                                              Space;                                                      // 0x003C   (0x0008)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0044   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0050   (0x0060)  
	bool                                               bEnabled;                                                   // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x00B1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPointMutable
/// Size: 0x00B0 (0x000040 - 0x0000F0)
struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable
{ 
	FVector                                            Vector;                                                     // 0x0040   (0x0018)  
	ERigUnitDebugPointMode                             Mode;                                                       // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x005C   (0x0010)  
	float                                              Scale;                                                      // 0x006C   (0x0004)  
	float                                              Thickness;                                                  // 0x0070   (0x0004)  
	FName                                              Space;                                                      // 0x0074   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0080   (0x0060)  
	bool                                               bEnabled;                                                   // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x00E1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangle
/// Size: 0x00F0 (0x000040 - 0x000130)
struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	FName                                              Space;                                                      // 0x00B8   (0x0008)  
	FTransform                                         WorldOffset;                                                // 0x00C0   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0121   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugRectangleItemSpace
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00B8   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0130   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0131   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugArc
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Radius;                                                     // 0x00B0   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x00B4   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x00B8   (0x0004)  
	float                                              Thickness;                                                  // 0x00BC   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00C0   (0x0004)  
	FName                                              Space;                                                      // 0x00C4   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0130   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0131   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugArcItemSpace
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x00A0   (0x0010)  
	float                                              Radius;                                                     // 0x00B0   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x00B4   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x00B8   (0x0004)  
	float                                              Thickness;                                                  // 0x00BC   (0x0004)  
	int32_t                                            Detail;                                                     // 0x00C0   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00C4   (0x000C)  
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0130   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0131   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransform
/// Size: 0x0108 (0x000008 - 0x000110)
struct FRigUnit_DebugTransform : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0074   (0x0010)  
	float                                              Thickness;                                                  // 0x0084   (0x0004)  
	float                                              Scale;                                                      // 0x0088   (0x0004)  
	FName                                              Space;                                                      // 0x008C   (0x0008)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x0094   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData03_6[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutable
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x00A4   (0x0010)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	float                                              Scale;                                                      // 0x00B8   (0x0004)  
	FName                                              Space;                                                      // 0x00BC   (0x0008)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0130   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0131   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformMutableItemSpace
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x00A4   (0x0010)  
	float                                              Thickness;                                                  // 0x00B4   (0x0004)  
	float                                              Scale;                                                      // 0x00B8   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x00BC   (0x000C)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00D0   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0130   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0131   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_DebugTransformArrayMutable_WorkData
{ 
	TArray<FTransform>                                 DrawTransforms;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutable
/// Size: 0x00C0 (0x000040 - 0x000100)
struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0040   (0x0010)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0054   (0x0010)  
	float                                              Thickness;                                                  // 0x0064   (0x0004)  
	float                                              Scale;                                                      // 0x0068   (0x0004)  
	FName                                              Space;                                                      // 0x006C   (0x0008)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0080   (0x0060)  
	bool                                               bEnabled;                                                   // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00E1   (0x0007)  MISSED
	FRigUnit_DebugTransformArrayMutable_WorkData       WorkData;                                                   // 0x00E8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugTransformArrayMutableItemSpace
/// Size: 0x00C0 (0x000040 - 0x000100)
struct FRigUnit_DebugTransformArrayMutableItemSpace : FRigUnit_DebugBaseMutable
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0040   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0050   (0x0010)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0064   (0x0010)  
	float                                              Thickness;                                                  // 0x0074   (0x0004)  
	float                                              Scale;                                                      // 0x0078   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x007C   (0x000C)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0088   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0090   (0x0060)  
	bool                                               bEnabled;                                                   // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x00F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_StartProfilingTimer
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_StartProfilingTimer : FRigUnit_DebugBaseMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_EndProfilingTimer
/// Size: 0x0020 (0x000040 - 0x000060)
struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable
{ 
	int32_t                                            NumberOfMeasurements;                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	SDK_UNDEFINED(16,2146) /* FString */               __um(Prefix);                                               // 0x0048   (0x0010)  
	float                                              AccumulatedTime;                                            // 0x0058   (0x0004)  
	int32_t                                            MeasurementsLeft;                                           // 0x005C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVector
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	ERigUnitVisualDebugPointMode                       Mode;                                                       // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0022   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0024   (0x0010)  
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x003C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugVectorItemSpace
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	ERigUnitVisualDebugPointMode                       Mode;                                                       // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0022   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0024   (0x0010)  
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x003C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuat
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x003C   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugQuatItemSpace
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x003C   (0x000C)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransform
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0074   (0x0004)  
	float                                              Scale;                                                      // 0x0078   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x007C   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VisualDebugTransformItemSpace
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0074   (0x0004)  
	float                                              Scale;                                                      // 0x0078   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x007C   (0x000C)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigUnit_ConvertTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Input;                                                      // 0x0010   (0x0060)  
	FEulerTransform                                    Result;                                                     // 0x0070   (0x0048)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertEulerTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_ConvertEulerTransform : FRigUnit
{ 
	FEulerTransform                                    Input;                                                      // 0x0008   (0x0048)  
	FTransform                                         Result;                                                     // 0x0050   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotation
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_ConvertRotation : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x0018)  
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorRotation
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation
{ 
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternion
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_ConvertQuaternion : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	FRotator                                           Result;                                                     // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToRotation
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_ConvertVectorToRotation : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x0018)  
	FRotator                                           Result;                                                     // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToQuaternion
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x0018)  
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotationToVector
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_ConvertRotationToVector : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x0018)  
	FVector                                            Result;                                                     // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternionToVector
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_ConvertQuaternionToVector : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	FVector                                            Result;                                                     // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ToSwingAndTwist
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_ToSwingAndTwist : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	FVector                                            TwistAxis;                                                  // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FQuat                                              Swing;                                                      // 0x0050   (0x0020)  
	FQuat                                              Twist;                                                      // 0x0070   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryFloatOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_BinaryFloatOp : FRigUnit
{ 
	float                                              Argument0;                                                  // 0x0008   (0x0004)  
	float                                              Argument1;                                                  // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Multiply_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Divide_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Clamp_Float
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_Clamp_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Min;                                                        // 0x000C   (0x0004)  
	float                                              Max;                                                        // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MapRange_Float
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MapRange_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              MinIn;                                                      // 0x000C   (0x0004)  
	float                                              MaxIn;                                                      // 0x0010   (0x0004)  
	float                                              MinOut;                                                     // 0x0014   (0x0004)  
	float                                              MaxOut;                                                     // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryQuaternionOp
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_BinaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument0;                                                  // 0x0010   (0x0020)  
	FQuat                                              Argument1;                                                  // 0x0030   (0x0020)  
	FQuat                                              Result;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MultiplyQuaternion
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_UnaryQuaternionOp
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_UnaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0020)  
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_InverseQuaterion
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0020)  
	FVector                                            Axis;                                                       // 0x0030   (0x0018)  
	float                                              Angle;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	float                                              Angle;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0024   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAngle
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_QuaternionToAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	FQuat                                              Argument;                                                   // 0x0020   (0x0020)  
	float                                              Angle;                                                      // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BinaryTransformOp
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigUnit_BinaryTransformOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Argument0;                                                  // 0x0010   (0x0060)  
	FTransform                                         Argument1;                                                  // 0x0070   (0x0060)  
	FTransform                                         Result;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MultiplyTransform
/// Size: 0x0000 (0x000130 - 0x000130)
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransform
/// Size: 0x0000 (0x000130 - 0x000130)
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_BinaryVectorOp
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_BinaryVectorOp : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x0018)  
	FVector                                            Argument1;                                                  // 0x0020   (0x0018)  
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_Multiply_VectorVector
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_VectorVector
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_VectorVector
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Divide_VectorVector
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Distance_VectorVector
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_Distance_VectorVector : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x0018)  
	FVector                                            Argument1;                                                  // 0x0020   (0x0018)  
	float                                              Result;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.AimTarget
/// Size: 0x0090 (0x000000 - 0x000090)
struct FAimTarget
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0004   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FVector                                            AlignVector;                                                // 0x0070   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_AimConstraint_WorkData
{ 
	TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint
/// Size: 0x0070 (0x000040 - 0x0000B0)
struct FRigUnit_AimConstraint : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0040   (0x0008)  
	EAimMode                                           AimMode;                                                    // 0x0048   (0x0001)  
	EAimMode                                           UpMode;                                                     // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x004A   (0x0006)  MISSED
	FVector                                            AimVector;                                                  // 0x0050   (0x0018)  
	FVector                                            UpVector;                                                   // 0x0068   (0x0018)  
	TArray<FAimTarget>                                 AimTargets;                                                 // 0x0080   (0x0010)  
	TArray<FAimTarget>                                 UpTargets;                                                  // 0x0090   (0x0010)  
	FRigUnit_AimConstraint_WorkData                    WorkData;                                                   // 0x00A0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ApplyFK
/// Size: 0x00F0 (0x000040 - 0x000130)
struct FRigUnit_ApplyFK : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0050   (0x0060)  
	FTransformFilter                                   Filter;                                                     // 0x00B0   (0x0009)  
	EApplyTransformMode                                ApplyTransformMode;                                         // 0x00B9   (0x0001)  
	ETransformSpaceMode                                ApplyTransformSpace;                                        // 0x00BA   (0x0001)  
	unsigned char                                      UnknownData01_5[0x5];                                       // 0x00BB   (0x0005)  MISSED
	FTransform                                         BaseTransform;                                              // 0x00C0   (0x0060)  
	FName                                              BaseJoint;                                                  // 0x0120   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0128   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.BlendTarget
/// Size: 0x0070 (0x000000 - 0x000070)
struct FBlendTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	float                                              Weight;                                                     // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BlendTransform
/// Size: 0x00D8 (0x000008 - 0x0000E0)
struct FRigUnit_BlendTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Source;                                                     // 0x0010   (0x0060)  
	TArray<FBlendTarget>                               Targets;                                                    // 0x0070   (0x0010)  
	FTransform                                         Result;                                                     // 0x0080   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_GetJointTransform
/// Size: 0x00E0 (0x000040 - 0x000120)
struct FRigUnit_GetJointTransform : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0040   (0x0008)  
	ETransformGetterType                               Type;                                                       // 0x0048   (0x0001)  
	ETransformSpaceMode                                TransformSpace;                                             // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x004A   (0x0006)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0050   (0x0060)  
	FName                                              BaseJoint;                                                  // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FTransform                                         Output;                                                     // 0x00C0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKFK
/// Size: 0x0310 (0x000040 - 0x000350)
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable
{ 
	FName                                              StartJoint;                                                 // 0x0040   (0x0008)  
	FName                                              EndJoint;                                                   // 0x0048   (0x0008)  
	FVector                                            PoleTarget;                                                 // 0x0050   (0x0018)  
	float                                              Spin;                                                       // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FTransform                                         EndEffector;                                                // 0x0070   (0x0060)  
	float                                              IKBlend;                                                    // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FTransform                                         StartJointFKTransform;                                      // 0x00E0   (0x0060)  
	FTransform                                         MidJointFKTransform;                                        // 0x0140   (0x0060)  
	FTransform                                         EndJointFKTransform;                                        // 0x01A0   (0x0060)  
	float                                              PreviousFKIKBlend;                                          // 0x0200   (0x0004)  
	unsigned char                                      UnknownData02_5[0xC];                                       // 0x0204   (0x000C)  MISSED
	FTransform                                         StartJointIKTransform;                                      // 0x0210   (0x0060)  
	FTransform                                         MidJointIKTransform;                                        // 0x0270   (0x0060)  
	FTransform                                         EndJointIKTransform;                                        // 0x02D0   (0x0060)  
	int32_t                                            StartJointIndex;                                            // 0x0330   (0x0004)  
	int32_t                                            MidJointIndex;                                              // 0x0334   (0x0004)  
	int32_t                                            EndJointIndex;                                              // 0x0338   (0x0004)  
	float                                              UpperLimbLength;                                            // 0x033C   (0x0004)  
	float                                              LowerLimbLength;                                            // 0x0340   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x0344   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerGetInstruction
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_DrawContainerGetInstruction : FRigUnit
{ 
	FName                                              InstructionName;                                            // 0x0008   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetColor
/// Size: 0x0018 (0x000040 - 0x000058)
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0040   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetThickness
/// Size: 0x0010 (0x000040 - 0x000050)
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0040   (0x0008)  
	float                                              Thickness;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetTransform
/// Size: 0x0070 (0x000040 - 0x0000B0)
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0050   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_BeginExecution
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_BeginExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_CollectionBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionBaseMutable
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_CollectionBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionChain
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_CollectionChain : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     FirstItem;                                                  // 0x0008   (0x000C)  
	FRigElementKey                                     LastItem;                                                   // 0x0014   (0x000C)  
	bool                                               Reverse;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionChainArray
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_CollectionChainArray : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     FirstItem;                                                  // 0x0008   (0x000C)  
	FRigElementKey                                     LastItem;                                                   // 0x0014   (0x000C)  
	bool                                               Reverse;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearch
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase
{ 
	FName                                              PartialName;                                                // 0x0008   (0x0008)  
	ERigElementType                                    TypeToSearch;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearchArray
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionNameSearchArray : FRigUnit_CollectionBase
{ 
	FName                                              PartialName;                                                // 0x0008   (0x0008)  
	ERigElementType                                    TypeToSearch;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildren
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x000C)  
	bool                                               bIncludeParent;                                             // 0x0014   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0015   (0x0001)  
	ERigElementType                                    TypeToSearch;                                               // 0x0016   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0017   (0x0001)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildrenArray
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionChildrenArray : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x000C)  
	bool                                               bIncludeParent;                                             // 0x0014   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0015   (0x0001)  
	ERigElementType                                    TypeToSearch;                                               // 0x0016   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0017   (0x0001)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetAll
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_CollectionGetAll : FRigUnit_CollectionBase
{ 
	ERigElementType                                    TypeToSearch;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItems
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0008   (0x0010)  
	FName                                              Old;                                                        // 0x0018   (0x0008)  
	FName                                              New;                                                        // 0x0020   (0x0008)  
	bool                                               RemoveInvalidItems;                                         // 0x0028   (0x0001)  
	bool                                               bAllowDuplicates;                                           // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x002A   (0x0006)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItemsArray
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_CollectionReplaceItemsArray : FRigUnit_CollectionBase
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	FName                                              Old;                                                        // 0x0018   (0x0008)  
	FName                                              New;                                                        // 0x0020   (0x0008)  
	bool                                               RemoveInvalidItems;                                         // 0x0028   (0x0001)  
	bool                                               bAllowDuplicates;                                           // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x002A   (0x0006)  MISSED
	TArray<FRigElementKey>                             Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionItems
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	bool                                               bAllowDuplicates;                                           // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0019   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetItems
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionGetItems : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	TArray<FRigElementKey>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetParentIndices
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionGetParentIndices : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetParentIndicesItemArray
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionGetParentIndicesItemArray : FRigUnit_CollectionBase
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionUnion
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	bool                                               bAllowDuplicates;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionIntersection
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionDifference
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionReverse
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	FRigElementKeyCollection                           Reversed;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionCount
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_CollectionCount : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionItemAtIndex
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	int32_t                                            Index;                                                      // 0x0018   (0x0004)  
	FRigElementKey                                     Item;                                                       // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionLoop
/// Size: 0x0068 (0x000040 - 0x0000A8)
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0040   (0x0010)  
	FRigElementKey                                     Item;                                                       // 0x0050   (0x000C)  
	int32_t                                            Index;                                                      // 0x005C   (0x0004)  
	int32_t                                            Count;                                                      // 0x0060   (0x0004)  
	float                                              Ratio;                                                      // 0x0064   (0x0004)  
	bool                                               Continue;                                                   // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	FControlRigExecuteContext                          Completed;                                                  // 0x0070   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionAddItem
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_CollectionAddItem : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	FRigElementKey                                     Item;                                                       // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FRigElementKeyCollection                           Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DynamicHierarchyBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_DynamicHierarchyBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_DynamicHierarchyBaseMutable
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_DynamicHierarchyBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_AddParent
/// Size: 0x0018 (0x000040 - 0x000058)
struct FRigUnit_AddParent : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x004C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_SetDefaultParent
/// Size: 0x0018 (0x000040 - 0x000058)
struct FRigUnit_SetDefaultParent : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x004C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_SwitchParent
/// Size: 0x0020 (0x000040 - 0x000060)
struct FRigUnit_SwitchParent : FRigUnit_DynamicHierarchyBaseMutable
{ 
	ERigSwitchParentMode                               Mode;                                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FRigElementKey                                     Child;                                                      // 0x0044   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x0050   (0x000C)  
	bool                                               bMaintainGlobal;                                            // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x005D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentWeights
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_HierarchyGetParentWeights : FRigUnit_DynamicHierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FRigElementWeight>                          Weights;                                                    // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Parents;                                                    // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentWeightsArray
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_HierarchyGetParentWeightsArray : FRigUnit_DynamicHierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FRigElementWeight>                          Weights;                                                    // 0x0018   (0x0010)  
	TArray<FRigElementKey>                             Parents;                                                    // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetParentWeights
/// Size: 0x0020 (0x000040 - 0x000060)
struct FRigUnit_HierarchySetParentWeights : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FRigElementWeight>                          Weights;                                                    // 0x0050   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyReset
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_HierarchyReset : FRigUnit_DynamicHierarchyBaseMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyImportFromSkeleton
/// Size: 0x0020 (0x000040 - 0x000060)
struct FRigUnit_HierarchyImportFromSkeleton : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FName                                              Namespace;                                                  // 0x0040   (0x0008)  
	bool                                               bIncludeCurves;                                             // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0050   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyRemoveElement
/// Size: 0x0010 (0x000040 - 0x000050)
struct FRigUnit_HierarchyRemoveElement : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	bool                                               bSuccess;                                                   // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddElement
/// Size: 0x0020 (0x000040 - 0x000060)
struct FRigUnit_HierarchyAddElement : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Parent;                                                     // 0x0040   (0x000C)  
	FName                                              Name;                                                       // 0x004C   (0x0008)  
	FRigElementKey                                     Item;                                                       // 0x0054   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddBone
/// Size: 0x0070 (0x000060 - 0x0000D0)
struct FRigUnit_HierarchyAddBone : FRigUnit_HierarchyAddElement
{ 
	FTransform                                         Transform;                                                  // 0x0060   (0x0060)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00C1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddNull
/// Size: 0x0070 (0x000060 - 0x0000D0)
struct FRigUnit_HierarchyAddNull : FRigUnit_HierarchyAddElement
{ 
	FTransform                                         Transform;                                                  // 0x0060   (0x0060)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00C1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_Settings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_HierarchyAddControl_Settings
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
	FName                                              DisplayName;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FRigUnit_HierarchyAddControl_ShapeSettings
{ 
	bool                                               bVisible;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x000C   (0x0010)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_ProxySettings
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigUnit_HierarchyAddControl_ProxySettings
{ 
	bool                                               bIsProxy;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FRigElementKey>                             DrivenControls;                                             // 0x0008   (0x0010)  
	ERigControlVisibility                              ShapeVisibility;                                            // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_HierarchyAddControlFloat_LimitSettings
{ 
	FRigControlLimitEnabled                            Limit;                                                      // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              MinValue;                                                   // 0x0004   (0x0004)  
	float                                              MaxValue;                                                   // 0x0008   (0x0004)  
	bool                                               bDrawLimits;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat_Settings
/// Size: 0x00C0 (0x000010 - 0x0000D0)
struct FRigUnit_HierarchyAddControlFloat_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FRigUnit_HierarchyAddControlFloat_LimitSettings    Limits;                                                     // 0x0014   (0x0010)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0024   (0x000C)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0030   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00B0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat
/// Size: 0x0140 (0x000060 - 0x0001A0)
struct FRigUnit_HierarchyAddControlFloat : FRigUnit_HierarchyAddElement
{ 
	FTransform                                         OffsetTransform;                                            // 0x0060   (0x0060)  
	float                                              InitialValue;                                               // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FRigUnit_HierarchyAddControlFloat_Settings         Settings;                                                   // 0x00D0   (0x00D0)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_HierarchyAddControlInteger_LimitSettings
{ 
	FRigControlLimitEnabled                            Limit;                                                      // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MinValue;                                                   // 0x0004   (0x0004)  
	int32_t                                            MaxValue;                                                   // 0x0008   (0x0004)  
	bool                                               bDrawLimits;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger_Settings
/// Size: 0x00C0 (0x000010 - 0x0000D0)
struct FRigUnit_HierarchyAddControlInteger_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	FRigUnit_HierarchyAddControlInteger_LimitSettings  Limits;                                                     // 0x0014   (0x0010)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0024   (0x000C)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0030   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00B0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger
/// Size: 0x0140 (0x000060 - 0x0001A0)
struct FRigUnit_HierarchyAddControlInteger : FRigUnit_HierarchyAddElement
{ 
	FTransform                                         OffsetTransform;                                            // 0x0060   (0x0060)  
	int32_t                                            InitialValue;                                               // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FRigUnit_HierarchyAddControlInteger_Settings       Settings;                                                   // 0x00D0   (0x00D0)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigUnit_HierarchyAddControlVector2D_LimitSettings
{ 
	FRigControlLimitEnabled                            LimitX;                                                     // 0x0000   (0x0002)  
	FRigControlLimitEnabled                            LimitY;                                                     // 0x0002   (0x0002)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector2D                                          MinValue;                                                   // 0x0008   (0x0010)  
	FVector2D                                          MaxValue;                                                   // 0x0018   (0x0010)  
	bool                                               bDrawLimits;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
/// Size: 0x00E0 (0x000010 - 0x0000F0)
struct FRigUnit_HierarchyAddControlVector2D_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits;                                                     // 0x0018   (0x0030)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0050   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00D0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D
/// Size: 0x0160 (0x000060 - 0x0001C0)
struct FRigUnit_HierarchyAddControlVector2D : FRigUnit_HierarchyAddElement
{ 
	FTransform                                         OffsetTransform;                                            // 0x0060   (0x0060)  
	FVector2D                                          InitialValue;                                               // 0x00C0   (0x0010)  
	FRigUnit_HierarchyAddControlVector2D_Settings      Settings;                                                   // 0x00D0   (0x00F0)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_HierarchyAddControlVector_LimitSettings
{ 
	FRigControlLimitEnabled                            LimitX;                                                     // 0x0000   (0x0002)  
	FRigControlLimitEnabled                            LimitY;                                                     // 0x0002   (0x0002)  
	FRigControlLimitEnabled                            LimitZ;                                                     // 0x0004   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	FVector                                            MinValue;                                                   // 0x0008   (0x0018)  
	FVector                                            MaxValue;                                                   // 0x0020   (0x0018)  
	bool                                               bDrawLimits;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector_Settings
/// Size: 0x00F0 (0x000010 - 0x000100)
struct FRigUnit_HierarchyAddControlVector_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	bool                                               bIsPosition;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRigUnit_HierarchyAddControlVector_LimitSettings   Limits;                                                     // 0x0018   (0x0040)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0060   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00E0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector
/// Size: 0x0180 (0x000060 - 0x0001E0)
struct FRigUnit_HierarchyAddControlVector : FRigUnit_HierarchyAddElement
{ 
	FTransform                                         OffsetTransform;                                            // 0x0060   (0x0060)  
	FVector                                            InitialValue;                                               // 0x00C0   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FRigUnit_HierarchyAddControlVector_Settings        Settings;                                                   // 0x00E0   (0x0100)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_HierarchyAddControlRotator_LimitSettings
{ 
	FRigControlLimitEnabled                            LimitPitch;                                                 // 0x0000   (0x0002)  
	FRigControlLimitEnabled                            LimitYaw;                                                   // 0x0002   (0x0002)  
	FRigControlLimitEnabled                            LimitRoll;                                                  // 0x0004   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0006   (0x0002)  MISSED
	FRotator                                           MinValue;                                                   // 0x0008   (0x0018)  
	FRotator                                           MaxValue;                                                   // 0x0020   (0x0018)  
	bool                                               bDrawLimits;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator_Settings
/// Size: 0x00E0 (0x000010 - 0x0000F0)
struct FRigUnit_HierarchyAddControlRotator_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	FRigUnit_HierarchyAddControlRotator_LimitSettings  Limits;                                                     // 0x0010   (0x0040)  
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0050   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00D0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator
/// Size: 0x0170 (0x000060 - 0x0001D0)
struct FRigUnit_HierarchyAddControlRotator : FRigUnit_HierarchyAddElement
{ 
	FTransform                                         OffsetTransform;                                            // 0x0060   (0x0060)  
	FRotator                                           InitialValue;                                               // 0x00C0   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FRigUnit_HierarchyAddControlRotator_Settings       Settings;                                                   // 0x00E0   (0x00F0)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlTransform_Settings
/// Size: 0x00A0 (0x000010 - 0x0000B0)
struct FRigUnit_HierarchyAddControlTransform_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0010   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x0090   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlTransform
/// Size: 0x0170 (0x000060 - 0x0001D0)
struct FRigUnit_HierarchyAddControlTransform : FRigUnit_HierarchyAddElement
{ 
	FTransform                                         OffsetTransform;                                            // 0x0060   (0x0060)  
	FTransform                                         InitialValue;                                               // 0x00C0   (0x0060)  
	FRigUnit_HierarchyAddControlTransform_Settings     Settings;                                                   // 0x0120   (0x00B0)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelBool
/// Size: 0x0008 (0x000060 - 0x000068)
struct FRigUnit_HierarchyAddAnimationChannelBool : FRigUnit_HierarchyAddElement
{ 
	bool                                               InitialValue;                                               // 0x0060   (0x0001)  
	bool                                               MinimumValue;                                               // 0x0061   (0x0001)  
	bool                                               MaximumValue;                                               // 0x0062   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0063   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
/// Size: 0x0010 (0x000060 - 0x000070)
struct FRigUnit_HierarchyAddAnimationChannelFloat : FRigUnit_HierarchyAddElement
{ 
	float                                              InitialValue;                                               // 0x0060   (0x0004)  
	float                                              MinimumValue;                                               // 0x0064   (0x0004)  
	float                                              MaximumValue;                                               // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
/// Size: 0x0010 (0x000060 - 0x000070)
struct FRigUnit_HierarchyAddAnimationChannelInteger : FRigUnit_HierarchyAddElement
{ 
	int32_t                                            InitialValue;                                               // 0x0060   (0x0004)  
	int32_t                                            MinimumValue;                                               // 0x0064   (0x0004)  
	int32_t                                            MaximumValue;                                               // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
/// Size: 0x0030 (0x000060 - 0x000090)
struct FRigUnit_HierarchyAddAnimationChannelVector2D : FRigUnit_HierarchyAddElement
{ 
	FVector2D                                          InitialValue;                                               // 0x0060   (0x0010)  
	FVector2D                                          MinimumValue;                                               // 0x0070   (0x0010)  
	FVector2D                                          MaximumValue;                                               // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector
/// Size: 0x0048 (0x000060 - 0x0000A8)
struct FRigUnit_HierarchyAddAnimationChannelVector : FRigUnit_HierarchyAddElement
{ 
	FVector                                            InitialValue;                                               // 0x0060   (0x0018)  
	FVector                                            MinimumValue;                                               // 0x0078   (0x0018)  
	FVector                                            MaximumValue;                                               // 0x0090   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
/// Size: 0x0048 (0x000060 - 0x0000A8)
struct FRigUnit_HierarchyAddAnimationChannelRotator : FRigUnit_HierarchyAddElement
{ 
	FRotator                                           InitialValue;                                               // 0x0060   (0x0018)  
	FRotator                                           MinimumValue;                                               // 0x0078   (0x0018)  
	FRotator                                           MaximumValue;                                               // 0x0090   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ForLoopCount
/// Size: 0x0048 (0x000040 - 0x000088)
struct FRigUnit_ForLoopCount : FRigUnitMutable
{ 
	int32_t                                            Count;                                                      // 0x0040   (0x0004)  
	int32_t                                            Index;                                                      // 0x0044   (0x0004)  
	float                                              Ratio;                                                      // 0x0048   (0x0004)  
	bool                                               Continue;                                                   // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FControlRigExecuteContext                          Completed;                                                  // 0x0050   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_HierarchyBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBaseMutable
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_HierarchyBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParent
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x0014   (0x000C)  
	FCachedRigElement                                  CachedChild;                                                // 0x0020   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x0040   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParents
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bIncludeChild;                                              // 0x0014   (0x0001)  
	bool                                               bReverse;                                                   // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	FRigElementKeyCollection                           Parents;                                                    // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedChild;                                                // 0x0028   (0x0020)  
	FRigElementKeyCollection                           CachedParents;                                              // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentsItemArray
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_HierarchyGetParentsItemArray : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bIncludeChild;                                              // 0x0014   (0x0001)  
	bool                                               bReverse;                                                   // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	TArray<FRigElementKey>                             Parents;                                                    // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedChild;                                                // 0x0028   (0x0020)  
	FRigElementKeyCollection                           CachedParents;                                              // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetChildren
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x000C)  
	bool                                               bIncludeParent;                                             // 0x0014   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0016   (0x0002)  MISSED
	FRigElementKeyCollection                           Children;                                                   // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedParent;                                               // 0x0028   (0x0020)  
	FRigElementKeyCollection                           CachedChildren;                                             // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblings
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	bool                                               bIncludeItem;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigElementKeyCollection                           Siblings;                                                   // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0028   (0x0020)  
	FRigElementKeyCollection                           CachedSiblings;                                             // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblingsItemArray
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_HierarchyGetSiblingsItemArray : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	bool                                               bIncludeItem;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	TArray<FRigElementKey>                             Siblings;                                                   // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0028   (0x0020)  
	FRigElementKeyCollection                           CachedSiblings;                                             // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetPose
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_HierarchyGetPose : FRigUnit_HierarchyBase
{ 
	bool                                               Initial;                                                    // 0x0008   (0x0001)  
	ERigElementType                                    ElementType;                                                // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	FRigElementKeyCollection                           ItemsToGet;                                                 // 0x0010   (0x0010)  
	FRigPose                                           Pose;                                                       // 0x0020   (0x0070)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetPoseItemArray
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_HierarchyGetPoseItemArray : FRigUnit_HierarchyBase
{ 
	bool                                               Initial;                                                    // 0x0008   (0x0001)  
	ERigElementType                                    ElementType;                                                // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x000A   (0x0006)  MISSED
	TArray<FRigElementKey>                             ItemsToGet;                                                 // 0x0010   (0x0010)  
	FRigPose                                           Pose;                                                       // 0x0020   (0x0070)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetPose
/// Size: 0x0090 (0x000040 - 0x0000D0)
struct FRigUnit_HierarchySetPose : FRigUnit_HierarchyBaseMutable
{ 
	FRigPose                                           Pose;                                                       // 0x0040   (0x0070)  
	ERigElementType                                    ElementType;                                                // 0x00B0   (0x0001)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00B2   (0x0006)  MISSED
	FRigElementKeyCollection                           ItemsToSet;                                                 // 0x00B8   (0x0010)  
	float                                              Weight;                                                     // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetPoseItemArray
/// Size: 0x0090 (0x000040 - 0x0000D0)
struct FRigUnit_HierarchySetPoseItemArray : FRigUnit_HierarchyBaseMutable
{ 
	FRigPose                                           Pose;                                                       // 0x0040   (0x0070)  
	ERigElementType                                    ElementType;                                                // 0x00B0   (0x0001)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00B2   (0x0006)  MISSED
	TArray<FRigElementKey>                             ItemsToSet;                                                 // 0x00B8   (0x0010)  
	float                                              Weight;                                                     // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PoseIsEmpty
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_PoseIsEmpty : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	bool                                               IsEmpty;                                                    // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PoseGetItems
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_PoseGetItems : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	ERigElementType                                    ElementType;                                                // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	FRigElementKeyCollection                           Items;                                                      // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PoseGetItemsItemArray
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_PoseGetItemsItemArray : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	ERigElementType                                    ElementType;                                                // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PoseGetDelta
/// Size: 0x0120 (0x000008 - 0x000128)
struct FRigUnit_PoseGetDelta : FRigUnit_HierarchyBase
{ 
	FRigPose                                           PoseA;                                                      // 0x0008   (0x0070)  
	FRigPose                                           PoseB;                                                      // 0x0078   (0x0070)  
	float                                              PositionThreshold;                                          // 0x00E8   (0x0004)  
	float                                              RotationThreshold;                                          // 0x00EC   (0x0004)  
	float                                              ScaleThreshold;                                             // 0x00F0   (0x0004)  
	float                                              CurveThreshold;                                             // 0x00F4   (0x0004)  
	ERigElementType                                    ElementType;                                                // 0x00F8   (0x0001)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x00FA   (0x0006)  MISSED
	FRigElementKeyCollection                           ItemsToCompare;                                             // 0x0100   (0x0010)  
	bool                                               PosesAreEqual;                                              // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	FRigElementKeyCollection                           ItemsWithDelta;                                             // 0x0118   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PoseGetTransform
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FRigUnit_PoseGetTransform : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	FRigElementKey                                     Item;                                                       // 0x0078   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0084   (0x0001)  
	bool                                               Valid;                                                      // 0x0085   (0x0001)  
	unsigned char                                      UnknownData00_5[0xA];                                       // 0x0086   (0x000A)  MISSED
	FTransform                                         Transform;                                                  // 0x0090   (0x0060)  
	float                                              CurveValue;                                                 // 0x00F0   (0x0004)  
	int32_t                                            CachedPoseElementIndex;                                     // 0x00F4   (0x0004)  
	int32_t                                            CachedPoseHash;                                             // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PoseGetTransformArray
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_PoseGetTransformArray : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0078   (0x0001)  
	bool                                               Valid;                                                      // 0x0079   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x007A   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PoseGetCurve
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_PoseGetCurve : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	FName                                              Curve;                                                      // 0x0078   (0x0008)  
	bool                                               Valid;                                                      // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              CurveValue;                                                 // 0x0084   (0x0004)  
	int32_t                                            CachedPoseElementIndex;                                     // 0x0088   (0x0004)  
	int32_t                                            CachedPoseHash;                                             // 0x008C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_PoseLoop
/// Size: 0x0190 (0x000040 - 0x0001D0)
struct FRigUnit_PoseLoop : FRigUnit_HierarchyBaseMutable
{ 
	FRigPose                                           Pose;                                                       // 0x0040   (0x0070)  
	FRigElementKey                                     Item;                                                       // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	FTransform                                         GlobalTransform;                                            // 0x00C0   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x0120   (0x0060)  
	float                                              CurveValue;                                                 // 0x0180   (0x0004)  
	int32_t                                            Index;                                                      // 0x0184   (0x0004)  
	int32_t                                            Count;                                                      // 0x0188   (0x0004)  
	float                                              Ratio;                                                      // 0x018C   (0x0004)  
	bool                                               Continue;                                                   // 0x0190   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0191   (0x0007)  MISSED
	FControlRigExecuteContext                          Completed;                                                  // 0x0198   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_InteractionExecution
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_InteractionExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_InverseExecution
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_InverseExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_IsInteracting
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_IsInteracting : FRigUnit
{ 
	bool                                               bIsInteracting;                                             // 0x0008   (0x0001)  
	bool                                               bIsTranslating;                                             // 0x0009   (0x0001)  
	bool                                               bIsRotating;                                                // 0x000A   (0x0001)  
	bool                                               bIsScaling;                                                 // 0x000B   (0x0001)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ItemBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_ItemBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_ItemBaseMutable
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_ItemBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_ItemExists
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_ItemExists : FRigUnit_ItemBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	bool                                               Exists;                                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0018   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ItemReplace
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_ItemReplace : FRigUnit_ItemBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	FName                                              Old;                                                        // 0x0014   (0x0008)  
	FName                                              New;                                                        // 0x001C   (0x0008)  
	FRigElementKey                                     Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ItemEquals
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_ItemEquals : FRigUnit_ItemBase
{ 
	FRigElementKey                                     A;                                                          // 0x0008   (0x000C)  
	FRigElementKey                                     B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemNotEquals
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_ItemNotEquals : FRigUnit_ItemBase
{ 
	FRigElementKey                                     A;                                                          // 0x0008   (0x000C)  
	FRigElementKey                                     B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemTypeEquals
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_ItemTypeEquals : FRigUnit_ItemBase
{ 
	FRigElementKey                                     A;                                                          // 0x0008   (0x000C)  
	FRigElementKey                                     B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemTypeNotEquals
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_ItemTypeNotEquals : FRigUnit_ItemBase
{ 
	FRigElementKey                                     A;                                                          // 0x0008   (0x000C)  
	FRigElementKey                                     B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PrepareForExecution
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_PrepareForExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_SequenceExecution
/// Size: 0x0118 (0x000008 - 0x000120)
struct FRigUnit_SequenceExecution : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0038)  
	FControlRigExecuteContext                          A;                                                          // 0x0040   (0x0038)  
	FControlRigExecuteContext                          B;                                                          // 0x0078   (0x0038)  
	FControlRigExecuteContext                          C;                                                          // 0x00B0   (0x0038)  
	FControlRigExecuteContext                          D;                                                          // 0x00E8   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_SequenceAggregate
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_SequenceAggregate : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0038)  
	FControlRigExecuteContext                          A;                                                          // 0x0040   (0x0038)  
	FControlRigExecuteContext                          B;                                                          // 0x0078   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_UserDefinedEvent
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_UserDefinedEvent : FRigUnit
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0008   (0x0038)  
	FName                                              EventName;                                                  // 0x0040   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_AddBoneTransform
/// Size: 0x00A0 (0x000040 - 0x0000E0)
struct FRigUnit_AddBoneTransform : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0050   (0x0060)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	bool                                               bPostMultiply;                                              // 0x00B4   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00B6   (0x0002)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00B8   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Item
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_Item : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BoneName
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_BoneName : FRigUnit
{ 
	FName                                              bone;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_SpaceName
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_SpaceName : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_ControlName
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_ControlName : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_GetAnimationChannelBase
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_GetAnimationChannelBase : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	FName                                              Channel;                                                    // 0x0010   (0x0008)  
	bool                                               bInitial;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FRigElementKey                                     CachedChannelKey;                                           // 0x001C   (0x000C)  
	int32_t                                            CachedChannelHash;                                          // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetBoolAnimationChannel
/// Size: 0x0008 (0x000030 - 0x000038)
struct FRigUnit_GetBoolAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	bool                                               Value;                                                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetFloatAnimationChannel
/// Size: 0x0008 (0x000030 - 0x000038)
struct FRigUnit_GetFloatAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	float                                              Value;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetIntAnimationChannel
/// Size: 0x0008 (0x000030 - 0x000038)
struct FRigUnit_GetIntAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	int32_t                                            Value;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetVector2DAnimationChannel
/// Size: 0x0010 (0x000030 - 0x000040)
struct FRigUnit_GetVector2DAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	FVector2D                                          Value;                                                      // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_GetVectorAnimationChannel
/// Size: 0x0018 (0x000030 - 0x000048)
struct FRigUnit_GetVectorAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	FVector                                            Value;                                                      // 0x0030   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetRotatorAnimationChannel
/// Size: 0x0018 (0x000030 - 0x000048)
struct FRigUnit_GetRotatorAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	FRotator                                           Value;                                                      // 0x0030   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetTransformAnimationChannel
/// Size: 0x0060 (0x000030 - 0x000090)
struct FRigUnit_GetTransformAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	FTransform                                         Value;                                                      // 0x0030   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_SetAnimationChannelBase
/// Size: 0x0038 (0x000030 - 0x000068)
struct FRigUnit_SetAnimationChannelBase : FRigUnit_GetAnimationChannelBase
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0030   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoolAnimationChannel
/// Size: 0x0008 (0x000068 - 0x000070)
struct FRigUnit_SetBoolAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	bool                                               Value;                                                      // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetFloatAnimationChannel
/// Size: 0x0008 (0x000068 - 0x000070)
struct FRigUnit_SetFloatAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	float                                              Value;                                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetIntAnimationChannel
/// Size: 0x0008 (0x000068 - 0x000070)
struct FRigUnit_SetIntAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	int32_t                                            Value;                                                      // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetVector2DAnimationChannel
/// Size: 0x0010 (0x000068 - 0x000078)
struct FRigUnit_SetVector2DAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	FVector2D                                          Value;                                                      // 0x0068   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetVectorAnimationChannel
/// Size: 0x0018 (0x000068 - 0x000080)
struct FRigUnit_SetVectorAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	FVector                                            Value;                                                      // 0x0068   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetRotatorAnimationChannel
/// Size: 0x0018 (0x000068 - 0x000080)
struct FRigUnit_SetRotatorAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	FRotator                                           Value;                                                      // 0x0068   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SetTransformAnimationChannel
/// Size: 0x0068 (0x000068 - 0x0000D0)
struct FRigUnit_SetTransformAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0068   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0070   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_GetBoneTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_GetBoneTransform : FRigUnit
{ 
	FName                                              bone;                                                       // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlInitialTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_GetControlInitialTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlBool
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_GetControlBool : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0018   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlFloat
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_GetControlFloat : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	float                                              FloatValue;                                                 // 0x0010   (0x0004)  
	float                                              Minimum;                                                    // 0x0014   (0x0004)  
	float                                              Maximum;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlInteger
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_GetControlInteger : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	int32_t                                            IntegerValue;                                               // 0x0010   (0x0004)  
	int32_t                                            Minimum;                                                    // 0x0014   (0x0004)  
	int32_t                                            Maximum;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector2D
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_GetControlVector2D : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	FVector2D                                          Vector;                                                     // 0x0010   (0x0010)  
	FVector2D                                          Minimum;                                                    // 0x0020   (0x0010)  
	FVector2D                                          Maximum;                                                    // 0x0030   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0040   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_GetControlVector : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FVector                                            Vector;                                                     // 0x0018   (0x0018)  
	FVector                                            Minimum;                                                    // 0x0030   (0x0018)  
	FVector                                            Maximum;                                                    // 0x0048   (0x0018)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0060   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlRotator
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_GetControlRotator : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRotator                                           Rotator;                                                    // 0x0018   (0x0018)  
	FRotator                                           Minimum;                                                    // 0x0030   (0x0018)  
	FRotator                                           Maximum;                                                    // 0x0048   (0x0018)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0060   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlTransform
/// Size: 0x0158 (0x000008 - 0x000160)
struct FRigUnit_GetControlTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FTransform                                         Minimum;                                                    // 0x0080   (0x0060)  
	FTransform                                         Maximum;                                                    // 0x00E0   (0x0060)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0140   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetCurveValue
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_GetCurveValue : FRigUnit
{ 
	FName                                              Curve;                                                      // 0x0008   (0x0008)  
	bool                                               Valid;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Value;                                                      // 0x0014   (0x0004)  
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0018   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetInitialBoneTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_GetInitialBoneTransform : FRigUnit
{ 
	FName                                              bone;                                                       // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeBoneTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigUnit_GetRelativeBoneTransform : FRigUnit
{ 
	FName                                              bone;                                                       // 0x0008   (0x0008)  
	FName                                              Space;                                                      // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0080   (0x0020)  
	FCachedRigElement                                  CachedSpace;                                                // 0x00A0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransformForItem
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_GetRelativeTransformForItem : FRigUnit
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bChildInitial;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigElementKey                                     Parent;                                                     // 0x0018   (0x000C)  
	bool                                               bParentInitial;                                             // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0xB];                                       // 0x0025   (0x000B)  MISSED
	FTransform                                         RelativeTransform;                                          // 0x0030   (0x0060)  
	FCachedRigElement                                  CachedChild;                                                // 0x0090   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x00B0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetSpaceTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_GetSpaceTransform : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x0008)  
	EBoneGetterSetterMode                              SpaceType;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetTransform
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_GetTransform : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0014   (0x0001)  
	bool                                               bInitial;                                                   // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_5[0xA];                                       // 0x0016   (0x000A)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedIndex;                                                // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetTransformArray
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_GetTransformArray : FRigUnit
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0008   (0x0010)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0018   (0x0001)  
	bool                                               bInitial;                                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0020   (0x0010)  
	TArray<FCachedRigElement>                          CachedIndex;                                                // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_GetTransformItemArray
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_GetTransformItemArray : FRigUnit
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0018   (0x0001)  
	bool                                               bInitial;                                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x001A   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0020   (0x0010)  
	TArray<FCachedRigElement>                          CachedIndex;                                                // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigDispatch_MetadataBase
/// Size: 0x0030 (0x000018 - 0x000048)
struct FRigDispatch_MetadataBase : FRigDispatchFactory
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Struct /Script/ControlRig.RigDispatch_GetMetadata
/// Size: 0x0000 (0x000048 - 0x000048)
struct FRigDispatch_GetMetadata : FRigDispatch_MetadataBase
{ 
};

/// Struct /Script/ControlRig.RigDispatch_SetMetadata
/// Size: 0x0000 (0x000048 - 0x000048)
struct FRigDispatch_SetMetadata : FRigDispatch_MetadataBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_RemoveMetadata
/// Size: 0x0038 (0x000040 - 0x000078)
struct FRigUnit_RemoveMetadata : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	FName                                              Name;                                                       // 0x004C   (0x0008)  
	bool                                               Removed;                                                    // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0058   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_RemoveAllMetadata
/// Size: 0x0030 (0x000040 - 0x000070)
struct FRigUnit_RemoveAllMetadata : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	bool                                               Removed;                                                    // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HasMetadata
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_HasMetadata : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	FName                                              Name;                                                       // 0x0014   (0x0008)  
	ERigMetadataType                                   Type;                                                       // 0x001C   (0x0001)  
	bool                                               Found;                                                      // 0x001D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x001E   (0x0002)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadata
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_FindItemsWithMetadata : FRigUnit
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	ERigMetadataType                                   Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_GetMetadataTags
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_GetMetadataTags : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FName>                                      Tags;                                                       // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedIndex;                                                // 0x0028   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetMetadataTag
/// Size: 0x0038 (0x000040 - 0x000078)
struct FRigUnit_SetMetadataTag : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	FName                                              Tag;                                                        // 0x004C   (0x0008)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0058   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetMetadataTagArray
/// Size: 0x0040 (0x000040 - 0x000080)
struct FRigUnit_SetMetadataTagArray : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FName>                                      Tags;                                                       // 0x0050   (0x0010)  
	FCachedRigElement                                  CachedIndex;                                                // 0x0060   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_RemoveMetadataTag
/// Size: 0x0038 (0x000040 - 0x000078)
struct FRigUnit_RemoveMetadataTag : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	FName                                              Tag;                                                        // 0x004C   (0x0008)  
	bool                                               Removed;                                                    // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0058   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HasMetadataTag
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_HasMetadataTag : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	FName                                              Tag;                                                        // 0x0014   (0x0008)  
	bool                                               Found;                                                      // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HasMetadataTagArray
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_HasMetadataTagArray : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FName>                                      Tags;                                                       // 0x0018   (0x0010)  
	bool                                               Found;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadataTag
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_FindItemsWithMetadataTag : FRigUnit
{ 
	FName                                              Tag;                                                        // 0x0008   (0x0008)  
	TArray<FRigElementKey>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadataTagArray
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_FindItemsWithMetadataTagArray : FRigUnit
{ 
	TArray<FName>                                      Tags;                                                       // 0x0008   (0x0010)  
	TArray<FRigElementKey>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_FilterItemsByMetadataTags
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_FilterItemsByMetadataTags : FRigUnit
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	TArray<FName>                                      Tags;                                                       // 0x0018   (0x0010)  
	bool                                               Inclusive;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FRigElementKey>                             Result;                                                     // 0x0030   (0x0010)  
	TArray<FCachedRigElement>                          CachedIndices;                                              // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_OffsetTransformForItem
/// Size: 0x00A0 (0x000040 - 0x0000E0)
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x0050   (0x0060)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x00B8   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraint
/// Size: 0x01A0 (0x000040 - 0x0001E0)
struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable
{ 
	FRigElementKey                                     Subject;                                                    // 0x0040   (0x000C)  
	int32_t                                            ParentIndex;                                                // 0x004C   (0x0004)  
	FRigElementKeyCollection                           Parents;                                                    // 0x0050   (0x0010)  
	FTransform                                         InitialGlobalTransform;                                     // 0x0060   (0x0060)  
	float                                              Weight;                                                     // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x00D0   (0x0060)  
	bool                                               Switched;                                                   // 0x0130   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0131   (0x0007)  MISSED
	FCachedRigElement                                  CachedSubject;                                              // 0x0138   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x0158   (0x0020)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0178   (0x0008)  MISSED
	FTransform                                         RelativeOffset;                                             // 0x0180   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraintArray
/// Size: 0x01A0 (0x000040 - 0x0001E0)
struct FRigUnit_ParentSwitchConstraintArray : FRigUnitMutable
{ 
	FRigElementKey                                     Subject;                                                    // 0x0040   (0x000C)  
	int32_t                                            ParentIndex;                                                // 0x004C   (0x0004)  
	TArray<FRigElementKey>                             Parents;                                                    // 0x0050   (0x0010)  
	FTransform                                         InitialGlobalTransform;                                     // 0x0060   (0x0060)  
	float                                              Weight;                                                     // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x00C4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x00D0   (0x0060)  
	bool                                               Switched;                                                   // 0x0130   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0131   (0x0007)  MISSED
	FCachedRigElement                                  CachedSubject;                                              // 0x0138   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x0158   (0x0020)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0178   (0x0008)  MISSED
	FTransform                                         RelativeOffset;                                             // 0x0180   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ProjectTransformToNewParent
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FRigUnit_ProjectTransformToNewParent : FRigUnit
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bChildInitial;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigElementKey                                     OldParent;                                                  // 0x0018   (0x000C)  
	bool                                               bOldParentInitial;                                          // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FRigElementKey                                     NewParent;                                                  // 0x0028   (0x000C)  
	bool                                               bNewParentInitial;                                          // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_5[0xB];                                       // 0x0035   (0x000B)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	FCachedRigElement                                  CachedChild;                                                // 0x00A0   (0x0020)  
	FCachedRigElement                                  CachedOldParent;                                            // 0x00C0   (0x0020)  
	FCachedRigElement                                  CachedNewParent;                                            // 0x00E0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_PropagateTransform
/// Size: 0x0030 (0x000040 - 0x000070)
struct FRigUnit_PropagateTransform : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	bool                                               bRecomputeGlobal;                                           // 0x004C   (0x0001)  
	bool                                               bApplyToChildren;                                           // 0x004D   (0x0001)  
	bool                                               bRecursive;                                                 // 0x004E   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x004F   (0x0001)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SendEvent
/// Size: 0x0018 (0x000040 - 0x000058)
struct FRigUnit_SendEvent : FRigUnitMutable
{ 
	ERigEvent                                          Event;                                                      // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FRigElementKey                                     Item;                                                       // 0x0044   (0x000C)  
	float                                              OffsetInSeconds;                                            // 0x0050   (0x0004)  
	bool                                               bEnable;                                                    // 0x0054   (0x0001)  
	bool                                               bOnlyDuringInteraction;                                     // 0x0055   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0056   (0x0002)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetBoneInitialTransform
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0050   (0x0060)  
	FTransform                                         Result;                                                     // 0x00B0   (0x0060)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0110   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x0111   (0x0001)  
	unsigned char                                      UnknownData01_5[0x6];                                       // 0x0112   (0x0006)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0118   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetBoneRotation
/// Size: 0x0060 (0x000040 - 0x0000A0)
struct FRigUnit_SetBoneRotation : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0050   (0x0020)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0074   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0078   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0079   (0x0007)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTransform
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_SetBoneTransform : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0050   (0x0060)  
	FTransform                                         Result;                                                     // 0x00B0   (0x0060)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0114   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0118   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0119   (0x0007)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0120   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTranslation
/// Size: 0x0050 (0x000040 - 0x000090)
struct FRigUnit_SetBoneTranslation : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x0040   (0x0008)  
	FVector                                            Translation;                                                // 0x0048   (0x0018)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0064   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0070   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlColor
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_GetControlColor : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlColor
/// Size: 0x0038 (0x000040 - 0x000078)
struct FRigUnit_SetControlColor : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0040   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0048   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0058   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlDrivenList
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_GetControlDrivenList : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	TArray<FRigElementKey>                             Driven;                                                     // 0x0010   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlDrivenList
/// Size: 0x0038 (0x000040 - 0x000078)
struct FRigUnit_SetControlDrivenList : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0040   (0x0008)  
	TArray<FRigElementKey>                             Driven;                                                     // 0x0048   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0058   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlOffset
/// Size: 0x00A0 (0x000040 - 0x0000E0)
struct FRigUnit_SetControlOffset : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FTransform                                         Offset;                                                     // 0x0050   (0x0060)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x00B8   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetShapeTransform
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_GetShapeTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0070   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetShapeTransform
/// Size: 0x0090 (0x000040 - 0x0000D0)
struct FRigUnit_SetShapeTransform : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0050   (0x0060)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x00B0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlBool
/// Size: 0x0030 (0x000040 - 0x000070)
struct FRigUnit_SetControlBool : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0040   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool_Entry
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_SetMultiControlBool_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool
/// Size: 0x0020 (0x000040 - 0x000060)
struct FRigUnit_SetMultiControlBool : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlBool_Entry>         Entries;                                                    // 0x0040   (0x0010)  
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0050   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlFloat
/// Size: 0x0030 (0x000040 - 0x000070)
struct FRigUnit_SetControlFloat : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0040   (0x0008)  
	float                                              Weight;                                                     // 0x0048   (0x0004)  
	float                                              FloatValue;                                                 // 0x004C   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat_Entry
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_SetMultiControlFloat_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	float                                              FloatValue;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat
/// Size: 0x0028 (0x000040 - 0x000068)
struct FRigUnit_SetMultiControlFloat : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlFloat_Entry>        Entries;                                                    // 0x0040   (0x0010)  
	float                                              Weight;                                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0058   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlInteger
/// Size: 0x0030 (0x000040 - 0x000070)
struct FRigUnit_SetControlInteger : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0040   (0x0008)  
	int32_t                                            Weight;                                                     // 0x0048   (0x0004)  
	int32_t                                            IntegerValue;                                               // 0x004C   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger_Entry
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_SetMultiControlInteger_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	int32_t                                            IntegerValue;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger
/// Size: 0x0028 (0x000040 - 0x000068)
struct FRigUnit_SetMultiControlInteger : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlInteger_Entry>      Entries;                                                    // 0x0040   (0x0010)  
	float                                              Weight;                                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0058   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector2D
/// Size: 0x0040 (0x000040 - 0x000080)
struct FRigUnit_SetControlVector2D : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0040   (0x0008)  
	float                                              Weight;                                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FVector2D                                          Vector;                                                     // 0x0050   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0060   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D_Entry
/// Size: 0x0018 (0x000000 - 0x000018)
struct FRigUnit_SetMultiControlVector2D_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	FVector2D                                          Vector;                                                     // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D
/// Size: 0x0028 (0x000040 - 0x000068)
struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlVector2D_Entry>     Entries;                                                    // 0x0040   (0x0010)  
	float                                              Weight;                                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0058   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector
/// Size: 0x0050 (0x000040 - 0x000090)
struct FRigUnit_SetControlVector : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0040   (0x0008)  
	float                                              Weight;                                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FVector                                            Vector;                                                     // 0x0050   (0x0018)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0070   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlRotator
/// Size: 0x0050 (0x000040 - 0x000090)
struct FRigUnit_SetControlRotator : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0040   (0x0008)  
	float                                              Weight;                                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FRotator                                           Rotator;                                                    // 0x0050   (0x0018)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0070   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigUnit_SetMultiControlRotator_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	FRotator                                           Rotator;                                                    // 0x0008   (0x0018)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator
/// Size: 0x0028 (0x000040 - 0x000068)
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlRotator_Entry>      Entries;                                                    // 0x0040   (0x0010)  
	float                                              Weight;                                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0058   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlTransform
/// Size: 0x00A0 (0x000040 - 0x0000E0)
struct FRigUnit_SetControlTransform : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0040   (0x0008)  
	float                                              Weight;                                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0050   (0x0060)  
	EBoneGetterSetterMode                              Space;                                                      // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x00B8   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlVisibility
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_GetControlVisibility : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	bool                                               bVisible;                                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0018   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVisibility
/// Size: 0x0038 (0x000040 - 0x000078)
struct FRigUnit_SetControlVisibility : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	SDK_UNDEFINED(16,2147) /* FString */               __um(Pattern);                                              // 0x0050   (0x0010)  
	bool                                               bVisible;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0061   (0x0007)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0068   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetCurveValue
/// Size: 0x0030 (0x000040 - 0x000070)
struct FRigUnit_SetCurveValue : FRigUnitMutable
{ 
	FName                                              Curve;                                                      // 0x0040   (0x0008)  
	float                                              Value;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeBoneTransform
/// Size: 0x00C0 (0x000040 - 0x000100)
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x0040   (0x0008)  
	FName                                              Space;                                                      // 0x0048   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0050   (0x0060)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x00B8   (0x0020)  
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00D8   (0x0020)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTransformForItem
/// Size: 0x00D0 (0x000040 - 0x000110)
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x004C   (0x000C)  
	bool                                               bParentInitial;                                             // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	FTransform                                         Value;                                                      // 0x0060   (0x0060)  
	float                                              Weight;                                                     // 0x00C0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C5   (0x0003)  MISSED
	FCachedRigElement                                  CachedChild;                                                // 0x00C8   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x00E8   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTranslationForItem
/// Size: 0x0080 (0x000040 - 0x0000C0)
struct FRigUnit_SetRelativeTranslationForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x004C   (0x000C)  
	bool                                               bParentInitial;                                             // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	FVector                                            Value;                                                      // 0x0060   (0x0018)  
	float                                              Weight;                                                     // 0x0078   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x007C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x007D   (0x0003)  MISSED
	FCachedRigElement                                  CachedChild;                                                // 0x0080   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x00A0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeRotationForItem
/// Size: 0x0090 (0x000040 - 0x0000D0)
struct FRigUnit_SetRelativeRotationForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x004C   (0x000C)  
	bool                                               bParentInitial;                                             // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0059   (0x0007)  MISSED
	FQuat                                              Value;                                                      // 0x0060   (0x0020)  
	float                                              Weight;                                                     // 0x0080   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0084   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	FCachedRigElement                                  CachedChild;                                                // 0x0088   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x00A8   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceInitialTransform
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable
{ 
	FName                                              SpaceName;                                                  // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0050   (0x0060)  
	FTransform                                         Result;                                                     // 0x00B0   (0x0060)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0111   (0x0007)  MISSED
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x0118   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceTransform
/// Size: 0x00A0 (0x000040 - 0x0000E0)
struct FRigUnit_SetSpaceTransform : FRigUnitMutable
{ 
	FName                                              Space;                                                      // 0x0040   (0x0008)  
	float                                              Weight;                                                     // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0050   (0x0060)  
	EBoneGetterSetterMode                              SpaceType;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00B1   (0x0007)  MISSED
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x00B8   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetTransform
/// Size: 0x00A0 (0x000040 - 0x0000E0)
struct FRigUnit_SetTransform : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x004C   (0x0001)  
	bool                                               bInitial;                                                   // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004E   (0x0002)  MISSED
	FTransform                                         Value;                                                      // 0x0050   (0x0060)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x00B8   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetTranslation
/// Size: 0x0050 (0x000040 - 0x000090)
struct FRigUnit_SetTranslation : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x004C   (0x0001)  
	bool                                               bInitial;                                                   // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004E   (0x0002)  MISSED
	FVector                                            Value;                                                      // 0x0050   (0x0018)  
	float                                              Weight;                                                     // 0x0068   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0070   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetRotation
/// Size: 0x0060 (0x000040 - 0x0000A0)
struct FRigUnit_SetRotation : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x004C   (0x0001)  
	bool                                               bInitial;                                                   // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004E   (0x0002)  MISSED
	FQuat                                              Value;                                                      // 0x0050   (0x0020)  
	float                                              Weight;                                                     // 0x0070   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0074   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0075   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0078   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetScale
/// Size: 0x0050 (0x000040 - 0x000090)
struct FRigUnit_SetScale : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	EBoneGetterSetterMode                              Space;                                                      // 0x004C   (0x0001)  
	bool                                               bInitial;                                                   // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x004E   (0x0002)  MISSED
	FVector                                            Scale;                                                      // 0x0050   (0x0018)  
	float                                              Weight;                                                     // 0x0068   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0070   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetTransformArray
/// Size: 0x0040 (0x000040 - 0x000080)
struct FRigUnit_SetTransformArray : FRigUnitMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0040   (0x0010)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0050   (0x0001)  
	bool                                               bInitial;                                                   // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0058   (0x0010)  
	float                                              Weight;                                                     // 0x0068   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	TArray<FCachedRigElement>                          CachedIndex;                                                // 0x0070   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetTransformItemArray
/// Size: 0x0040 (0x000040 - 0x000080)
struct FRigUnit_SetTransformItemArray : FRigUnitMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0040   (0x0010)  
	EBoneGetterSetterMode                              Space;                                                      // 0x0050   (0x0001)  
	bool                                               bInitial;                                                   // 0x0051   (0x0001)  
	unsigned char                                      UnknownData00_5[0x6];                                       // 0x0052   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0058   (0x0010)  
	float                                              Weight;                                                     // 0x0068   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	TArray<FCachedRigElement>                          CachedIndex;                                                // 0x0070   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_UnsetCurveValue
/// Size: 0x0028 (0x000040 - 0x000068)
struct FRigUnit_UnsetCurveValue : FRigUnitMutable
{ 
	FName                                              Curve;                                                      // 0x0040   (0x0008)  
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0048   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Transform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_ToWorldSpace_Transform : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FTransform                                         World;                                                      // 0x0070   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Transform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_ToRigSpace_Transform : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FTransform                                         Global;                                                     // 0x0070   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Location
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_ToWorldSpace_Location : FRigUnit
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            World;                                                      // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Location
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_ToRigSpace_Location : FRigUnit
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Global;                                                     // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Rotation
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_ToWorldSpace_Rotation : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FQuat                                              World;                                                      // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Rotation
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_ToRigSpace_Rotation : FRigUnit
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FQuat                                              Global;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_BoneHarmonics_BoneTarget
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	float                                              Ratio;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_Harmonics_TargetItem
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_Harmonics_TargetItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	float                                              Ratio;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_WorkData
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigUnit_BoneHarmonics_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	FVector                                            WaveTime;                                                   // 0x0010   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics
/// Size: 0x00C0 (0x000040 - 0x000100)
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_BoneHarmonics_BoneTarget>          Bones;                                                      // 0x0040   (0x0010)  
	FVector                                            WaveSpeed;                                                  // 0x0050   (0x0018)  
	FVector                                            WaveFrequency;                                              // 0x0068   (0x0018)  
	FVector                                            WaveAmplitude;                                              // 0x0080   (0x0018)  
	FVector                                            WaveOffset;                                                 // 0x0098   (0x0018)  
	FVector                                            WaveNoise;                                                  // 0x00B0   (0x0018)  
	EControlRigAnimEasingType                          WaveEase;                                                   // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              WaveMinimum;                                                // 0x00CC   (0x0004)  
	float                                              WaveMaximum;                                                // 0x00D0   (0x0004)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x00D4   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00D5   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x00D6   (0x0002)  MISSED
	FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x00D8   (0x0028)  
};

/// Struct /Script/ControlRig.RigUnit_ItemHarmonics
/// Size: 0x00C0 (0x000040 - 0x000100)
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_Harmonics_TargetItem>              Targets;                                                    // 0x0040   (0x0010)  
	FVector                                            WaveSpeed;                                                  // 0x0050   (0x0018)  
	FVector                                            WaveFrequency;                                              // 0x0068   (0x0018)  
	FVector                                            WaveAmplitude;                                              // 0x0080   (0x0018)  
	FVector                                            WaveOffset;                                                 // 0x0098   (0x0018)  
	FVector                                            WaveNoise;                                                  // 0x00B0   (0x0018)  
	EControlRigAnimEasingType                          WaveEase;                                                   // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              WaveMinimum;                                                // 0x00CC   (0x0004)  
	float                                              WaveMaximum;                                                // 0x00D0   (0x0004)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00D5   (0x0003)  MISSED
	FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x00D8   (0x0028)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Reach
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigUnit_ChainHarmonics_Reach
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            ReachTarget;                                                // 0x0008   (0x0018)  
	FVector                                            ReachAxis;                                                  // 0x0020   (0x0018)  
	float                                              ReachMinimum;                                               // 0x0038   (0x0004)  
	float                                              ReachMaximum;                                               // 0x003C   (0x0004)  
	EControlRigAnimEasingType                          ReachEase;                                                  // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Wave
/// Size: 0x0078 (0x000000 - 0x000078)
struct FRigUnit_ChainHarmonics_Wave
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            WaveFrequency;                                              // 0x0008   (0x0018)  
	FVector                                            WaveAmplitude;                                              // 0x0020   (0x0018)  
	FVector                                            WaveOffset;                                                 // 0x0038   (0x0018)  
	FVector                                            WaveNoise;                                                  // 0x0050   (0x0018)  
	float                                              WaveMinimum;                                                // 0x0068   (0x0004)  
	float                                              WaveMaximum;                                                // 0x006C   (0x0004)  
	EControlRigAnimEasingType                          WaveEase;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
/// Size: 0x0058 (0x000000 - 0x000058)
struct FRigUnit_ChainHarmonics_Pendulum
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              PendulumStiffness;                                          // 0x0004   (0x0004)  
	FVector                                            PendulumGravity;                                            // 0x0008   (0x0018)  
	float                                              PendulumBlend;                                              // 0x0020   (0x0004)  
	float                                              PendulumDrag;                                               // 0x0024   (0x0004)  
	float                                              PendulumMinimum;                                            // 0x0028   (0x0004)  
	float                                              PendulumMaximum;                                            // 0x002C   (0x0004)  
	EControlRigAnimEasingType                          PendulumEase;                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            UnwindAxis;                                                 // 0x0038   (0x0018)  
	float                                              UnwindMinimum;                                              // 0x0050   (0x0004)  
	float                                              UnwindMaximum;                                              // 0x0054   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
/// Size: 0x0098 (0x000000 - 0x000098)
struct FRigUnit_ChainHarmonics_WorkData
{ 
	FVector                                            Time;                                                       // 0x0000   (0x0018)  
	TArray<FCachedRigElement>                          Items;                                                      // 0x0018   (0x0010)  
	TArray<float>                                      Ratio;                                                      // 0x0028   (0x0010)  
	TArray<FVector>                                    LocalTip;                                                   // 0x0038   (0x0010)  
	TArray<FVector>                                    PendulumTip;                                                // 0x0048   (0x0010)  
	TArray<FVector>                                    PendulumPosition;                                           // 0x0058   (0x0010)  
	TArray<FVector>                                    PendulumVelocity;                                           // 0x0068   (0x0010)  
	TArray<FVector>                                    HierarchyLine;                                              // 0x0078   (0x0010)  
	TArray<FVector>                                    VelocityLines;                                              // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics
/// Size: 0x02D0 (0x000040 - 0x000310)
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              ChainRoot;                                                  // 0x0040   (0x0008)  
	FVector                                            Speed;                                                      // 0x0048   (0x0018)  
	FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x0060   (0x0048)  
	FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x00A8   (0x0078)  
	FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x0120   (0x0088)  
	FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x01A8   (0x0058)  
	bool                                               bDrawDebug;                                                 // 0x0200   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0201   (0x000F)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x0210   (0x0060)  
	FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x0270   (0x0098)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0308   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
/// Size: 0x02D0 (0x000040 - 0x000310)
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     ChainRoot;                                                  // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FVector                                            Speed;                                                      // 0x0050   (0x0018)  
	FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x0068   (0x0048)  
	FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x00B0   (0x0078)  
	FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x0128   (0x0088)  
	FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x01B0   (0x0058)  
	bool                                               bDrawDebug;                                                 // 0x0208   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0209   (0x0007)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x0210   (0x0060)  
	FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x0270   (0x0098)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0308   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimBone_Target
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigUnit_AimBone_Target
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	FVector                                            Target;                                                     // 0x0020   (0x0018)  
	EControlRigVectorKind                              Kind;                                                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FName                                              Space;                                                      // 0x003C   (0x0008)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimItem_Target
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigUnit_AimItem_Target
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	FVector                                            Target;                                                     // 0x0020   (0x0018)  
	EControlRigVectorKind                              Kind;                                                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FRigElementKey                                     Space;                                                      // 0x003C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_AimBone_DebugSettings
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigUnit_AimBone_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_AimBoneMath
/// Size: 0x0218 (0x000008 - 0x000220)
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         InputTransform;                                             // 0x0010   (0x0060)  
	FRigUnit_AimItem_Target                            Primary;                                                    // 0x0070   (0x0048)  
	FRigUnit_AimItem_Target                            Secondary;                                                  // 0x00B8   (0x0048)  
	float                                              Weight;                                                     // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0104   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0110   (0x0060)  
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x0170   (0x0070)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x01E0   (0x0020)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0200   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_AimBone
/// Size: 0x0170 (0x000040 - 0x0001B0)
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              bone;                                                       // 0x0040   (0x0008)  
	FRigUnit_AimBone_Target                            Primary;                                                    // 0x0048   (0x0048)  
	FRigUnit_AimBone_Target                            Secondary;                                                  // 0x0090   (0x0048)  
	float                                              Weight;                                                     // 0x00D8   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00DC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00DD   (0x0003)  MISSED
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00E0   (0x0070)  
	FCachedRigElement                                  CachedBoneIndex;                                            // 0x0150   (0x0020)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0170   (0x0020)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0190   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_AimItem
/// Size: 0x0180 (0x000040 - 0x0001C0)
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x004C   (0x0004)  MISSED
	FRigUnit_AimItem_Target                            Primary;                                                    // 0x0050   (0x0048)  
	FRigUnit_AimItem_Target                            Secondary;                                                  // 0x0098   (0x0048)  
	float                                              Weight;                                                     // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00E4   (0x000C)  MISSED
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x00F0   (0x0070)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0160   (0x0020)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0180   (0x0020)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x01A0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorldUp
/// Size: 0x0028 (0x000000 - 0x000028)
struct FRigUnit_AimConstraint_WorldUp
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	EControlRigVectorKind                              Kind;                                                       // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	FRigElementKey                                     Space;                                                      // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_AdvancedSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FRigUnit_AimConstraint_AdvancedSettings
{ 
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x0000   (0x0070)  
	EEulerRotationOrder                                RotationOrderForFilter;                                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.ConstraintParent
/// Size: 0x0010 (0x000000 - 0x000010)
struct FConstraintParent
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	float                                              Weight;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_AimConstraintLocalSpaceOffset
/// Size: 0x0160 (0x000040 - 0x0001A0)
struct FRigUnit_AimConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x004C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x004D   (0x0003)  
	FVector                                            AimAxis;                                                    // 0x0050   (0x0018)  
	FVector                                            UpAxis;                                                     // 0x0068   (0x0018)  
	FRigUnit_AimConstraint_WorldUp                     WorldUp;                                                    // 0x0080   (0x0028)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x00B8   (0x0008)  MISSED
	FRigUnit_AimConstraint_AdvancedSettings            AdvancedSettings;                                           // 0x00C0   (0x0080)  
	float                                              Weight;                                                     // 0x0140   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0144   (0x0004)  MISSED
	FCachedRigElement                                  WorldUpSpaceCache;                                          // 0x0148   (0x0020)  
	FCachedRigElement                                  ChildCache;                                                 // 0x0168   (0x0020)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0188   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0198   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimit
/// Size: 0x000C (0x000000 - 0x00000C)
struct FRigUnit_CCDIK_RotationLimit
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	float                                              Limit;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_CCDIK_RotationLimitPerItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	float                                              Limit;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigUnit_CCDIK_WorkData
{ 
	TArray<FCCDIKChainLink>                            Chain;                                                      // 0x0000   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)  
	TArray<int32_t>                                    RotationLimitIndex;                                         // 0x0020   (0x0010)  
	TArray<float>                                      RotationLimitsPerItem;                                      // 0x0030   (0x0010)  
	FCachedRigElement                                  CachedEffector;                                             // 0x0040   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0040   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0048   (0x0008)  
	FTransform                                         EffectorTransform;                                          // 0x0050   (0x0060)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00B8   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimit>               RotationLimits;                                             // 0x00C8   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x00E0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIKPerItem
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0040   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x0050   (0x0060)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00B8   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimitPerItem>        RotationLimits;                                             // 0x00C8   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x00E0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIKItemArray
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_CCDIKItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0040   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x0050   (0x0060)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x00B8   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimitPerItem>        RotationLimits;                                             // 0x00C8   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00D9   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x00E0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_Rotation
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigUnit_DistributeRotation_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0020)  
	float                                              Ratio;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_WorkData
/// Size: 0x0050 (0x000000 - 0x000050)
struct FRigUnit_DistributeRotation_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	TArray<int32_t>                                    ItemRotationA;                                              // 0x0010   (0x0010)  
	TArray<int32_t>                                    ItemRotationB;                                              // 0x0020   (0x0010)  
	TArray<float>                                      ItemRotationT;                                              // 0x0030   (0x0010)  
	TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation
/// Size: 0x0080 (0x000040 - 0x0000C0)
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0040   (0x0008)  
	FName                                              EndBone;                                                    // 0x0048   (0x0008)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0050   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0064   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0068   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0069   (0x0007)  MISSED
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0070   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForCollection
/// Size: 0x0078 (0x000040 - 0x0000B8)
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0040   (0x0010)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0050   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0064   (0x0004)  
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0068   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForItemArray
/// Size: 0x0078 (0x000040 - 0x0000B8)
struct FRigUnit_DistributeRotationForItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0040   (0x0010)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0050   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0064   (0x0004)  
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0068   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_FABRIK_WorkData
/// Size: 0x0040 (0x000000 - 0x000040)
struct FRigUnit_FABRIK_WorkData
{ 
	TArray<FFABRIKChainLink>                           Chain;                                                      // 0x0000   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)  
	FCachedRigElement                                  CachedEffector;                                             // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_FABRIK
/// Size: 0x00D0 (0x000040 - 0x000110)
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0040   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0048   (0x0008)  
	FTransform                                         EffectorTransform;                                          // 0x0050   (0x0060)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x00BC   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x00C0   (0x0040)  
	bool                                               bSetEffectorTransform;                                      // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIKPerItem
/// Size: 0x00D0 (0x000040 - 0x000110)
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0040   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x0050   (0x0060)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x00BC   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x00C0   (0x0040)  
	bool                                               bSetEffectorTransform;                                      // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIKItemArray
/// Size: 0x00D0 (0x000040 - 0x000110)
struct FRigUnit_FABRIKItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0040   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x0050   (0x0060)  
	float                                              Precision;                                                  // 0x00B0   (0x0004)  
	float                                              Weight;                                                     // 0x00B4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x00BC   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x00C0   (0x0040)  
	bool                                               bSetEffectorTransform;                                      // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve
/// Size: 0x0220 (0x000040 - 0x000260)
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0040   (0x0008)  
	FName                                              EndBone;                                                    // 0x0048   (0x0008)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0050   (0x0060)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x00B4   (0x0004)  
	float                                              Maximum;                                                    // 0x00B8   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x00BC   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x00C0   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x00D8   (0x0018)  
	FVector                                            PoleVectorPosition;                                         // 0x00F0   (0x0018)  
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x0108   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0118   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0119   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x011C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0120   (0x0001)  
	unsigned char                                      UnknownData02_5[0xF];                                       // 0x0121   (0x000F)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0130   (0x0090)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x01C0   (0x0098)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0258   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurvePerItem
/// Size: 0x0220 (0x000040 - 0x000260)
struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0040   (0x0010)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0050   (0x0060)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x00B4   (0x0004)  
	float                                              Maximum;                                                    // 0x00B8   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x00BC   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x00C0   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x00D8   (0x0018)  
	FVector                                            PoleVectorPosition;                                         // 0x00F0   (0x0018)  
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x0108   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0118   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0119   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x011C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0120   (0x0001)  
	unsigned char                                      UnknownData02_5[0xF];                                       // 0x0121   (0x000F)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0130   (0x0090)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x01C0   (0x0098)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0258   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurveItemArray
/// Size: 0x0220 (0x000040 - 0x000260)
struct FRigUnit_FitChainToCurveItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0040   (0x0010)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0050   (0x0060)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x00B4   (0x0004)  
	float                                              Maximum;                                                    // 0x00B8   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x00BC   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x00C0   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x00D8   (0x0018)  
	FVector                                            PoleVectorPosition;                                         // 0x00F0   (0x0018)  
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x0108   (0x0010)  
	EControlRigAnimEasingType                          RotationEaseType;                                           // 0x0118   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0119   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x011C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0120   (0x0001)  
	unsigned char                                      UnknownData02_5[0xF];                                       // 0x0121   (0x000F)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0130   (0x0090)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x01C0   (0x0098)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0258   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigUnit_ModifyBoneTransforms_PerBone
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRigUnit_ModifyTransforms_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_WorkData
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData
{ 
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms
/// Size: 0x0030 (0x000040 - 0x000070)
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_ModifyBoneTransforms_PerBone>      BoneToModify;                                               // 0x0040   (0x0010)  
	float                                              Weight;                                                     // 0x0050   (0x0004)  
	float                                              WeightMinimum;                                              // 0x0054   (0x0004)  
	float                                              WeightMaximum;                                              // 0x0058   (0x0004)  
	EControlRigModifyBoneMode                          Mode;                                                       // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	FRigUnit_ModifyBoneTransforms_WorkData             WorkData;                                                   // 0x0060   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_PerItem
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigUnit_ModifyTransforms_PerItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms
/// Size: 0x0030 (0x000040 - 0x000070)
struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_ModifyTransforms_PerItem>          ItemToModify;                                               // 0x0040   (0x0010)  
	float                                              Weight;                                                     // 0x0050   (0x0004)  
	float                                              WeightMinimum;                                              // 0x0054   (0x0004)  
	float                                              WeightMaximum;                                              // 0x0058   (0x0004)  
	EControlRigModifyBoneMode                          Mode;                                                       // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	FRigUnit_ModifyTransforms_WorkData                 WorkData;                                                   // 0x0060   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_WorkData
/// Size: 0x0068 (0x000000 - 0x000068)
struct FRigUnit_MultiFABRIK_WorkData
{ 
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_EndEffector
/// Size: 0x0020 (0x000000 - 0x000020)
struct FRigUnit_MultiFABRIK_EndEffector
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK
/// Size: 0x0090 (0x000040 - 0x0000D0)
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              RootBone;                                                   // 0x0040   (0x0008)  
	TArray<FRigUnit_MultiFABRIK_EndEffector>           Effectors;                                                  // 0x0048   (0x0010)  
	float                                              Precision;                                                  // 0x0058   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FRigUnit_MultiFABRIK_WorkData                      WorkData;                                                   // 0x0068   (0x0068)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChain_WorkData
/// Size: 0x0048 (0x000000 - 0x000048)
struct FRigUnit_SlideChain_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      ItemSegments;                                               // 0x0008   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0018   (0x0010)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)  
	TArray<FTransform>                                 BlendedTransforms;                                          // 0x0038   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChain
/// Size: 0x0060 (0x000040 - 0x0000A0)
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0040   (0x0008)  
	FName                                              EndBone;                                                    // 0x0048   (0x0008)  
	float                                              SlideAmount;                                                // 0x0050   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0058   (0x0048)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChainPerItem
/// Size: 0x0060 (0x000040 - 0x0000A0)
struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0040   (0x0010)  
	float                                              SlideAmount;                                                // 0x0050   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0058   (0x0048)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChainItemArray
/// Size: 0x0060 (0x000040 - 0x0000A0)
struct FRigUnit_SlideChainItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0040   (0x0010)  
	float                                              SlideAmount;                                                // 0x0050   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0055   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0058   (0x0048)  
};

/// Struct /Script/ControlRig.RegionScaleFactors
/// Size: 0x0010 (0x000000 - 0x000010)
struct FRegionScaleFactors
{ 
	float                                              PositiveWidth;                                              // 0x0000   (0x0004)  
	float                                              NegativeWidth;                                              // 0x0004   (0x0004)  
	float                                              PositiveHeight;                                             // 0x0008   (0x0004)  
	float                                              NegativeHeight;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.SphericalRegion
/// Size: 0x0014 (0x000000 - 0x000014)
struct FSphericalRegion
{ 
	unsigned char                                      UnknownData00_1[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Struct /Script/ControlRig.SphericalPoseReaderDebugSettings
/// Size: 0x0010 (0x000000 - 0x000010)
struct FSphericalPoseReaderDebugSettings
{ 
	bool                                               bDrawDebug;                                                 // 0x0000   (0x0001)  
	bool                                               bDraw2D;                                                    // 0x0001   (0x0001)  
	bool                                               bDrawLocalAxes;                                             // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              DebugScale;                                                 // 0x0004   (0x0004)  
	int32_t                                            DebugSegments;                                              // 0x0008   (0x0004)  
	float                                              DebugThickness;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SphericalPoseReader
/// Size: 0x01A0 (0x000040 - 0x0001E0)
struct FRigUnit_SphericalPoseReader : FRigUnit_HighlevelBaseMutable
{ 
	float                                              OutputParam;                                                // 0x0040   (0x0004)  
	FRigElementKey                                     DriverItem;                                                 // 0x0044   (0x000C)  
	FVector                                            DriverAxis;                                                 // 0x0050   (0x0018)  
	FVector                                            RotationOffset;                                             // 0x0068   (0x0018)  
	float                                              ActiveRegionSize;                                           // 0x0080   (0x0004)  
	FRegionScaleFactors                                ActiveRegionScaleFactors;                                   // 0x0084   (0x0010)  
	float                                              FalloffSize;                                                // 0x0094   (0x0004)  
	FRegionScaleFactors                                FalloffRegionScaleFactors;                                  // 0x0098   (0x0010)  
	bool                                               FlipWidthScaling;                                           // 0x00A8   (0x0001)  
	bool                                               FlipHeightScaling;                                          // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x00AA   (0x0002)  MISSED
	FRigElementKey                                     OptionalParentItem;                                         // 0x00AC   (0x000C)  
	FSphericalPoseReaderDebugSettings                  Debug;                                                      // 0x00B8   (0x0010)  
	FSphericalRegion                                   InnerRegion;                                                // 0x00C8   (0x0014)  
	FSphericalRegion                                   OuterRegion;                                                // 0x00DC   (0x0014)  
	FVector                                            DriverNormal;                                               // 0x00F0   (0x0018)  
	FVector                                            Driver2D;                                                   // 0x0108   (0x0018)  
	FCachedRigElement                                  DriverCache;                                                // 0x0120   (0x0020)  
	FCachedRigElement                                  OptionalParentCache;                                        // 0x0140   (0x0020)  
	FTransform                                         LocalDriverTransformInit;                                   // 0x0160   (0x0060)  
	FVector                                            CachedRotationOffset;                                       // 0x01C0   (0x0018)  
	bool                                               bCachedInitTransforms;                                      // 0x01D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x01D9   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_DebugSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FRigUnit_SpringIK_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_WorkData
/// Size: 0x00B8 (0x000000 - 0x0000B8)
struct FRigUnit_SpringIK_WorkData
{ 
	TArray<FCachedRigElement>                          CachedBones;                                                // 0x0000   (0x0010)  
	FCachedRigElement                                  CachedPoleVector;                                           // 0x0010   (0x0020)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0030   (0x0010)  
	FCRSimPointContainer                               Simulation;                                                 // 0x0040   (0x0078)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK
/// Size: 0x01D0 (0x000040 - 0x000210)
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0040   (0x0008)  
	FName                                              EndBone;                                                    // 0x0048   (0x0008)  
	float                                              HierarchyStrength;                                          // 0x0050   (0x0004)  
	float                                              EffectorStrength;                                           // 0x0054   (0x0004)  
	float                                              EffectorRatio;                                              // 0x0058   (0x0004)  
	float                                              RootStrength;                                               // 0x005C   (0x0004)  
	float                                              RootRatio;                                                  // 0x0060   (0x0004)  
	float                                              Damping;                                                    // 0x0064   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x0068   (0x0018)  
	bool                                               bFlipPolePlane;                                             // 0x0080   (0x0001)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0082   (0x0002)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x0084   (0x0008)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	FVector                                            PrimaryAxis;                                                // 0x0090   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x00A8   (0x0018)  
	bool                                               bLiveSimulation;                                            // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x00C4   (0x0004)  
	bool                                               bLimitLocalPosition;                                        // 0x00C8   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData03_5[0x6];                                       // 0x00CA   (0x0006)  MISSED
	FRigUnit_SpringIK_DebugSettings                    DebugSettings;                                              // 0x00D0   (0x0080)  
	FRigUnit_SpringIK_WorkData                         WorkData;                                                   // 0x0150   (0x00B8)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0208   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.ConstraintTarget
/// Size: 0x0070 (0x000000 - 0x000070)
struct FConstraintTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	float                                              Weight;                                                     // 0x0060   (0x0004)  
	bool                                               bMaintainOffset;                                            // 0x0064   (0x0001)  
	FTransformFilter                                   Filter;                                                     // 0x0065   (0x0009)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x006E   (0x0002)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
struct FRigUnit_TransformConstraint_WorkData
{ 
	TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)  
	SDK_UNDEFINED(80,2148) /* TMap<int32_t, int32_t> */ __um(ConstraintDataToTargets);                             // 0x0010   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint
/// Size: 0x00F0 (0x000040 - 0x000130)
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              bone;                                                       // 0x0040   (0x0008)  
	ETransformSpaceMode                                BaseTransformSpace;                                         // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0049   (0x0007)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0050   (0x0060)  
	FName                                              BaseBone;                                                   // 0x00B0   (0x0008)  
	TArray<FConstraintTarget>                          Targets;                                                    // 0x00B8   (0x0010)  
	bool                                               bUseInitialTransforms;                                      // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x00D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraintPerItem
/// Size: 0x0100 (0x000040 - 0x000140)
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0040   (0x000C)  
	ETransformSpaceMode                                BaseTransformSpace;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0050   (0x0060)  
	FRigElementKey                                     BaseItem;                                                   // 0x00B0   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00BC   (0x0004)  MISSED
	TArray<FConstraintTarget>                          Targets;                                                    // 0x00C0   (0x0010)  
	bool                                               bUseInitialTransforms;                                      // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x00D1   (0x0007)  MISSED
	FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x00D8   (0x0060)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraint_AdvancedSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FRigUnit_ParentConstraint_AdvancedSettings
{ 
	EConstraintInterpType                              InterpolationType;                                          // 0x0000   (0x0001)  
	EEulerRotationOrder                                RotationOrderForFilter;                                     // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraint
/// Size: 0x0060 (0x000040 - 0x0000A0)
struct FRigUnit_ParentConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x004C   (0x0001)  
	FTransformFilter                                   Filter;                                                     // 0x004D   (0x0009)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0056   (0x0002)  MISSED
	TArray<FConstraintParent>                          Parents;                                                    // 0x0058   (0x0010)  
	FRigUnit_ParentConstraint_AdvancedSettings         AdvancedSettings;                                           // 0x0068   (0x0002)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x006A   (0x0002)  MISSED
	float                                              Weight;                                                     // 0x006C   (0x0004)  
	FCachedRigElement                                  ChildCache;                                                 // 0x0070   (0x0020)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0090   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PositionConstraint
/// Size: 0x0028 (0x000040 - 0x000068)
struct FRigUnit_PositionConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x004C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x004D   (0x0003)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0050   (0x0010)  
	float                                              Weight;                                                     // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
/// Size: 0x0058 (0x000040 - 0x000098)
struct FRigUnit_PositionConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x004C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x004D   (0x0003)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0050   (0x0010)  
	float                                              Weight;                                                     // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FCachedRigElement                                  ChildCache;                                                 // 0x0068   (0x0020)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraint_AdvancedSettings
/// Size: 0x0002 (0x000000 - 0x000002)
struct FRigUnit_RotationConstraint_AdvancedSettings
{ 
	EConstraintInterpType                              InterpolationType;                                          // 0x0000   (0x0001)  
	EEulerRotationOrder                                RotationOrderForFilter;                                     // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraint
/// Size: 0x0028 (0x000040 - 0x000068)
struct FRigUnit_RotationConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x004C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x004D   (0x0003)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0050   (0x0010)  
	FRigUnit_RotationConstraint_AdvancedSettings       AdvancedSettings;                                           // 0x0060   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0062   (0x0002)  MISSED
	float                                              Weight;                                                     // 0x0064   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
/// Size: 0x0058 (0x000040 - 0x000098)
struct FRigUnit_RotationConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x004C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x004D   (0x0003)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0050   (0x0010)  
	FRigUnit_RotationConstraint_AdvancedSettings       AdvancedSettings;                                           // 0x0060   (0x0002)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0062   (0x0002)  MISSED
	float                                              Weight;                                                     // 0x0064   (0x0004)  
	FCachedRigElement                                  ChildCache;                                                 // 0x0068   (0x0020)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ScaleConstraint
/// Size: 0x0028 (0x000040 - 0x000068)
struct FRigUnit_ScaleConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x004C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x004D   (0x0003)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0050   (0x0010)  
	float                                              Weight;                                                     // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
/// Size: 0x0058 (0x000040 - 0x000098)
struct FRigUnit_ScaleConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0040   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x004C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x004D   (0x0003)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0050   (0x0010)  
	float                                              Weight;                                                     // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FCachedRigElement                                  ChildCache;                                                 // 0x0068   (0x0020)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBones_WorkData
/// Size: 0x0030 (0x000000 - 0x000030)
struct FRigUnit_TwistBones_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	TArray<float>                                      ItemRatios;                                                 // 0x0010   (0x0010)  
	TArray<FTransform>                                 ItemTransforms;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBones
/// Size: 0x0080 (0x000040 - 0x0000C0)
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0040   (0x0008)  
	FName                                              EndBone;                                                    // 0x0048   (0x0008)  
	FVector                                            TwistAxis;                                                  // 0x0050   (0x0018)  
	FVector                                            PoleAxis;                                                   // 0x0068   (0x0018)  
	EControlRigAnimEasingType                          TwistEaseType;                                              // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0084   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x0090   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBonesPerItem
/// Size: 0x0080 (0x000040 - 0x0000C0)
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0040   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x0050   (0x0018)  
	FVector                                            PoleAxis;                                                   // 0x0068   (0x0018)  
	EControlRigAnimEasingType                          TwistEaseType;                                              // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0084   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0089   (0x0007)  MISSED
	FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x0090   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
/// Size: 0x0070 (0x000000 - 0x000070)
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple
/// Size: 0x01F0 (0x000040 - 0x000230)
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              BoneA;                                                      // 0x0040   (0x0008)  
	FName                                              BoneB;                                                      // 0x0048   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0050   (0x0008)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FTransform                                         Effector;                                                   // 0x0060   (0x0060)  
	FVector                                            PrimaryAxis;                                                // 0x00C0   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x00D8   (0x0018)  
	float                                              SecondaryAxisWeight;                                        // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x00F4   (0x0004)  MISSED
	FVector                                            PoleVector;                                                 // 0x00F8   (0x0018)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x0110   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0111   (0x0003)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x0114   (0x0008)  
	bool                                               bEnableStretch;                                             // 0x011C   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x011D   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0120   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0124   (0x0004)  
	float                                              Weight;                                                     // 0x0128   (0x0004)  
	float                                              BoneALength;                                                // 0x012C   (0x0004)  
	float                                              BoneBLength;                                                // 0x0130   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0134   (0x0001)  
	unsigned char                                      UnknownData04_5[0xB];                                       // 0x0135   (0x000B)  MISSED
	FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x0140   (0x0070)  
	FCachedRigElement                                  CachedBoneAIndex;                                           // 0x01B0   (0x0020)  
	FCachedRigElement                                  CachedBoneBIndex;                                           // 0x01D0   (0x0020)  
	FCachedRigElement                                  CachedEffectorBoneIndex;                                    // 0x01F0   (0x0020)  
	FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x0210   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
/// Size: 0x0200 (0x000040 - 0x000240)
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     ItemA;                                                      // 0x0040   (0x000C)  
	FRigElementKey                                     ItemB;                                                      // 0x004C   (0x000C)  
	FRigElementKey                                     EffectorItem;                                               // 0x0058   (0x000C)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0064   (0x000C)  MISSED
	FTransform                                         Effector;                                                   // 0x0070   (0x0060)  
	FVector                                            PrimaryAxis;                                                // 0x00D0   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x00E8   (0x0018)  
	float                                              SecondaryAxisWeight;                                        // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0104   (0x0004)  MISSED
	FVector                                            PoleVector;                                                 // 0x0108   (0x0018)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x0120   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0121   (0x0003)  MISSED
	FRigElementKey                                     PoleVectorSpace;                                            // 0x0124   (0x000C)  
	bool                                               bEnableStretch;                                             // 0x0130   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0131   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0134   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0138   (0x0004)  
	float                                              Weight;                                                     // 0x013C   (0x0004)  
	float                                              ItemALength;                                                // 0x0140   (0x0004)  
	float                                              ItemBLength;                                                // 0x0144   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0148   (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0149   (0x0007)  MISSED
	FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x0150   (0x0070)  
	FCachedRigElement                                  CachedItemAIndex;                                           // 0x01C0   (0x0020)  
	FCachedRigElement                                  CachedItemBIndex;                                           // 0x01E0   (0x0020)  
	FCachedRigElement                                  CachedEffectorItemIndex;                                    // 0x0200   (0x0020)  
	FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x0220   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase
{ 
	FVector                                            Root;                                                       // 0x0008   (0x0018)  
	FVector                                            PoleVector;                                                 // 0x0020   (0x0018)  
	FVector                                            Effector;                                                   // 0x0038   (0x0018)  
	bool                                               bEnableStretch;                                             // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0054   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0058   (0x0004)  
	float                                              BoneALength;                                                // 0x005C   (0x0004)  
	float                                              BoneBLength;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x0064   (0x0004)  MISSED
	FVector                                            Elbow;                                                      // 0x0068   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
/// Size: 0x0198 (0x000008 - 0x0001A0)
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Root;                                                       // 0x0010   (0x0060)  
	FVector                                            PoleVector;                                                 // 0x0070   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0088   (0x0008)  MISSED
	FTransform                                         Effector;                                                   // 0x0090   (0x0060)  
	FVector                                            PrimaryAxis;                                                // 0x00F0   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0108   (0x0018)  
	float                                              SecondaryAxisWeight;                                        // 0x0120   (0x0004)  
	bool                                               bEnableStretch;                                             // 0x0124   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0125   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0128   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x012C   (0x0004)  
	float                                              BoneALength;                                                // 0x0130   (0x0004)  
	float                                              BoneBLength;                                                // 0x0134   (0x0004)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0138   (0x0008)  MISSED
	FTransform                                         Elbow;                                                      // 0x0140   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathBoolBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstant
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	bool                                               Result;                                                     // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBinaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolBinaryAggregateOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolBinaryAggregateOp : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstTrue
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolConstTrue : FRigUnit_MathBoolConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolConstFalse
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolConstFalse : FRigUnit_MathBoolConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNot
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolNot : FRigUnit_MathBoolUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolAnd
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolAnd : FRigUnit_MathBoolBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNand
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolNand : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNand2
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolNand2 : FRigUnit_MathBoolBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolOr
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathBoolOr : FRigUnit_MathBoolBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathBoolEquals
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolNotEquals
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolToggled
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolToggled : FRigUnit_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	bool                                               Toggled;                                                    // 0x0009   (0x0001)  
	bool                                               Initialized;                                                // 0x000A   (0x0001)  
	bool                                               LastValue;                                                  // 0x000B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolFlipFlop
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathBoolFlipFlop : FRigUnit_MathBoolBase
{ 
	bool                                               StartValue;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              Duration;                                                   // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	bool                                               LastValue;                                                  // 0x0011   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0012   (0x0002)  MISSED
	float                                              TimeLeft;                                                   // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathBoolOnce
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathBoolOnce : FRigUnit_MathBoolBase
{ 
	float                                              Duration;                                                   // 0x0008   (0x0004)  
	bool                                               Result;                                                     // 0x000C   (0x0001)  
	bool                                               LastValue;                                                  // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x000E   (0x0002)  MISSED
	float                                              TimeLeft;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathBoolToFloat
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolToFloat : FRigUnit_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathBoolToInteger
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathBoolToInteger : FRigUnit_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathColorBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathColorBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorBinaryOp
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	FLinearColor                                       Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathColorBinaryAggregateOp
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_MathColorBinaryAggregateOp : FRigUnit_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	FLinearColor                                       Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathColorFromFloat
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x000C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathColorAdd
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathColorAdd : FRigUnit_MathColorBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorSub
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathColorSub : FRigUnit_MathColorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorMul
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathColorMul : FRigUnit_MathColorBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathColorLerp
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	float                                              T;                                                          // 0x0028   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x002C   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathDoubleBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleConstant
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathDoubleConstant : FRigUnit_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleUnaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathDoubleUnaryOp : FRigUnit_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Result;                                                     // 0x0010   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleBinaryOp
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathDoubleBinaryOp : FRigUnit_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             Result;                                                     // 0x0018   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleBinaryAggregateOp
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathDoubleBinaryAggregateOp : FRigUnit_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             Result;                                                     // 0x0018   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleConstPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathDoubleConstPi : FRigUnit_MathDoubleConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleConstHalfPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathDoubleConstHalfPi : FRigUnit_MathDoubleConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleConstTwoPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathDoubleConstTwoPi : FRigUnit_MathDoubleConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleConstE
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathDoubleConstE : FRigUnit_MathDoubleConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleAdd
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathDoubleAdd : FRigUnit_MathDoubleBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleSub
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathDoubleSub : FRigUnit_MathDoubleBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleMul
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathDoubleMul : FRigUnit_MathDoubleBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleDiv
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathDoubleDiv : FRigUnit_MathDoubleBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleMod
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathDoubleMod : FRigUnit_MathDoubleBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleMin
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathDoubleMin : FRigUnit_MathDoubleBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleMax
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathDoubleMax : FRigUnit_MathDoubleBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoublePow
/// Size: 0x0000 (0x000020 - 0x000020)
struct FRigUnit_MathDoublePow : FRigUnit_MathDoubleBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleSqrt
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathDoubleSqrt : FRigUnit_MathDoubleUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleNegate
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathDoubleNegate : FRigUnit_MathDoubleUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleAbs
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathDoubleAbs : FRigUnit_MathDoubleUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleFloor
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathDoubleFloor : FRigUnit_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Result;                                                     // 0x0010   (0x0008)  
	int32_t                                            Int;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleCeil
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathDoubleCeil : FRigUnit_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Result;                                                     // 0x0010   (0x0008)  
	int32_t                                            Int;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleRound
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathDoubleRound : FRigUnit_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Result;                                                     // 0x0010   (0x0008)  
	int32_t                                            Int;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleToInt
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathDoubleToInt : FRigUnit_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	int32_t                                            Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleSign
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathDoubleSign : FRigUnit_MathDoubleUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleClamp
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathDoubleClamp : FRigUnit_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Minimum;                                                    // 0x0010   (0x0008)  
	double                                             Maximum;                                                    // 0x0018   (0x0008)  
	double                                             Result;                                                     // 0x0020   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleLerp
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathDoubleLerp : FRigUnit_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             T;                                                          // 0x0018   (0x0008)  
	double                                             Result;                                                     // 0x0020   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleRemap
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathDoubleRemap : FRigUnit_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             SourceMinimum;                                              // 0x0010   (0x0008)  
	double                                             SourceMaximum;                                              // 0x0018   (0x0008)  
	double                                             TargetMinimum;                                              // 0x0020   (0x0008)  
	double                                             TargetMaximum;                                              // 0x0028   (0x0008)  
	bool                                               bClamp;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	double                                             Result;                                                     // 0x0038   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleEquals
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathDoubleEquals : FRigUnit_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleNotEquals
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathDoubleNotEquals : FRigUnit_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleGreater
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathDoubleGreater : FRigUnit_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleLess
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathDoubleLess : FRigUnit_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleGreaterEqual
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathDoubleGreaterEqual : FRigUnit_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleLessEqual
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathDoubleLessEqual : FRigUnit_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleIsNearlyZero
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_MathDoubleIsNearlyZero : FRigUnit_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Tolerance;                                                  // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleIsNearlyEqual
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathDoubleIsNearlyEqual : FRigUnit_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             Tolerance;                                                  // 0x0018   (0x0008)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleDeg
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathDoubleDeg : FRigUnit_MathDoubleUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleRad
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathDoubleRad : FRigUnit_MathDoubleUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleSin
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathDoubleSin : FRigUnit_MathDoubleUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleCos
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathDoubleCos : FRigUnit_MathDoubleUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleTan
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathDoubleTan : FRigUnit_MathDoubleUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleAsin
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathDoubleAsin : FRigUnit_MathDoubleUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleAcos
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathDoubleAcos : FRigUnit_MathDoubleUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleAtan
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathDoubleAtan : FRigUnit_MathDoubleUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleLawOfCosine
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathDoubleLawOfCosine : FRigUnit_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             C;                                                          // 0x0018   (0x0008)  
	double                                             AlphaAngle;                                                 // 0x0020   (0x0008)  
	double                                             BetaAngle;                                                  // 0x0028   (0x0008)  
	double                                             GammaAngle;                                                 // 0x0030   (0x0008)  
	bool                                               bValid;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDoubleExponential
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathDoubleExponential : FRigUnit_MathDoubleUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathFloatBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstant
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBinaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatBinaryAggregateOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatBinaryAggregateOp : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatConstPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstHalfPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatConstHalfPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstTwoPi
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatConstTwoPi : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatConstE
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatConstE : FRigUnit_MathFloatConstant
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAdd
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatAdd : FRigUnit_MathFloatBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSub
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatSub : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMul
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatMul : FRigUnit_MathFloatBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDiv
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatDiv : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMod
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatMod : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMin
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatMin : FRigUnit_MathFloatBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatMax
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatMax : FRigUnit_MathFloatBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatPow
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathFloatPow : FRigUnit_MathFloatBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSqrt
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatSqrt : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNegate
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatNegate : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAbs
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatAbs : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatFloor
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCeil
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRound
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatRound : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            Int;                                                        // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatToInt
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathFloatToInt : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSign
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatSign : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatClamp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLerp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              T;                                                          // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRemap
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SourceMinimum;                                              // 0x000C   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0010   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0014   (0x0004)  
	float                                              TargetMaximum;                                              // 0x0018   (0x0004)  
	bool                                               bClamp;                                                     // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatNotEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreater
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLess
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatGreaterEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLessEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyZero
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Tolerance;                                                  // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatIsNearlyEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Tolerance;                                                  // 0x0010   (0x0004)  
	bool                                               Result;                                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSelectBool
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              IfTrue;                                                     // 0x000C   (0x0004)  
	float                                              IfFalse;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathFloatDeg
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatDeg : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatRad
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatRad : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatSin
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatSin : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatCos
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatCos : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatTan
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatTan : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAsin
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatAsin : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAcos
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatAcos : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatAtan
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatAtan : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathFloatLawOfCosine
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              C;                                                          // 0x0010   (0x0004)  
	float                                              AlphaAngle;                                                 // 0x0014   (0x0004)  
	float                                              BetaAngle;                                                  // 0x0018   (0x0004)  
	float                                              GammaAngle;                                                 // 0x001C   (0x0004)  
	bool                                               bValid;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathFloatExponential
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathFloatExponential : FRigUnit_MathFloatUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathIntBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntUnaryOp
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathIntUnaryOp : FRigUnit_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathIntBinaryOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntBinaryOp : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	int32_t                                            Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntBinaryAggregateOp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntBinaryAggregateOp : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	int32_t                                            Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntAdd
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntAdd : FRigUnit_MathIntBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntSub
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntSub : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMul
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntMul : FRigUnit_MathIntBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntDiv
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntDiv : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMod
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntMod : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMin
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntMin : FRigUnit_MathIntBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntMax
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntMax : FRigUnit_MathIntBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntPow
/// Size: 0x0000 (0x000018 - 0x000018)
struct FRigUnit_MathIntPow : FRigUnit_MathIntBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntNegate
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathIntNegate : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntAbs
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathIntAbs : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntToFloat
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathIntToFloat : FRigUnit_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathIntSign
/// Size: 0x0000 (0x000010 - 0x000010)
struct FRigUnit_MathIntSign : FRigUnit_MathIntUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathIntClamp
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntClamp : FRigUnit_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Minimum;                                                    // 0x000C   (0x0004)  
	int32_t                                            Maximum;                                                    // 0x0010   (0x0004)  
	int32_t                                            Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MathIntEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntEquals : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntNotEquals
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntNotEquals : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntGreater
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntGreater : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntLess
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntLess : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntGreaterEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntGreaterEqual : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathIntLessEqual
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_MathIntLessEqual : FRigUnit_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathMatrixBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathMatrixBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathMatrixUnaryOp
/// Size: 0x0108 (0x000008 - 0x000110)
struct FRigUnit_MathMatrixUnaryOp : FRigUnit_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            Value;                                                      // 0x0010   (0x0080)  
	FMatrix                                            Result;                                                     // 0x0090   (0x0080)  
};

/// Struct /Script/ControlRig.RigUnit_MathMatrixBinaryOp
/// Size: 0x0188 (0x000008 - 0x000190)
struct FRigUnit_MathMatrixBinaryOp : FRigUnit_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            A;                                                          // 0x0010   (0x0080)  
	FMatrix                                            B;                                                          // 0x0090   (0x0080)  
	FMatrix                                            Result;                                                     // 0x0110   (0x0080)  
};

/// Struct /Script/ControlRig.RigUnit_MathMatrixBinaryAggregateOp
/// Size: 0x0188 (0x000008 - 0x000190)
struct FRigUnit_MathMatrixBinaryAggregateOp : FRigUnit_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            A;                                                          // 0x0010   (0x0080)  
	FMatrix                                            B;                                                          // 0x0090   (0x0080)  
	FMatrix                                            Result;                                                     // 0x0110   (0x0080)  
};

/// Struct /Script/ControlRig.RigUnit_MathMatrixToTransform
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FRigUnit_MathMatrixToTransform : FRigUnit_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            Value;                                                      // 0x0010   (0x0080)  
	FTransform                                         Result;                                                     // 0x0090   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathMatrixFromTransform
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FRigUnit_MathMatrixFromTransform : FRigUnit_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FMatrix                                            Result;                                                     // 0x0070   (0x0080)  
};

/// Struct /Script/ControlRig.RigUnit_MathMatrixFromTransformV2
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FRigUnit_MathMatrixFromTransformV2 : FRigUnit_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FMatrix                                            Result;                                                     // 0x0070   (0x0080)  
};

/// Struct /Script/ControlRig.RigUnit_MathMatrixToVectors
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FRigUnit_MathMatrixToVectors : FRigUnit_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            Value;                                                      // 0x0010   (0x0080)  
	FVector                                            Origin;                                                     // 0x0090   (0x0018)  
	FVector                                            X;                                                          // 0x00A8   (0x0018)  
	FVector                                            Y;                                                          // 0x00C0   (0x0018)  
	FVector                                            Z;                                                          // 0x00D8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathMatrixFromVectors
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FRigUnit_MathMatrixFromVectors : FRigUnit_MathMatrixBase
{ 
	FVector                                            Origin;                                                     // 0x0008   (0x0018)  
	FVector                                            X;                                                          // 0x0020   (0x0018)  
	FVector                                            Y;                                                          // 0x0038   (0x0018)  
	FVector                                            Z;                                                          // 0x0050   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0068   (0x0008)  MISSED
	FMatrix                                            Result;                                                     // 0x0070   (0x0080)  
};

/// Struct /Script/ControlRig.RigUnit_MathMatrixMul
/// Size: 0x0000 (0x000190 - 0x000190)
struct FRigUnit_MathMatrixMul : FRigUnit_MathMatrixBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathMatrixInverse
/// Size: 0x0000 (0x000110 - 0x000110)
struct FRigUnit_MathMatrixInverse : FRigUnit_MathMatrixUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathQuaternionBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnaryOp
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBinaryOp
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	FQuat                                              Result;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionBinaryAggregateOp
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_MathQuaternionBinaryAggregateOp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	FQuat                                              Result;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	float                                              Angle;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0024   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromEuler
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase
{ 
	FVector                                            Euler;                                                      // 0x0008   (0x0018)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0021   (0x000F)  MISSED
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromRotator
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase
{ 
	FRotator                                           Rotator;                                                    // 0x0008   (0x0018)  
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromRotatorV2
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionFromRotatorV2 : FRigUnit_MathQuaternionBase
{ 
	FRotator                                           Value;                                                      // 0x0008   (0x0018)  
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionFromTwoVectors
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0038   (0x0008)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToAxisAndAngle
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FVector                                            Axis;                                                       // 0x0030   (0x0018)  
	float                                              Angle;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionScale
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathQuaternionScale : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	float                                              Scale;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionScaleV2
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_MathQuaternionScaleV2 : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	float                                              Factor;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0034   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToEuler
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionToRotator
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FRotator                                           Result;                                                     // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionMul
/// Size: 0x0000 (0x000070 - 0x000070)
struct FRigUnit_MathQuaternionMul : FRigUnit_MathQuaternionBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionInverse
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_MathQuaternionInverse : FRigUnit_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSlerp
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	float                                              T;                                                          // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0054   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0060   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionEquals
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	bool                                               Result;                                                     // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0051   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionNotEquals
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	bool                                               Result;                                                     // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0051   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSelectBool
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FQuat                                              IfTrue;                                                     // 0x0010   (0x0020)  
	FQuat                                              IfFalse;                                                    // 0x0030   (0x0020)  
	FQuat                                              Result;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionDot
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	float                                              Result;                                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0054   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionUnit
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_MathQuaternionUnit : FRigUnit_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotateVector
/// Size: 0x0058 (0x000008 - 0x000060)
struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Transform;                                                  // 0x0010   (0x0020)  
	FVector                                            Vector;                                                     // 0x0030   (0x0018)  
	FVector                                            Result;                                                     // 0x0048   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionGetAxis
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Quaternion;                                                 // 0x0010   (0x0020)  
	SDK_UNDEFINED(1,2149) /* TEnumAsByte<EAxis> */     __um(Axis);                                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionSwingTwist
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	FVector                                            TwistAxis;                                                  // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0048   (0x0008)  MISSED
	FQuat                                              Swing;                                                      // 0x0050   (0x0020)  
	FQuat                                              Twist;                                                      // 0x0070   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionRotationOrder
/// Size: 0x0008 (0x000008 - 0x000010)
struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase
{ 
	EEulerRotationOrder                                RotationOrder;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionMakeRelative
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_MathQuaternionMakeRelative : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Global;                                                     // 0x0010   (0x0020)  
	FQuat                                              Parent;                                                     // 0x0030   (0x0020)  
	FQuat                                              Local;                                                      // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionMakeAbsolute
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_MathQuaternionMakeAbsolute : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Local;                                                      // 0x0010   (0x0020)  
	FQuat                                              Parent;                                                     // 0x0030   (0x0020)  
	FQuat                                              Global;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathQuaternionMirrorTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigUnit_MathQuaternionMirrorTransform : FRigUnit_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	SDK_UNDEFINED(1,2150) /* TEnumAsByte<EAxis> */     __um(MirrorAxis);                                           // 0x0030   (0x0001)  
	SDK_UNDEFINED(1,2151) /* TEnumAsByte<EAxis> */     __um(AxisToFlip);                                           // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x0032   (0x000E)  MISSED
	FTransform                                         CentralTransform;                                           // 0x0040   (0x0060)  
	FQuat                                              Result;                                                     // 0x00A0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigUnit_MathRBFInterpolateQuatWorkData
{ 
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
struct FRigUnit_MathRBFInterpolateVectorWorkData
{ 
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathRBFInterpolateBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatBase
/// Size: 0x00E8 (0x000008 - 0x0000F0)
struct FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	ERBFQuatDistanceType                               DistanceFunction;                                           // 0x0030   (0x0001)  
	ERBFKernelType                                     SmoothingFunction;                                          // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              SmoothingAngle;                                             // 0x0034   (0x0004)  
	bool                                               bNormalizeOutput;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FVector                                            TwistAxis;                                                  // 0x0040   (0x0018)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FRigUnit_MathRBFInterpolateQuatWorkData            WorkData;                                                   // 0x0060   (0x0090)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorBase
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase
{ 
	FVector                                            Input;                                                      // 0x0008   (0x0018)  
	ERBFVectorDistanceType                             DistanceFunction;                                           // 0x0020   (0x0001)  
	ERBFKernelType                                     SmoothingFunction;                                          // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0022   (0x0002)  MISSED
	float                                              SmoothingRadius;                                            // 0x0024   (0x0004)  
	bool                                               bNormalizeOutput;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	FRigUnit_MathRBFInterpolateVectorWorkData          WorkData;                                                   // 0x0030   (0x0090)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatFloat_Target
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMathRBFInterpolateQuatFloat_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	float                                              Value;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatFloat
/// Size: 0x0020 (0x0000F0 - 0x000110)
struct FRigUnit_MathRBFInterpolateQuatFloat : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatFloat_Target>        Targets;                                                    // 0x00F0   (0x0010)  
	float                                              Output;                                                     // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0104   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatVector_Target
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMathRBFInterpolateQuatVector_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	FVector                                            Value;                                                      // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatVector
/// Size: 0x0030 (0x0000F0 - 0x000120)
struct FRigUnit_MathRBFInterpolateQuatVector : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatVector_Target>       Targets;                                                    // 0x00F0   (0x0010)  
	FVector                                            Output;                                                     // 0x0100   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0118   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatColor_Target
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMathRBFInterpolateQuatColor_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	FLinearColor                                       Value;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatColor
/// Size: 0x0020 (0x0000F0 - 0x000110)
struct FRigUnit_MathRBFInterpolateQuatColor : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatColor_Target>        Targets;                                                    // 0x00F0   (0x0010)  
	FLinearColor                                       Output;                                                     // 0x0100   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatQuat_Target
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMathRBFInterpolateQuatQuat_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	FQuat                                              Value;                                                      // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatQuat
/// Size: 0x0030 (0x0000F0 - 0x000120)
struct FRigUnit_MathRBFInterpolateQuatQuat : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatQuat_Target>         Targets;                                                    // 0x00F0   (0x0010)  
	FQuat                                              Output;                                                     // 0x0100   (0x0020)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateQuatXform_Target
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMathRBFInterpolateQuatXform_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	FTransform                                         Value;                                                      // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateQuatXform
/// Size: 0x0070 (0x0000F0 - 0x000160)
struct FRigUnit_MathRBFInterpolateQuatXform : FRigUnit_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatXform_Target>        Targets;                                                    // 0x00F0   (0x0010)  
	FTransform                                         Output;                                                     // 0x0100   (0x0060)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorFloat_Target
/// Size: 0x0020 (0x000000 - 0x000020)
struct FMathRBFInterpolateVectorFloat_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	float                                              Value;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorFloat
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
struct FRigUnit_MathRBFInterpolateVectorFloat : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorFloat_Target>      Targets;                                                    // 0x00C0   (0x0010)  
	float                                              Output;                                                     // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorVector_Target
/// Size: 0x0030 (0x000000 - 0x000030)
struct FMathRBFInterpolateVectorVector_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	FVector                                            Value;                                                      // 0x0018   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorVector
/// Size: 0x0030 (0x0000C0 - 0x0000F0)
struct FRigUnit_MathRBFInterpolateVectorVector : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorVector_Target>     Targets;                                                    // 0x00C0   (0x0010)  
	FVector                                            Output;                                                     // 0x00D0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorColor_Target
/// Size: 0x0028 (0x000000 - 0x000028)
struct FMathRBFInterpolateVectorColor_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	FLinearColor                                       Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorColor
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
struct FRigUnit_MathRBFInterpolateVectorColor : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorColor_Target>      Targets;                                                    // 0x00C0   (0x0010)  
	FLinearColor                                       Output;                                                     // 0x00D0   (0x0010)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorQuat_Target
/// Size: 0x0040 (0x000000 - 0x000040)
struct FMathRBFInterpolateVectorQuat_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorQuat
/// Size: 0x0030 (0x0000C0 - 0x0000F0)
struct FRigUnit_MathRBFInterpolateVectorQuat : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorQuat_Target>       Targets;                                                    // 0x00C0   (0x0010)  
	FQuat                                              Output;                                                     // 0x00D0   (0x0020)  
};

/// Struct /Script/ControlRig.MathRBFInterpolateVectorXform_Target
/// Size: 0x0080 (0x000000 - 0x000080)
struct FMathRBFInterpolateVectorXform_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathRBFInterpolateVectorXform
/// Size: 0x0070 (0x0000C0 - 0x000130)
struct FRigUnit_MathRBFInterpolateVectorXform : FRigUnit_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorXform_Target>      Targets;                                                    // 0x00C0   (0x0010)  
	FTransform                                         Output;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathTransformBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMutableBase
/// Size: 0x0000 (0x000040 - 0x000040)
struct FRigUnit_MathTransformMutableBase : FRigUnit_MathMutableBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformUnaryOp
/// Size: 0x00C8 (0x000008 - 0x0000D0)
struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FTransform                                         Result;                                                     // 0x0070   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBinaryOp
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0060)  
	FTransform                                         B;                                                          // 0x0070   (0x0060)  
	FTransform                                         Result;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformBinaryAggregateOp
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigUnit_MathTransformBinaryAggregateOp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0060)  
	FTransform                                         B;                                                          // 0x0070   (0x0060)  
	FTransform                                         Result;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromEulerTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase
{ 
	FEulerTransform                                    EulerTransform;                                             // 0x0008   (0x0048)  
	FTransform                                         Result;                                                     // 0x0050   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromEulerTransformV2
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_MathTransformFromEulerTransformV2 : FRigUnit_MathTransformBase
{ 
	FEulerTransform                                    Value;                                                      // 0x0008   (0x0048)  
	FTransform                                         Result;                                                     // 0x0050   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformToEulerTransform
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FEulerTransform                                    Result;                                                     // 0x0070   (0x0048)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMul
/// Size: 0x0000 (0x000130 - 0x000130)
struct FRigUnit_MathTransformMul : FRigUnit_MathTransformBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeRelative
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Global;                                                     // 0x0010   (0x0060)  
	FTransform                                         Parent;                                                     // 0x0070   (0x0060)  
	FTransform                                         Local;                                                      // 0x00D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMakeAbsolute
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Local;                                                      // 0x0010   (0x0060)  
	FTransform                                         Parent;                                                     // 0x0070   (0x0060)  
	FTransform                                         Global;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformAccumulateArray
/// Size: 0x0090 (0x000040 - 0x0000D0)
struct FRigUnit_MathTransformAccumulateArray : FRigUnit_MathTransformMutableBase
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0040   (0x0010)  
	EBoneGetterSetterMode                              TargetSpace;                                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_5[0xF];                                       // 0x0051   (0x000F)  MISSED
	FTransform                                         Root;                                                       // 0x0060   (0x0060)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x00C0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformInverse
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
struct FRigUnit_MathTransformInverse : FRigUnit_MathTransformUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathTransformLerp
/// Size: 0x0138 (0x000008 - 0x000140)
struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0060)  
	FTransform                                         B;                                                          // 0x0070   (0x0060)  
	float                                              T;                                                          // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x00E0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformSelectBool
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FTransform                                         IfTrue;                                                     // 0x0010   (0x0060)  
	FTransform                                         IfFalse;                                                    // 0x0070   (0x0060)  
	FTransform                                         Result;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformRotateVector
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FVector                                            Vector;                                                     // 0x0070   (0x0018)  
	FVector                                            Result;                                                     // 0x0088   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformTransformVector
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FVector                                            Location;                                                   // 0x0070   (0x0018)  
	FVector                                            Result;                                                     // 0x0088   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformFromSRT
/// Size: 0x0108 (0x000008 - 0x000110)
struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase
{ 
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FVector                                            Rotation;                                                   // 0x0020   (0x0018)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FVector                                            Scale;                                                      // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0060   (0x0060)  
	FEulerTransform                                    EulerTransform;                                             // 0x00C0   (0x0048)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathTransformArrayToSRT
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_MathTransformArrayToSRT : FRigUnit_MathTransformBase
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0008   (0x0010)  
	TArray<FVector>                                    Translations;                                               // 0x0018   (0x0010)  
	TArray<FQuat>                                      Rotations;                                                  // 0x0028   (0x0010)  
	TArray<FVector>                                    Scales;                                                     // 0x0038   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformClampSpatially
/// Size: 0x0158 (0x000008 - 0x000160)
struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	SDK_UNDEFINED(1,2152) /* TEnumAsByte<EAxis> */     __um(Axis);                                                 // 0x0070   (0x0001)  
	SDK_UNDEFINED(1,2153) /* TEnumAsByte<EControlRigClampSpatialMode> */ __um(Type);                               // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x0072   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0074   (0x0004)  
	float                                              Maximum;                                                    // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         Space;                                                      // 0x0080   (0x0060)  
	bool                                               bDrawDebug;                                                 // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00E1   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x00E4   (0x0010)  
	float                                              DebugThickness;                                             // 0x00F4   (0x0004)  
	unsigned char                                      UnknownData04_5[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FTransform                                         Result;                                                     // 0x0100   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathTransformMirrorTransform
/// Size: 0x0138 (0x000008 - 0x000140)
struct FRigUnit_MathTransformMirrorTransform : FRigUnit_MathTransformBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	SDK_UNDEFINED(1,2154) /* TEnumAsByte<EAxis> */     __um(MirrorAxis);                                           // 0x0070   (0x0001)  
	SDK_UNDEFINED(1,2155) /* TEnumAsByte<EAxis> */     __um(AxisToFlip);                                           // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x0072   (0x000E)  MISSED
	FTransform                                         CentralTransform;                                           // 0x0080   (0x0060)  
	FTransform                                         Result;                                                     // 0x00E0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_MathVectorBase : FRigUnit_MathBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnaryOp
/// Size: 0x0030 (0x000008 - 0x000038)
struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Result;                                                     // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBinaryOp
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBinaryAggregateOp
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathVectorBinaryAggregateOp : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFromFloat
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0010   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAdd
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_MathVectorAdd : FRigUnit_MathVectorBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSub
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_MathVectorSub : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMul
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_MathVectorMul : FRigUnit_MathVectorBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorScale
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Factor;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDiv
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_MathVectorDiv : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMod
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_MathVectorMod : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMin
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_MathVectorMin : FRigUnit_MathVectorBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMax
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_MathVectorMax : FRigUnit_MathVectorBinaryAggregateOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNegate
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathVectorNegate : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAbs
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathVectorAbs : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorFloor
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathVectorFloor : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCeil
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathVectorCeil : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRound
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathVectorRound : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSign
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathVectorSign : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClamp
/// Size: 0x0060 (0x000008 - 0x000068)
struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Minimum;                                                    // 0x0020   (0x0018)  
	FVector                                            Maximum;                                                    // 0x0038   (0x0018)  
	FVector                                            Result;                                                     // 0x0050   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLerp
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              T;                                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRemap
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            SourceMinimum;                                              // 0x0020   (0x0018)  
	FVector                                            SourceMaximum;                                              // 0x0038   (0x0018)  
	FVector                                            TargetMinimum;                                              // 0x0050   (0x0018)  
	FVector                                            TargetMaximum;                                              // 0x0068   (0x0018)  
	bool                                               bClamp;                                                     // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0088   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorEquals
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	bool                                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorNotEquals
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	bool                                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyZero
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Tolerance;                                                  // 0x0020   (0x0004)  
	bool                                               Result;                                                     // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorIsNearlyEqual
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              Tolerance;                                                  // 0x0038   (0x0004)  
	bool                                               Result;                                                     // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSelectBool
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0009   (0x0007)  MISSED
	FVector                                            IfTrue;                                                     // 0x0010   (0x0018)  
	FVector                                            IfFalse;                                                    // 0x0028   (0x0018)  
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDeg
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathVectorDeg : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorRad
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathVectorRad : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLengthSquared
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorLength
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDistance
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              Result;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorCross
/// Size: 0x0000 (0x000050 - 0x000050)
struct FRigUnit_MathVectorCross : FRigUnit_MathVectorBinaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorDot
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              Result;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorUnit
/// Size: 0x0000 (0x000038 - 0x000038)
struct FRigUnit_MathVectorUnit : FRigUnit_MathVectorUnaryOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_MathVectorSetLength
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Length;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampLength
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              MinimumLength;                                              // 0x0020   (0x0004)  
	float                                              MaximumLength;                                              // 0x0024   (0x0004)  
	FVector                                            Result;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMirror
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Normal;                                                     // 0x0020   (0x0018)  
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorAngle
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              Result;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorParallel
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	bool                                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorOrthogonal
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	bool                                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBezierFourPoint
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0008   (0x0060)  
	float                                              T;                                                          // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x006C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0070   (0x0018)  
	FVector                                            Tangent;                                                    // 0x0088   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMakeBezierFourPoint
/// Size: 0x0060 (0x000008 - 0x000068)
struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase
{ 
	FCRFourPointBezier                                 Bezier;                                                     // 0x0008   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorClampSpatially
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	SDK_UNDEFINED(1,2156) /* TEnumAsByte<EAxis> */     __um(Axis);                                                 // 0x0020   (0x0001)  
	SDK_UNDEFINED(1,2157) /* TEnumAsByte<EControlRigClampSpatialMode> */ __um(Type);                               // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0022   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0024   (0x0004)  
	float                                              Maximum;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Space;                                                      // 0x0030   (0x0060)  
	bool                                               bDrawDebug;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0091   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0094   (0x0010)  
	float                                              DebugThickness;                                             // 0x00A4   (0x0004)  
	FVector                                            Result;                                                     // 0x00A8   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathIntersectPlane
/// Size: 0x0080 (0x000008 - 0x000088)
struct FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase
{ 
	FVector                                            Start;                                                      // 0x0008   (0x0018)  
	FVector                                            Direction;                                                  // 0x0020   (0x0018)  
	FVector                                            PlanePoint;                                                 // 0x0038   (0x0018)  
	FVector                                            PlaneNormal;                                                // 0x0050   (0x0018)  
	FVector                                            Result;                                                     // 0x0068   (0x0018)  
	float                                              Distance;                                                   // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathDistanceToPlane
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_MathDistanceToPlane : FRigUnit_MathVectorBase
{ 
	FVector                                            Point;                                                      // 0x0008   (0x0018)  
	FVector                                            PlanePoint;                                                 // 0x0020   (0x0018)  
	FVector                                            PlaneNormal;                                                // 0x0038   (0x0018)  
	FVector                                            ClosestPointOnPlane;                                        // 0x0050   (0x0018)  
	float                                              SignedDistance;                                             // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMakeRelative
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathVectorMakeRelative : FRigUnit_MathVectorBase
{ 
	FVector                                            Global;                                                     // 0x0008   (0x0018)  
	FVector                                            Parent;                                                     // 0x0020   (0x0018)  
	FVector                                            Local;                                                      // 0x0038   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMakeAbsolute
/// Size: 0x0048 (0x000008 - 0x000050)
struct FRigUnit_MathVectorMakeAbsolute : FRigUnit_MathVectorBase
{ 
	FVector                                            Local;                                                      // 0x0008   (0x0018)  
	FVector                                            Parent;                                                     // 0x0020   (0x0018)  
	FVector                                            Global;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMirrorTransform
/// Size: 0x00A8 (0x000008 - 0x0000B0)
struct FRigUnit_MathVectorMirrorTransform : FRigUnit_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	SDK_UNDEFINED(1,2158) /* TEnumAsByte<EAxis> */     __um(MirrorAxis);                                           // 0x0020   (0x0001)  
	SDK_UNDEFINED(1,2159) /* TEnumAsByte<EAxis> */     __um(AxisToFlip);                                           // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_5[0xE];                                       // 0x0022   (0x000E)  MISSED
	FTransform                                         CentralTransform;                                           // 0x0030   (0x0060)  
	FVector                                            Result;                                                     // 0x0090   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_NoiseFloat
/// Size: 0x0020 (0x000008 - 0x000028)
struct FRigUnit_NoiseFloat : FRigUnit_MathBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Speed;                                                      // 0x000C   (0x0004)  
	float                                              Frequency;                                                  // 0x0010   (0x0004)  
	float                                              Minimum;                                                    // 0x0014   (0x0004)  
	float                                              Maximum;                                                    // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
	float                                              Time;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_NoiseDouble
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_NoiseDouble : FRigUnit_MathBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Speed;                                                      // 0x0010   (0x0008)  
	double                                             Frequency;                                                  // 0x0018   (0x0008)  
	double                                             Minimum;                                                    // 0x0020   (0x0008)  
	double                                             Maximum;                                                    // 0x0028   (0x0008)  
	double                                             Result;                                                     // 0x0030   (0x0008)  
	double                                             Time;                                                       // 0x0038   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_NoiseVector
/// Size: 0x0080 (0x000008 - 0x000088)
struct FRigUnit_NoiseVector : FRigUnit_MathBase
{ 
	FVector                                            Position;                                                   // 0x0008   (0x0018)  
	FVector                                            Speed;                                                      // 0x0020   (0x0018)  
	FVector                                            Frequency;                                                  // 0x0038   (0x0018)  
	float                                              Minimum;                                                    // 0x0050   (0x0004)  
	float                                              Maximum;                                                    // 0x0054   (0x0004)  
	FVector                                            Result;                                                     // 0x0058   (0x0018)  
	FVector                                            Time;                                                       // 0x0070   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_NoiseVector2
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_NoiseVector2 : FRigUnit_MathBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Speed;                                                      // 0x0020   (0x0018)  
	FVector                                            Frequency;                                                  // 0x0038   (0x0018)  
	double                                             Minimum;                                                    // 0x0050   (0x0008)  
	double                                             Maximum;                                                    // 0x0058   (0x0008)  
	FVector                                            Result;                                                     // 0x0060   (0x0018)  
	FVector                                            Time;                                                       // 0x0078   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_RandomFloat
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_RandomFloat : FRigUnit_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Duration;                                                   // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              LastResult;                                                 // 0x001C   (0x0004)  
	int32_t                                            LastSeed;                                                   // 0x0020   (0x0004)  
	int32_t                                            BaseSeed;                                                   // 0x0024   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_RandomVector
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_RandomVector : FRigUnit_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Duration;                                                   // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x0018)  
	FVector                                            LastResult;                                                 // 0x0030   (0x0018)  
	int32_t                                            LastSeed;                                                   // 0x0048   (0x0004)  
	int32_t                                            BaseSeed;                                                   // 0x004C   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateBase
/// Size: 0x0000 (0x000008 - 0x000008)
struct FRigUnit_AccumulateBase : FRigUnit_SimBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatAdd
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_AccumulateFloatAdd : FRigUnit_AccumulateBase
{ 
	float                                              Increment;                                                  // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorAdd
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_AccumulateVectorAdd : FRigUnit_AccumulateBase
{ 
	FVector                                            Increment;                                                  // 0x0008   (0x0018)  
	FVector                                            InitialValue;                                               // 0x0020   (0x0018)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
	FVector                                            AccumulatedValue;                                           // 0x0058   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatMul
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_AccumulateFloatMul : FRigUnit_AccumulateBase
{ 
	float                                              Multiplier;                                                 // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorMul
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_AccumulateVectorMul : FRigUnit_AccumulateBase
{ 
	FVector                                            Multiplier;                                                 // 0x0008   (0x0018)  
	FVector                                            InitialValue;                                               // 0x0020   (0x0018)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0039   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
	FVector                                            AccumulatedValue;                                           // 0x0058   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatMul
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_AccumulateQuatMul : FRigUnit_AccumulateBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Multiplier;                                                 // 0x0010   (0x0020)  
	FQuat                                              InitialValue;                                               // 0x0030   (0x0020)  
	bool                                               bFlipOrder;                                                 // 0x0050   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x0052   (0x000E)  MISSED
	FQuat                                              Result;                                                     // 0x0060   (0x0020)  
	FQuat                                              AccumulatedValue;                                           // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformMul
/// Size: 0x0198 (0x000008 - 0x0001A0)
struct FRigUnit_AccumulateTransformMul : FRigUnit_AccumulateBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Multiplier;                                                 // 0x0010   (0x0060)  
	FTransform                                         InitialValue;                                               // 0x0070   (0x0060)  
	bool                                               bFlipOrder;                                                 // 0x00D0   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_5[0xE];                                       // 0x00D2   (0x000E)  MISSED
	FTransform                                         Result;                                                     // 0x00E0   (0x0060)  
	FTransform                                         AccumulatedValue;                                           // 0x0140   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatLerp
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_AccumulateFloatLerp : FRigUnit_AccumulateBase
{ 
	float                                              TargetValue;                                                // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	float                                              Blend;                                                      // 0x0010   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorLerp
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_AccumulateVectorLerp : FRigUnit_AccumulateBase
{ 
	FVector                                            TargetValue;                                                // 0x0008   (0x0018)  
	FVector                                            InitialValue;                                               // 0x0020   (0x0018)  
	float                                              Blend;                                                      // 0x0038   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
	FVector                                            AccumulatedValue;                                           // 0x0058   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateQuatLerp
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_AccumulateQuatLerp : FRigUnit_AccumulateBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              TargetValue;                                                // 0x0010   (0x0020)  
	FQuat                                              InitialValue;                                               // 0x0030   (0x0020)  
	float                                              Blend;                                                      // 0x0050   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_5[0xB];                                       // 0x0055   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0060   (0x0020)  
	FQuat                                              AccumulatedValue;                                           // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateTransformLerp
/// Size: 0x0198 (0x000008 - 0x0001A0)
struct FRigUnit_AccumulateTransformLerp : FRigUnit_AccumulateBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         TargetValue;                                                // 0x0010   (0x0060)  
	FTransform                                         InitialValue;                                               // 0x0070   (0x0060)  
	float                                              Blend;                                                      // 0x00D0   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData01_5[0xB];                                       // 0x00D5   (0x000B)  MISSED
	FTransform                                         Result;                                                     // 0x00E0   (0x0060)  
	FTransform                                         AccumulatedValue;                                           // 0x0140   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_AccumulateFloatRange
/// Size: 0x0018 (0x000008 - 0x000020)
struct FRigUnit_AccumulateFloatRange : FRigUnit_AccumulateBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              AccumulatedMinimum;                                         // 0x0014   (0x0004)  
	float                                              AccumulatedMaximum;                                         // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AccumulateVectorRange
/// Size: 0x0078 (0x000008 - 0x000080)
struct FRigUnit_AccumulateVectorRange : FRigUnit_AccumulateBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Minimum;                                                    // 0x0020   (0x0018)  
	FVector                                            Maximum;                                                    // 0x0038   (0x0018)  
	FVector                                            AccumulatedMinimum;                                         // 0x0050   (0x0018)  
	FVector                                            AccumulatedMaximum;                                         // 0x0068   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterp
/// Size: 0x0070 (0x000008 - 0x000078)
struct FRigUnit_AlphaInterp : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Scale;                                                      // 0x000C   (0x0004)  
	float                                              Bias;                                                       // 0x0010   (0x0004)  
	bool                                               bMapRange;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0015   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x0018   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0020   (0x0008)  
	bool                                               bClampResult;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x002C   (0x0004)  
	float                                              ClampMax;                                                   // 0x0030   (0x0004)  
	bool                                               bInterpResult;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x0038   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x003C   (0x0004)  
	float                                              Result;                                                     // 0x0040   (0x0004)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0044   (0x0030)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterpVector
/// Size: 0x0098 (0x000008 - 0x0000A0)
struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Scale;                                                      // 0x0020   (0x0004)  
	float                                              Bias;                                                       // 0x0024   (0x0004)  
	bool                                               bMapRange;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0029   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x002C   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0034   (0x0008)  
	bool                                               bClampResult;                                               // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x0040   (0x0004)  
	float                                              ClampMax;                                                   // 0x0044   (0x0004)  
	bool                                               bInterpResult;                                              // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x004C   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData03_5[0x4];                                       // 0x0054   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0058   (0x0018)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0070   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_AlphaInterpQuat
/// Size: 0x00B8 (0x000008 - 0x0000C0)
struct FRigUnit_AlphaInterpQuat : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	float                                              Scale;                                                      // 0x0030   (0x0004)  
	float                                              Bias;                                                       // 0x0034   (0x0004)  
	bool                                               bMapRange;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x003C   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0044   (0x0008)  
	bool                                               bClampResult;                                               // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x0050   (0x0004)  
	float                                              ClampMax;                                                   // 0x0054   (0x0004)  
	bool                                               bInterpResult;                                              // 0x0058   (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x005C   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x0060   (0x0004)  
	unsigned char                                      UnknownData04_5[0xC];                                       // 0x0064   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0070   (0x0020)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0090   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousFloat
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Delta;                                                      // 0x000C   (0x0004)  
	float                                              PreviousValue;                                              // 0x0010   (0x0004)  
	float                                              Cache;                                                      // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousVector
/// Size: 0x0060 (0x000008 - 0x000068)
struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Delta;                                                      // 0x0020   (0x0018)  
	FVector                                            PreviousValue;                                              // 0x0038   (0x0018)  
	FVector                                            Cache;                                                      // 0x0050   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousQuat
/// Size: 0x0088 (0x000008 - 0x000090)
struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FQuat                                              Delta;                                                      // 0x0030   (0x0020)  
	FQuat                                              PreviousValue;                                              // 0x0050   (0x0020)  
	FQuat                                              Cache;                                                      // 0x0070   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_DeltaFromPreviousTransform
/// Size: 0x0188 (0x000008 - 0x000190)
struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FTransform                                         Delta;                                                      // 0x0070   (0x0060)  
	FTransform                                         PreviousValue;                                              // 0x00D0   (0x0060)  
	FTransform                                         Cache;                                                      // 0x0130   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_KalmanFloat
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_KalmanFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0018   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_KalmanVector
/// Size: 0x0050 (0x000008 - 0x000058)
struct FRigUnit_KalmanVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	int32_t                                            BufferSize;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0028   (0x0018)  
	TArray<FVector>                                    Buffer;                                                     // 0x0040   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_KalmanTransform
/// Size: 0x00F8 (0x000008 - 0x000100)
struct FRigUnit_KalmanTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	int32_t                                            BufferSize;                                                 // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_5[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0060)  
	TArray<FTransform>                                 Buffer;                                                     // 0x00E0   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x00F4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
/// Size: 0x0080 (0x000000 - 0x000080)
struct FRigUnit_PointSimulation_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	float                                              CollisionScale;                                             // 0x0008   (0x0004)  
	bool                                               bDrawPointsAsSpheres;                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x000D   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
/// Size: 0x0014 (0x000000 - 0x000014)
struct FRigUnit_PointSimulation_BoneTarget
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	int32_t                                            TranslationPoint;                                           // 0x0008   (0x0004)  
	int32_t                                            PrimaryAimPoint;                                            // 0x000C   (0x0004)  
	int32_t                                            SecondaryAimPoint;                                          // 0x0010   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_WorkData
/// Size: 0x0088 (0x000000 - 0x000088)
struct FRigUnit_PointSimulation_WorkData
{ 
	FCRSimPointContainer                               Simulation;                                                 // 0x0000   (0x0078)  
	TArray<FCachedRigElement>                          BoneIndices;                                                // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation
/// Size: 0x0210 (0x000040 - 0x000250)
struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable
{ 
	TArray<FCRSimPoint>                                Points;                                                     // 0x0040   (0x0010)  
	TArray<FCRSimLinearSpring>                         Links;                                                      // 0x0050   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0060   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0070   (0x0010)  
	float                                              SimulatedStepsPerSecond;                                    // 0x0080   (0x0004)  
	ECRSimPointIntegrateType                           IntegratorType;                                             // 0x0084   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	float                                              VerletBlend;                                                // 0x0088   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x008C   (0x0004)  MISSED
	TArray<FRigUnit_PointSimulation_BoneTarget>        BoneTargets;                                                // 0x0090   (0x0010)  
	bool                                               bLimitLocalPosition;                                        // 0x00A0   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x00A1   (0x0001)  
	unsigned char                                      UnknownData02_5[0x6];                                       // 0x00A2   (0x0006)  MISSED
	FVector                                            PrimaryAimAxis;                                             // 0x00A8   (0x0018)  
	FVector                                            SecondaryAimAxis;                                           // 0x00C0   (0x0018)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FRigUnit_PointSimulation_DebugSettings             DebugSettings;                                              // 0x00E0   (0x0080)  
	FCRFourPointBezier                                 Bezier;                                                     // 0x0160   (0x0060)  
	FRigUnit_PointSimulation_WorkData                  WorkData;                                                   // 0x01C0   (0x0088)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0248   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SpringInterp
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_SpringInterp : FRigUnit_SimBase
{ 
	float                                              Current;                                                    // 0x0008   (0x0004)  
	float                                              Target;                                                     // 0x000C   (0x0004)  
	float                                              Stiffness;                                                  // 0x0010   (0x0004)  
	float                                              CriticalDamping;                                            // 0x0014   (0x0004)  
	float                                              Mass;                                                       // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
	FFloatSpringState                                  SpringState;                                                // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpVector
/// Size: 0x0090 (0x000008 - 0x000098)
struct FRigUnit_SpringInterpVector : FRigUnit_SimBase
{ 
	FVector                                            Current;                                                    // 0x0008   (0x0018)  
	FVector                                            Target;                                                     // 0x0020   (0x0018)  
	float                                              Stiffness;                                                  // 0x0038   (0x0004)  
	float                                              CriticalDamping;                                            // 0x003C   (0x0004)  
	float                                              Mass;                                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0044   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0048   (0x0018)  
	FVectorSpringState                                 SpringState;                                                // 0x0060   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpV2
/// Size: 0x0038 (0x000008 - 0x000040)
struct FRigUnit_SpringInterpV2 : FRigUnit_SimBase
{ 
	float                                              Target;                                                     // 0x0008   (0x0004)  
	float                                              Strength;                                                   // 0x000C   (0x0004)  
	float                                              CriticalDamping;                                            // 0x0010   (0x0004)  
	float                                              Force;                                                      // 0x0014   (0x0004)  
	bool                                               bUseCurrentInput;                                           // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              Current;                                                    // 0x001C   (0x0004)  
	float                                              TargetVelocityAmount;                                       // 0x0020   (0x0004)  
	bool                                               bInitializeFromTarget;                                      // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0028   (0x0004)  
	float                                              Velocity;                                                   // 0x002C   (0x0004)  
	float                                              SimulatedResult;                                            // 0x0030   (0x0004)  
	FFloatSpringState                                  SpringState;                                                // 0x0034   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpVectorV2
/// Size: 0x00E0 (0x000008 - 0x0000E8)
struct FRigUnit_SpringInterpVectorV2 : FRigUnit_SimBase
{ 
	FVector                                            Target;                                                     // 0x0008   (0x0018)  
	float                                              Strength;                                                   // 0x0020   (0x0004)  
	float                                              CriticalDamping;                                            // 0x0024   (0x0004)  
	FVector                                            Force;                                                      // 0x0028   (0x0018)  
	bool                                               bUseCurrentInput;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0041   (0x0007)  MISSED
	FVector                                            Current;                                                    // 0x0048   (0x0018)  
	float                                              TargetVelocityAmount;                                       // 0x0060   (0x0004)  
	bool                                               bInitializeFromTarget;                                      // 0x0064   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0065   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0068   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0080   (0x0018)  
	FVector                                            SimulatedResult;                                            // 0x0098   (0x0018)  
	FVectorSpringState                                 SpringState;                                                // 0x00B0   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpQuaternionV2
/// Size: 0x0128 (0x000008 - 0x000130)
struct FRigUnit_SpringInterpQuaternionV2 : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Target;                                                     // 0x0010   (0x0020)  
	float                                              Strength;                                                   // 0x0030   (0x0004)  
	float                                              CriticalDamping;                                            // 0x0034   (0x0004)  
	FVector                                            Torque;                                                     // 0x0038   (0x0018)  
	bool                                               bUseCurrentInput;                                           // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_5[0xF];                                       // 0x0051   (0x000F)  MISSED
	FQuat                                              Current;                                                    // 0x0060   (0x0020)  
	float                                              TargetVelocityAmount;                                       // 0x0080   (0x0004)  
	bool                                               bInitializeFromTarget;                                      // 0x0084   (0x0001)  
	unsigned char                                      UnknownData02_5[0xB];                                       // 0x0085   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0090   (0x0020)  
	FVector                                            AngularVelocity;                                            // 0x00B0   (0x0018)  
	unsigned char                                      UnknownData03_5[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FQuat                                              SimulatedResult;                                            // 0x00D0   (0x0020)  
	FQuaternionSpringState                             SpringState;                                                // 0x00F0   (0x0040)  
};

/// Struct /Script/ControlRig.RigUnit_Timeline
/// Size: 0x0010 (0x000008 - 0x000018)
struct FRigUnit_Timeline : FRigUnit_SimBase
{ 
	float                                              Speed;                                                      // 0x0008   (0x0004)  
	float                                              Time;                                                       // 0x000C   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TimeLoop
/// Size: 0x0028 (0x000008 - 0x000030)
struct FRigUnit_TimeLoop : FRigUnit_SimBase
{ 
	float                                              Speed;                                                      // 0x0008   (0x0004)  
	float                                              Duration;                                                   // 0x000C   (0x0004)  
	bool                                               Normalize;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Absolute;                                                   // 0x0014   (0x0004)  
	float                                              Relative;                                                   // 0x0018   (0x0004)  
	float                                              FlipFlop;                                                   // 0x001C   (0x0004)  
	bool                                               Even;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              AccumulatedAbsolute;                                        // 0x0024   (0x0004)  
	float                                              AccumulatedRelative;                                        // 0x0028   (0x0004)  
	int32_t                                            NumIterations;                                              // 0x002C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetFloat
/// Size: 0x0040 (0x000008 - 0x000048)
struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SecondsAgo;                                                 // 0x000C   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0010   (0x0004)  
	float                                              TimeRange;                                                  // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0020   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0030   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0040   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0044   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetVector
/// Size: 0x0068 (0x000008 - 0x000070)
struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              SecondsAgo;                                                 // 0x0020   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0024   (0x0004)  
	float                                              TimeRange;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0030   (0x0018)  
	TArray<FVector>                                    Buffer;                                                     // 0x0048   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0058   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0068   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x006C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_TimeOffsetTransform
/// Size: 0x0108 (0x000008 - 0x000110)
struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	float                                              SecondsAgo;                                                 // 0x0070   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0074   (0x0004)  
	float                                              TimeRange;                                                  // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0060)  
	TArray<FTransform>                                 Buffer;                                                     // 0x00E0   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x00F0   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0100   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0104   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_VerletIntegrateVector
/// Size: 0x00D0 (0x000008 - 0x0000D8)
struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase
{ 
	FVector                                            Target;                                                     // 0x0008   (0x0018)  
	float                                              Strength;                                                   // 0x0020   (0x0004)  
	float                                              Damp;                                                       // 0x0024   (0x0004)  
	float                                              Blend;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x002C   (0x0004)  MISSED
	FVector                                            Force;                                                      // 0x0030   (0x0018)  
	FVector                                            Position;                                                   // 0x0048   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0060   (0x0018)  
	FVector                                            Acceleration;                                               // 0x0078   (0x0018)  
	FCRSimPoint                                        Point;                                                      // 0x0090   (0x0040)  
	bool                                               bInitialized;                                               // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

