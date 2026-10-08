// /Script/InteractiveToolsFramework.ClickDragInputBehavior
// Derives from: UAnyButtonInputBehavior > UInputBehavior > UObject
// size 0x140, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/ClickDragBehavior.h

UCLASS(Transient)
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
    UPROPERTY() bool bUpdateModifiersDuringDrag;  // 0x0120, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FInputBehaviorModifierStates Modifiers;  // 0x0080
    TFunction<bool __cdecl(FInputDeviceState const &)> ModifierCheckFunc;  // 0x00E0
    IClickDragBehaviorTarget * Target;  // 0x0128, protected
    bool bInClickDrag;  // 0x0130, protected

    // Virtual functions that start here:
    //   Initialize, OnClickDragInternal, OnClickPressInternal, OnClickReleaseInternal
};
