// /Script/InteractiveToolsFramework.GizmoScaledTransformSource
// Derives from: UGizmoBaseTransformSource > UObject
// size 0xE0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/TransformSources.h

UCLASS()
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
public:
    UPROPERTY() TScriptInterface<IGizmoTransformSource> ChildTransformSource;  // 0x0048, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FSeparateScaleProvider ScaleProvider;  // 0x0060
};
