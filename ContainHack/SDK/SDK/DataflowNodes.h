
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: DataflowCore
/// dependency: Engine

/// Struct /Script/DataflowNodes.GetSkeletalMeshDataflowNode
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
struct FGetSkeletalMeshDataflowNode : FDataflowNode
{ 
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x00D0   (0x0008)  
	FName                                              PropertyName;                                               // 0x00D8   (0x0008)  
};

/// Struct /Script/DataflowNodes.SkeletalMeshBoneDataflowNode
/// Size: 0x0018 (0x0000D0 - 0x0000E8)
struct FSkeletalMeshBoneDataflowNode : FDataflowNode
{ 
	FName                                              BoneName;                                                   // 0x00D0   (0x0008)  
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x00D8   (0x0008)  
	int32_t                                            BoneIndexOut;                                               // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
};

/// Struct /Script/DataflowNodes.GetStaticMeshDataflowNode
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
struct FGetStaticMeshDataflowNode : FDataflowNode
{ 
	class UStaticMesh*                                 StaticMesh;                                                 // 0x00D0   (0x0008)  
	FName                                              PropertyName;                                               // 0x00D8   (0x0008)  
};

