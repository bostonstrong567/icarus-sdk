// /Script/InteractiveToolsFramework.InteractiveToolManager
// Derives from: UObject
// size 0x138, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractiveToolManager.h

UCLASS(Transient)
class UInteractiveToolManager : public UObject, public IToolContextTransactionProvider
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() UInteractiveTool* ActiveLeftTool;  // 0x0030, size 0x8
    UPROPERTY() UInteractiveTool* ActiveRightTool;  // 0x0038, size 0x8
    TMulticastDelegate<void __cdecl(UInteractiveToolManager *,UInteractiveTool *),FDefaultDelegateUserPolicy> OnToolStarted;  // 0x0040, not reflected
    TMulticastDelegate<void __cdecl(UInteractiveToolManager *,UInteractiveTool *),FDefaultDelegateUserPolicy> OnToolEnded;  // 0x0058, not reflected
protected:
    IToolsContextQueriesAPI * QueriesAPI;  // 0x0070, not reflected
    IToolsContextTransactionsAPI * TransactionsAPI;  // 0x0078, not reflected
    UInputRouter * InputRouter;  // 0x0080, not reflected
    bool bIsActive;  // 0x0088, not reflected
    UPROPERTY() TMap<FString, UInteractiveToolBuilder*> ToolBuilders;  // 0x0090, size 0x50
    FString ActiveLeftBuilderName;  // 0x00E0, not reflected
    UInteractiveToolBuilder * ActiveLeftBuilder;  // 0x00F0, not reflected
    FString ActiveRightBuilderName;  // 0x00F8, not reflected
    UInteractiveToolBuilder * ActiveRightBuilder;  // 0x0108, not reflected
    EToolChangeTrackingMode ActiveToolChangeTrackingMode;  // 0x0110, not reflected
    FString ActiveLeftToolName;  // 0x0118, not reflected
    FString ActiveRightToolName;  // 0x0128, not reflected

    // Virtual functions that start here:
    //   ActivateTool, ActivateToolInternal, CanAcceptActiveTool, CanActivateTool, CanCancelActiveTool
    //   ConfigureChangeTrackingMode, DeactivateTool, DeactivateToolInternal, DisplayMessage, DrawHUD
    //   GetActiveTool, GetActiveToolBuilder, GetActiveToolName, GetContextQueriesAPI, HasActiveTool
    //   HasAnyActiveTool, Initialize, PostInvalidation, RegisterToolType, Render, RequestSelectionChange
    //   SelectActiveToolType, Shutdown, Tick
};
