// /Script/FullBodyIK.RigUnit_FullbodyIK_WorkData
// size 0x198, declared in Engine/Plugins/Experimental/FullBodyIK/Source/FullBodyIK/Private/RigUnit_FullbodyIK.h

USTRUCT()
struct FRigUnit_FullbodyIK_WorkData
{
public:
    TArray<FFBIKLinkData,TSizedDefaultAllocator<32> > LinkData;  // 0x0000, not reflected
    TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0> > EffectorTargets;  // 0x0010, not reflected
    TArray<int,TSizedDefaultAllocator<32> > EffectorLinkIndices;  // 0x0060, not reflected
    TMap<int,FRigElementKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FRigElementKey,0> > LinkDataToHierarchyIndices;  // 0x0070, not reflected
    TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0> > HierarchyToLinkDataMap;  // 0x00C0, not reflected
    TArray<TVariant<FRotationLimitConstraint,FPositionLimitConstraint,FPoleVectorConstraint>,TSizedDefaultAllocator<32> > InternalConstraints;  // 0x0110, not reflected
    FJacobianSolver_FullbodyIK IKSolver;  // 0x0120, not reflected
    TArray<FJacobianDebugData,TSizedDefaultAllocator<32> > DebugData;  // 0x0188, not reflected
};
