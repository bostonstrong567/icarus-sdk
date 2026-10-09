// /Script/InteractiveToolsFramework.SingleClickInputBehavior
// Derives from: UAnyButtonInputBehavior > UInputBehavior > UObject
// size 0x130, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/SingleClickBehavior.h

UCLASS(Transient)
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
    TFunction<bool __cdecl(FInputDeviceState const &)> ModifierCheckFunc;  // 0x0080, not reflected
    UPROPERTY() bool HitTestOnRelease;  // 0x00C0, size 0x1
    FInputBehaviorModifierStates Modifiers;  // 0x00C8, not reflected
protected:
    IClickBehaviorTarget * Target;  // 0x0128, not reflected

    // Virtual functions that start here:
    //   Clicked, Initialize
};
