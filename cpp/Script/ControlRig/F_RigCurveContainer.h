// /Script/ControlRig.RigCurveContainer
// size 0x98, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigCurveContainer.h

USTRUCT()
struct FRigCurveContainer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    FRigHierarchyContainer * Container;  // 0x0000, not reflected
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &,bool),FDefaultDelegateUserPolicy> OnCurveSelected;  // 0x0008, not reflected
private:
    UPROPERTY(EditAnywhere) TArray<FRigCurve> Curves;  // 0x0020, size 0x10
    UPROPERTY() TMap<FName, int32> NameToIndexMapping;  // 0x0030, size 0x50
    UPROPERTY(Transient) TArray<FName> Selection;  // 0x0080, size 0x10
    bool bSuspendNotifications;  // 0x0090, not reflected
};
