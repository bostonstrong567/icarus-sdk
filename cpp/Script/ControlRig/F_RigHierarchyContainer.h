// /Script/ControlRig.RigHierarchyContainer
// size 0x368, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigHierarchyContainer.h

USTRUCT()
struct FRigHierarchyContainer
{
    UPROPERTY() FRigBoneHierarchy BoneHierarchy;  // 0x0000, size 0x98
    UPROPERTY() FRigSpaceHierarchy SpaceHierarchy;  // 0x0098, size 0x90
    UPROPERTY() FRigControlHierarchy ControlHierarchy;  // 0x0128, size 0x108
    UPROPERTY() FRigCurveContainer CurveContainer;  // 0x0230, size 0x98
    UPROPERTY(Transient) int32 Version;  // 0x02C8, size 0x4

    // Not reflected:
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &,bool),FDefaultDelegateUserPolicy> OnElementSelected;  // 0x02D0
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &),FDefaultDelegateUserPolicy> OnElementChanged;  // 0x02E8
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigEventContext const &),FDefaultDelegateUserPolicy> OnEventReceived;  // 0x0300
    TMap<FRigElementKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,int,0> > DepthIndexByKey;  // 0x0318
};
