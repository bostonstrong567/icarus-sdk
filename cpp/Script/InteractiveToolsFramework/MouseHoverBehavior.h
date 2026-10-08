// /Script/InteractiveToolsFramework.MouseHoverBehavior
// Derives from: UInputBehavior > UObject
// size 0x98, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/MouseHoverBehavior.h

UCLASS(Transient)
class UMouseHoverBehavior : public UInputBehavior
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FInputBehaviorModifierStates Modifiers;  // 0x0030
    IHoverBehaviorTarget * Target;  // 0x0090, protected

    // Virtual functions that start here:
    //   Initialize
};
