// /Script/InteractiveToolsFramework.InteractiveToolsContext
// Derives from: UObject
// size 0x98, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractiveToolsContext.h

UCLASS(Transient)
class UInteractiveToolsContext : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    TMulticastDelegate<void __cdecl(FText const &),FDefaultDelegateUserPolicy> OnToolNotificationMessage;  // 0x0028, not reflected
    TMulticastDelegate<void __cdecl(FText const &),FDefaultDelegateUserPolicy> OnToolWarningMessage;  // 0x0040, not reflected
    UPROPERTY() UInputRouter* InputRouter;  // 0x0058, size 0x8
    UPROPERTY() UInteractiveToolManager* ToolManager;  // 0x0060, size 0x8
    UPROPERTY() UInteractiveGizmoManager* GizmoManager;  // 0x0068, size 0x8
protected:
    UPROPERTY() TSoftClassPtr<UInteractiveToolManager> ToolManagerClass;  // 0x0070, size 0x28

    // Virtual functions that start here:
    //   DeactivateActiveTool, DeactivateAllActiveTools, Initialize, PostToolNotificationMessage
    //   PostToolWarningMessage, Shutdown
};
