// /Script/InteractiveToolsFramework.GizmoObjectModifyStateTarget
// Derives from: UObject
// size 0x58, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/StateTargets.h

UCLASS()
class UGizmoObjectModifyStateTarget : public UObject, public IGizmoStateTarget
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UObject,FWeakObjectPtr> ModifyObject;  // 0x0030
    FText TransactionDescription;  // 0x0038
    TWeakObjectPtr<UInteractiveGizmoManager,FWeakObjectPtr> GizmoManager;  // 0x0050
};
