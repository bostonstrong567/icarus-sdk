// /Script/InteractiveToolsFramework.InputBehavior
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InputBehavior.h

UCLASS(Transient)
class UInputBehavior : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FInputCapturePriority DefaultPriority;  // 0x0028, protected

    // Virtual functions that start here:
    //   BeginCapture, BeginHoverCapture, EndHoverCapture, ForceEndCapture, GetPriority, GetSupportedDevices
    //   SetDefaultPriority, UpdateCapture, UpdateHoverCapture, WantsCapture, WantsHoverCapture
    //   WantsHoverEvents
};
