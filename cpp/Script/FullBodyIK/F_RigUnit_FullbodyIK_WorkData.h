// /Script/FullBodyIK.RigUnit_FullbodyIK_WorkData
// size 0x198, declared in Engine/Plugins/Experimental/FullBodyIK/Source/FullBodyIK/Private/RigUnit_FullbodyIK.h

USTRUCT()
struct FRigUnit_FullbodyIK_WorkData
{

    // Not reflected:
    TArray<FFBIKLinkData,TSizedDefaultAllocator<32> > LinkData;  // 0x0000
    TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0> > EffectorTargets;  // 0x0010
    TArray<int,TSizedDefaultAllocator<32> > EffectorLinkIndices;  // 0x0060
    TMap<int,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0> > LinkDataToHierarchyIndices;  // 0x0070
    TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0> > HierarchyToLinkDataMap;  // 0x00C0
    TArray<TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,TSizedDefaultAllocator<32> > InternalConstraints;  // 0x0110
    FJacobianSolver_FullbodyIK IKSolver;  // 0x0120
    TArray<FJacobianDebugData,TSizedDefaultAllocator<32> > DebugData;  // 0x0188
};
