// /Script/LiveLinkComponents.LiveLinkControllerBase
// Derives from: UObject
// size 0x40, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLinkComponents/Public/LiveLinkControllerBase.h

UCLASS(Abstract, EditInlineNew)
class ULiveLinkControllerBase : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UActorComponent,FWeakObjectPtr> AttachedComponent;  // 0x0028, protected
    FLiveLinkSubjectRepresentation SelectedSubject;  // 0x0030, protected

    // Virtual functions that start here:
    //   Cleanup, GetDesiredComponentClass, GetSelectedSubject, IsRoleSupported, OnEvaluateRegistered
    //   SetAttachedComponent, SetSelectedSubject, Tick
};
