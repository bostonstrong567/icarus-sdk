// /Script/InteractiveToolsFramework.InteractiveGizmoManager
// Derives from: UObject
// size 0xB8, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InteractiveGizmoManager.h

UCLASS(Transient)
class UInteractiveGizmoManager : public UObject, public IToolContextTransactionProvider
{
public:
    UPROPERTY() TArray<FActiveGizmo> ActiveGizmos;  // 0x0030, size 0x10
    UPROPERTY() TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders;  // 0x0058, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    IToolsContextQueriesAPI * QueriesAPI;  // 0x0040, protected
    IToolsContextTransactionsAPI * TransactionsAPI;  // 0x0048, protected
    UInputRouter * InputRouter;  // 0x0050, protected
    bool bDefaultGizmosRegistered;  // 0x00A8, protected
    UTransformGizmoBuilder * CustomThreeAxisBuilder;  // 0x00B0, protected

    // Virtual functions that start here:
    //   Create3AxisTransformGizmo, CreateCustomTransformGizmo, CreateGizmo, DeregisterGizmoType
    //   DestroyAllGizmosByOwner, DestroyAllGizmosOfType, DestroyGizmo, DisplayMessage, DrawHUD
    //   FindAllGizmosOfType, FindGizmoByInstanceIdentifier, GetContextQueriesAPI, Initialize
    //   PostInvalidation, RegisterDefaultGizmos, RegisterGizmoType, Render, Shutdown, Tick
};
