// /Script/InteractiveToolsFramework.MouseHoverBehavior
// Derives from: UInputBehavior > UObject
// size 0x98, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/MouseHoverBehavior.h

UCLASS(Transient)
class UMouseHoverBehavior : public UInputBehavior
{
public:
    FInputBehaviorModifierStates Modifiers;  // 0x0030, not reflected
protected:
    IHoverBehaviorTarget * Target;  // 0x0090, not reflected

    // Virtual functions that start here:
    //   Initialize
};
