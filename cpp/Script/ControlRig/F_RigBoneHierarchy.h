// /Script/ControlRig.RigBoneHierarchy
// size 0x98, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigBoneHierarchy.h

USTRUCT()
struct FRigBoneHierarchy
{
    UPROPERTY(EditAnywhere) TArray<FRigBone> Bones;  // 0x0020, size 0x10
    UPROPERTY() TMap<FName, int32> NameToIndexMapping;  // 0x0030, size 0x50
    UPROPERTY(Transient) TArray<FName> Selection;  // 0x0080, size 0x10

    // Not reflected:
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &,bool),FDefaultDelegateUserPolicy> OnBoneSelected;  // 0x0000
    FRigHierarchyContainer * Container;  // 0x0018
    bool bSuspendNotifications;  // 0x0090
};
