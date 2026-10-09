// /Script/InteractiveToolsFramework.AnyButtonInputBehavior
// Derives from: UInputBehavior > UObject
// size 0x80, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/AnyButtonInputBehavior.h

UCLASS(Transient)
class UAnyButtonInputBehavior : public UInputBehavior
{
protected:
    EInputDevices ActiveDevice;  // 0x0030, not reflected
    TUniqueFunction<FDeviceButtonState __cdecl(FInputDeviceState const &)> GetMouseButtonStateFunc;  // 0x0040, not reflected

    // Virtual functions that start here:
    //   GetClickPoint, GetDeviceRay, GetWorldRay, IsDown, IsPressed, IsReleased, SetUseCustomMouseButton
    //   SetUseLeftMouseButton, SetUseMiddleMouseButton, SetUseRightMouseButton
};
