// /Script/InteractiveToolsFramework.InteractiveGizmoManager
// Derives from: UObject
// size 0xB8, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractiveGizmoManager.h

UCLASS(Transient)
class UInteractiveGizmoManager : public UObject, public IToolContextTransactionProvider
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TArray<FActiveGizmo> ActiveGizmos;  // 0x0030, size 0x10
    IToolsContextQueriesAPI * QueriesAPI;  // 0x0040, not reflected
    IToolsContextTransactionsAPI * TransactionsAPI;  // 0x0048, not reflected
    UInputRouter * InputRouter;  // 0x0050, not reflected
    UPROPERTY() TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders;  // 0x0058, size 0x50
    bool bDefaultGizmosRegistered;  // 0x00A8, not reflected
    UTransformGizmoBuilder * CustomThreeAxisBuilder;  // 0x00B0, not reflected

    // Virtual functions that start here:
    //   Create3AxisTransformGizmo, CreateCustomTransformGizmo, CreateGizmo, DeregisterGizmoType
    //   DestroyAllGizmosByOwner, DestroyAllGizmosOfType, DestroyGizmo, DisplayMessage, DrawHUD
    //   FindAllGizmosOfType, FindGizmoByInstanceIdentifier, GetContextQueriesAPI, Initialize
    //   PostInvalidation, RegisterDefaultGizmos, RegisterGizmoType, Render, Shutdown, Tick
};
