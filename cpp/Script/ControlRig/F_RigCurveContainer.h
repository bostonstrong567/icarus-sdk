// /Script/ControlRig.RigCurveContainer
// size 0x98, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Rigs/RigCurveContainer.h

USTRUCT()
struct FRigCurveContainer
{
    UPROPERTY(EditAnywhere) TArray<FRigCurve> Curves;  // 0x0020, size 0x10
    UPROPERTY() TMap<FName, int32> NameToIndexMapping;  // 0x0030, size 0x50
    UPROPERTY(Transient) TArray<FName> Selection;  // 0x0080, size 0x10

    // Not reflected:
    FRigHierarchyContainer * Container;  // 0x0000
    TMulticastDelegate<void __cdecl(FRigHierarchyContainer *,FRigElementKey const &,bool),FDefaultDelegateUserPolicy> OnCurveSelected;  // 0x0008
    bool bSuspendNotifications;  // 0x0090
};
