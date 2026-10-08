// /Script/InteractiveToolsFramework.KeyAsModifierInputBehavior
// Derives from: UInputBehavior > UObject
// size 0x110, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/KeyAsModifierInputBehavior.h

UCLASS(Transient)
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TFunction<bool __cdecl(FInputDeviceState const &)> ModifierCheckFunc;  // 0x0030
    IModifierToggleBehaviorTarget * Target;  // 0x0070, protected
    FKey ModifierKey;  // 0x0078, protected
    FInputBehaviorModifierStates Modifiers;  // 0x0090, protected
    FKey PressedButton;  // 0x00F0, protected

    // Virtual functions that start here:
    //   Initialize
};
