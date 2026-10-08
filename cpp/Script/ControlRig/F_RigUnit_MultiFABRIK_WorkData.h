// /Script/ControlRig.RigUnit_MultiFABRIK_WorkData
// size 0x60, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h

USTRUCT()
struct FRigUnit_MultiFABRIK_WorkData
{

    // Not reflected:
    TArray<FCachedRigElement,TSizedDefaultAllocator<32> > EffectorBoneIndices;  // 0x0000
    FRigUnit_MultiFABRIK_ChainGroup ChainGroup;  // 0x0010
    TArray<FRigUnit_MultiFABRIK_BoneWorkingData,TSizedDefaultAllocator<32> > BoneTree;  // 0x0050
};
