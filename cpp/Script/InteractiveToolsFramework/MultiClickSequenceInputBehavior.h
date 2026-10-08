// /Script/InteractiveToolsFramework.MultiClickSequenceInputBehavior
// Derives from: UAnyButtonInputBehavior > UInputBehavior > UObject
// size 0x130, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/MultiClickSequenceInputBehavior.h

UCLASS(Transient)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FInputBehaviorModifierStates Modifiers;  // 0x0080
    TFunction<bool __cdecl(FInputDeviceState const &)> ModifierCheckFunc;  // 0x00E0
    IClickSequenceBehaviorTarget * Target;  // 0x0120, protected
    UMultiClickSequenceInputBehavior::ESequenceState State;  // 0x0128, protected

    // Virtual functions that start here:
    //   Initialize
};
