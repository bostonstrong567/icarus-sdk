// /Script/ControlRig.RigBoneHierarchy
// size 0x98, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigBoneHierarchy.h

USTRUCT()
struct FRigBoneHierarchy
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &,bool),FDefaultDelegateUserPolicy> OnBoneSelected;  // 0x0000, not reflected
private:
    FRigHierarchyContainer * Container;  // 0x0018, not reflected
    UPROPERTY(EditAnywhere) TArray<FRigBone> Bones;  // 0x0020, size 0x10
    UPROPERTY() TMap<FName, int32> NameToIndexMapping;  // 0x0030, size 0x50
    UPROPERTY(Transient) TArray<FName> Selection;  // 0x0080, size 0x10
    bool bSuspendNotifications;  // 0x0090, not reflected
};
