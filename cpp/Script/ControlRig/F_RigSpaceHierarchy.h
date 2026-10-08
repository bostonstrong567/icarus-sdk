// /Script/ControlRig.RigSpaceHierarchy
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigSpaceHierarchy.h

USTRUCT()
struct FRigSpaceHierarchy
{
    UPROPERTY(EditAnywhere) TArray<FRigSpace> Spaces;  // 0x0020, size 0x10
    UPROPERTY() TMap<FName, int32> NameToIndexMapping;  // 0x0030, size 0x50
    UPROPERTY(Transient) TArray<FName> Selection;  // 0x0080, size 0x10

    // Not reflected:
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &,bool),FDefaultDelegateUserPolicy> OnSpaceSelected;  // 0x0000
    FRigHierarchyContainer * Container;  // 0x0018
};
