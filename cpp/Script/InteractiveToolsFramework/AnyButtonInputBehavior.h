// /Script/InteractiveToolsFramework.AnyButtonInputBehavior
// Derives from: UInputBehavior > UObject
// size 0x80, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseBehaviors/AnyButtonInputBehavior.h

UCLASS(Transient)
class UAnyButtonInputBehavior : public UInputBehavior
{
public:

    // Not reflected: the engine's scripting cannot see these.
    EInputDevices ActiveDevice;  // 0x0030, protected
    TUniqueFunction<FDeviceButtonState __cdecl(FInputDeviceState const &)> GetMouseButtonStateFunc;  // 0x0040, protected

    // Virtual functions that start here:
    //   GetClickPoint, GetDeviceRay, GetWorldRay, IsDown, IsPressed, IsReleased, SetUseCustomMouseButton
    //   SetUseLeftMouseButton, SetUseMiddleMouseButton, SetUseRightMouseButton
};
