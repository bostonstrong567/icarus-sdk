// /Script/InteractiveToolsFramework.GizmoTransformChangeStateTarget
// Derives from: UObject
// size 0xE0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/StateTargets.h

UCLASS()
class UGizmoTransformChangeStateTarget : public UObject, public IGizmoStateTarget
{
public:
    TWeakObjectPtr<USceneComponent,FWeakObjectPtr> TargetComponent;  // 0x0030, not reflected
    FText ChangeDescription;  // 0x0038, not reflected
    UPROPERTY() TScriptInterface<IToolContextTransactionProvider> TransactionManager;  // 0x0050, size 0x10
    FTransform InitialTransform;  // 0x0060, not reflected
    FTransform FinalTransform;  // 0x0090, not reflected
    TArray<TUniquePtr<IToolCommandChangeSource,TDefaultDelete<IToolCommandChangeSource> >,TSizedDefaultAllocator<32> > DependentChangeSources;  // 0x00C0, not reflected
    TArray<IToolCommandChangeSource *,TSizedDefaultAllocator<32> > ExternalDependentChangeSources;  // 0x00D0, not reflected
};
