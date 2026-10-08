// /Script/InteractiveToolsFramework.InteractiveGizmo
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractiveGizmo.h

UCLASS(Transient)
class UInteractiveGizmo : public UObject, public IInputBehaviorSource
{
public:
    UPROPERTY() UInputBehaviorSet* InputBehaviors;  // 0x0030, size 0x8

    // Virtual functions that start here:
    //   AddInputBehavior, DrawHUD, GetGizmoManager, Render, Setup, Shutdown, Tick
};
