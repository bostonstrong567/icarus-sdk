// /Script/InteractiveToolsFramework.SingleClickInputBehavior
// Derives from: UAnyButtonInputBehavior > UInputBehavior > UObject
// size 0x130, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/SingleClickBehavior.h

UCLASS(Transient)
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
    UPROPERTY() bool HitTestOnRelease;  // 0x00C0, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TFunction<bool __cdecl(FInputDeviceState const &)> ModifierCheckFunc;  // 0x0080
    FInputBehaviorModifierStates Modifiers;  // 0x00C8
    IClickBehaviorTarget * Target;  // 0x0128, protected

    // Virtual functions that start here:
    //   Clicked, Initialize
};
