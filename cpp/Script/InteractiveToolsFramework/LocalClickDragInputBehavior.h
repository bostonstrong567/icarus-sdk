// /Script/InteractiveToolsFramework.LocalClickDragInputBehavior
// Derives from: UClickDragInputBehavior > UAnyButtonInputBehavior > UInputBehavior > UObject
// size 0x280, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/ClickDragBehavior.h

UCLASS(Transient)
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
public:
    TUniqueFunction<FInputRayHit __cdecl(FInputDeviceRay const &)> CanBeginClickDragFunc;  // 0x0140, not reflected
    TUniqueFunction<void __cdecl(FInputDeviceRay const &)> OnClickPressFunc;  // 0x0180, not reflected
    TUniqueFunction<void __cdecl(FInputDeviceRay const &)> OnClickDragFunc;  // 0x01C0, not reflected
    TUniqueFunction<void __cdecl(FInputDeviceRay const &)> OnClickReleaseFunc;  // 0x0200, not reflected
    TUniqueFunction<void __cdecl(void)> OnTerminateFunc;  // 0x0240, not reflected

    // Virtual functions that start here:
    //   Initialize
};
