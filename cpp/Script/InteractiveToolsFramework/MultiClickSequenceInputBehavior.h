// /Script/InteractiveToolsFramework.MultiClickSequenceInputBehavior
// Derives from: UAnyButtonInputBehavior > UInputBehavior > UObject
// size 0x130, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/MultiClickSequenceInputBehavior.h

UCLASS(Transient)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:
    FInputBehaviorModifierStates Modifiers;  // 0x0080, not reflected
    TFunction<bool __cdecl(FInputDeviceState const &)> ModifierCheckFunc;  // 0x00E0, not reflected
protected:
    IClickSequenceBehaviorTarget * Target;  // 0x0120, not reflected
    UMultiClickSequenceInputBehavior::ESequenceState State;  // 0x0128, not reflected

    // Virtual functions that start here:
    //   Initialize
};
