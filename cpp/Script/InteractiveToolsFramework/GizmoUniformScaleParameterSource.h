// /Script/InteractiveToolsFramework.GizmoUniformScaleParameterSource
// Derives from: UGizmoBaseVec2ParameterSource > UObject
// size 0xF0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/ParameterToTransformAdapters.h

UCLASS()
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
    UPROPERTY() TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x0048, size 0x10
    UPROPERTY() TScriptInterface<IGizmoTransformSource> TransformSource;  // 0x0058, size 0x10
    UPROPERTY() float ScaleMultiplier;  // 0x0068, size 0x4
    UPROPERTY() FVector2D Parameter;  // 0x006C, size 0x8
    UPROPERTY() FGizmoVec2ParameterChange LastChange;  // 0x0074, size 0x10
    UPROPERTY() FVector CurScaleOrigin;  // 0x0084, size 0xC
    UPROPERTY() FVector CurScaleNormal;  // 0x0090, size 0xC
    UPROPERTY() FVector CurScaleAxisX;  // 0x009C, size 0xC
    UPROPERTY() FVector CurScaleAxisY;  // 0x00A8, size 0xC
    UPROPERTY() FTransform InitialTransform;  // 0x00C0, size 0x30
};
