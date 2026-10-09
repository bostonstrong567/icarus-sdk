// /Script/ControlRig.RigControlHierarchy
// size 0x108, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigControlHierarchy.h

USTRUCT()
struct FRigControlHierarchy
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &),FDefaultDelegateUserPolicy> OnControlAdded;  // 0x0000, not reflected
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &),FDefaultDelegateUserPolicy> OnControlRemoved;  // 0x0018, not reflected
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,enum ERigElementType,FName const &,FName const &),FDefaultDelegateUserPolicy> OnControlRenamed;  // 0x0030, not reflected
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &,FName const &,FName const &),FDefaultDelegateUserPolicy> OnControlReparented;  // 0x0048, not reflected
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &,bool),FDefaultDelegateUserPolicy> OnControlSelected;  // 0x0060, not reflected
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &),FDefaultDelegateUserPolicy> OnControlUISettingsChanged;  // 0x0078, not reflected
private:
    FRigHierarchyContainer * Container;  // 0x0090, not reflected
    UPROPERTY(EditAnywhere) TArray<FRigControl> Controls;  // 0x0098, size 0x10
    UPROPERTY() TMap<FName, int32> NameToIndexMapping;  // 0x00A8, size 0x50
    UPROPERTY(Transient) TArray<FName> Selection;  // 0x00F8, size 0x10
};
