// /Script/InteractiveToolsFramework.GizmoComponentWorldTransformSource
// Derives from: UGizmoBaseTransformSource > UObject
// size 0x58, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/TransformSources.h

UCLASS()
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
    UPROPERTY(Instanced) USceneComponent* Component;  // 0x0048, size 0x8
    UPROPERTY() bool bModifyComponentOnTransform;  // 0x0050, size 0x1
};
