// /Script/InteractiveToolsFramework.InteractiveGizmo
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractiveGizmo.h

UCLASS(Transient)
class UInteractiveGizmo : public UObject, public IInputBehaviorSource
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() UInputBehaviorSet* InputBehaviors;  // 0x0030, size 0x8

    // Virtual functions that start here:
    //   AddInputBehavior, DrawHUD, GetGizmoManager, Render, Setup, Shutdown, Tick
};
