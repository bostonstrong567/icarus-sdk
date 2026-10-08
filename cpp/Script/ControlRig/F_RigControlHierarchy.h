// /Script/ControlRig.RigControlHierarchy
// size 0x108, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigControlHierarchy.h

USTRUCT()
struct FRigControlHierarchy
{
    UPROPERTY(EditAnywhere) TArray<FRigControl> Controls;  // 0x0098, size 0x10
    UPROPERTY() TMap<FName, int32> NameToIndexMapping;  // 0x00A8, size 0x50
    UPROPERTY(Transient) TArray<FName> Selection;  // 0x00F8, size 0x10

    // Not reflected:
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &),FDefaultDelegateUserPolicy> OnControlAdded;  // 0x0000
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &),FDefaultDelegateUserPolicy> OnControlRemoved;  // 0x0018
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,enum ERigElementType,FName const &,FName const &),FDefaultDelegateUserPolicy> OnControlRenamed;  // 0x0030
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &,FName const &,FName const &),FDefaultDelegateUserPolicy> OnControlReparented;  // 0x0048
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &,bool),FDefaultDelegateUserPolicy> OnControlSelected;  // 0x0060
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &),FDefaultDelegateUserPolicy> OnControlUISettingsChanged;  // 0x0078
    FRigHierarchyContainer * Container;  // 0x0090
};
