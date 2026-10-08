// /Script/InteractiveToolsFramework.InteractiveToolManager
// Derives from: UObject
// size 0x138, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractiveToolManager.h

UCLASS(Transient)
class UInteractiveToolManager : public UObject, public IToolContextTransactionProvider
{
public:
    UPROPERTY() UInteractiveTool* ActiveLeftTool;  // 0x0030, size 0x8
    UPROPERTY() UInteractiveTool* ActiveRightTool;  // 0x0038, size 0x8
    UPROPERTY() TMap<FString, UInteractiveToolBuilder*> ToolBuilders;  // 0x0090, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(UInteractiveToolManager *,UInteractiveTool *),FDefaultDelegateUserPolicy> OnToolStarted;  // 0x0040
    TMulticastDelegate<void __cdecl(UInteractiveToolManager *,UInteractiveTool *),FDefaultDelegateUserPolicy> OnToolEnded;  // 0x0058
    IToolsContextQueriesAPI * QueriesAPI;  // 0x0070, protected
    IToolsContextTransactionsAPI * TransactionsAPI;  // 0x0078, protected
    UInputRouter * InputRouter;  // 0x0080, protected
    bool bIsActive;  // 0x0088, protected
    FString ActiveLeftBuilderName;  // 0x00E0, protected
    UInteractiveToolBuilder * ActiveLeftBuilder;  // 0x00F0, protected
    FString ActiveRightBuilderName;  // 0x00F8, protected
    UInteractiveToolBuilder * ActiveRightBuilder;  // 0x0108, protected
    EToolChangeTrackingMode ActiveToolChangeTrackingMode;  // 0x0110, protected
    FString ActiveLeftToolName;  // 0x0118, protected
    FString ActiveRightToolName;  // 0x0128, protected

    // Virtual functions that start here:
    //   ActivateTool, ActivateToolInternal, CanAcceptActiveTool, CanActivateTool, CanCancelActiveTool
    //   ConfigureChangeTrackingMode, DeactivateTool, DeactivateToolInternal, DisplayMessage, DrawHUD
    //   GetActiveTool, GetActiveToolBuilder, GetActiveToolName, GetContextQueriesAPI, HasActiveTool
    //   HasAnyActiveTool, Initialize, PostInvalidation, RegisterToolType, Render, RequestSelectionChange
    //   SelectActiveToolType, Shutdown, Tick
};
