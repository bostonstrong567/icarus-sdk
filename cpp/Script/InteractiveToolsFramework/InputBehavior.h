// /Script/InteractiveToolsFramework.InputBehavior
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InputBehavior.h

UCLASS(Transient)
class UInputBehavior : public UObject
{
protected:
    FInputCapturePriority DefaultPriority;  // 0x0028, not reflected

    // Virtual functions that start here:
    //   BeginCapture, BeginHoverCapture, EndHoverCapture, ForceEndCapture, GetPriority, GetSupportedDevices
    //   SetDefaultPriority, UpdateCapture, UpdateHoverCapture, WantsCapture, WantsHoverCapture
    //   WantsHoverEvents
};
