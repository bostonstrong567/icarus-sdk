// /Script/InteractiveToolsFramework.LocalClickDragInputBehavior
// Derives from: UClickDragInputBehavior > UAnyButtonInputBehavior > UInputBehavior > UObject
// size 0x280, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/ClickDragBehavior.h

UCLASS(Transient)
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TUniqueFunction<FInputRayHit __cdecl(FInputDeviceRay const &)> CanBeginClickDragFunc;  // 0x0140
    TUniqueFunction<void __cdecl(FInputDeviceRay const &)> OnClickPressFunc;  // 0x0180
    TUniqueFunction<void __cdecl(FInputDeviceRay const &)> OnClickDragFunc;  // 0x01C0
    TUniqueFunction<void __cdecl(FInputDeviceRay const &)> OnClickReleaseFunc;  // 0x0200
    TUniqueFunction<void __cdecl(void)> OnTerminateFunc;  // 0x0240

    // Virtual functions that start here:
    //   Initialize
};
