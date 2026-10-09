// /Script/InteractiveToolsFramework.KeyAsModifierInputBehavior
// Derives from: UInputBehavior > UObject
// size 0x110, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/KeyAsModifierInputBehavior.h

UCLASS(Transient)
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:
    TFunction<bool __cdecl(FInputDeviceState const &)> ModifierCheckFunc;  // 0x0030, not reflected
protected:
    IModifierToggleBehaviorTarget * Target;  // 0x0070, not reflected
    FKey ModifierKey;  // 0x0078, not reflected
    FInputBehaviorModifierStates Modifiers;  // 0x0090, not reflected
    FKey PressedButton;  // 0x00F0, not reflected

    // Virtual functions that start here:
    //   Initialize
};
