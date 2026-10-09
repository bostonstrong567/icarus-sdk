// /Script/LiveLinkComponents.LiveLinkControllerBase
// Derives from: UObject
// size 0x40, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLinkComponents/Public/LiveLinkControllerBase.h

UCLASS(Abstract, EditInlineNew)
class ULiveLinkControllerBase : public UObject
{
protected:
    TWeakObjectPtr<UActorComponent,FWeakObjectPtr> AttachedComponent;  // 0x0028, not reflected
    FLiveLinkSubjectRepresentation SelectedSubject;  // 0x0030, not reflected

    // Virtual functions that start here:
    //   Cleanup, GetDesiredComponentClass, GetSelectedSubject, IsRoleSupported, OnEvaluateRegistered
    //   SetAttachedComponent, SetSelectedSubject, Tick
};
