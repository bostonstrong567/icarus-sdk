// /Script/InteractiveToolsFramework.ClickDragInputBehavior
// Derives from: UAnyButtonInputBehavior > UInputBehavior > UObject
// size 0x140, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/ClickDragBehavior.h

UCLASS(Transient)
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
    FInputBehaviorModifierStates Modifiers;  // 0x0080, not reflected
    TFunction<bool __cdecl(FInputDeviceState const &)> ModifierCheckFunc;  // 0x00E0, not reflected
    UPROPERTY() bool bUpdateModifiersDuringDrag;  // 0x0120, size 0x1
protected:
    IClickDragBehaviorTarget * Target;  // 0x0128, not reflected
    bool bInClickDrag;  // 0x0130, not reflected

    // Virtual functions that start here:
    //   Initialize, OnClickDragInternal, OnClickPressInternal, OnClickReleaseInternal
};
