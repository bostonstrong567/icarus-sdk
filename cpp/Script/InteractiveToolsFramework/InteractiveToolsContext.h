// /Script/InteractiveToolsFramework.InteractiveToolsContext
// Derives from: UObject
// size 0x98, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractiveToolsContext.h

UCLASS(Transient)
class UInteractiveToolsContext : public UObject
{
public:
    UPROPERTY() UInputRouter* InputRouter;  // 0x0058, size 0x8
    UPROPERTY() UInteractiveToolManager* ToolManager;  // 0x0060, size 0x8
    UPROPERTY() UInteractiveGizmoManager* GizmoManager;  // 0x0068, size 0x8
    UPROPERTY() TSoftClassPtr<UInteractiveToolManager> ToolManagerClass;  // 0x0070, size 0x28

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(FText const &),FDefaultDelegateUserPolicy> OnToolNotificationMessage;  // 0x0028
    TMulticastDelegate<void __cdecl(FText const &),FDefaultDelegateUserPolicy> OnToolWarningMessage;  // 0x0040

    // Virtual functions that start here:
    //   DeactivateActiveTool, DeactivateAllActiveTools, Initialize, PostToolNotificationMessage
    //   PostToolWarningMessage, Shutdown
};
