// /Script/InteractiveToolsFramework.GizmoAxisScaleParameterSource
// Derives from: UGizmoBaseFloatParameterSource > UObject
// size 0xC0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/ParameterToTransformAdapters.h

UCLASS()
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
public:
    UPROPERTY() TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x0048, size 0x10
    UPROPERTY() TScriptInterface<IGizmoTransformSource> TransformSource;  // 0x0058, size 0x10
    UPROPERTY() float ScaleMultiplier;  // 0x0068, size 0x4
    UPROPERTY() float Parameter;  // 0x006C, size 0x4
    UPROPERTY() FGizmoFloatParameterChange LastChange;  // 0x0070, size 0x8
    UPROPERTY() FVector CurScaleAxis;  // 0x0078, size 0xC
    UPROPERTY() FVector CurScaleOrigin;  // 0x0084, size 0xC
    UPROPERTY() FTransform InitialTransform;  // 0x0090, size 0x30
};
