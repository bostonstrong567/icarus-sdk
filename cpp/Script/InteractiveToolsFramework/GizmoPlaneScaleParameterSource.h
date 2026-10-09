// /Script/InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// Derives from: UGizmoBaseVec2ParameterSource > UObject
// size 0x130, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/ParameterToTransformAdapters.h

UCLASS()
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
    TUniqueFunction<bool __cdecl(FVector const &,FVector &)> PositionConstraintFunction;  // 0x0050, not reflected
    UPROPERTY() TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x0090, size 0x10
    UPROPERTY() TScriptInterface<IGizmoTransformSource> TransformSource;  // 0x00A0, size 0x10
    UPROPERTY() float ScaleMultiplier;  // 0x00B0, size 0x4
    UPROPERTY() FVector2D Parameter;  // 0x00B4, size 0x8
    UPROPERTY() FGizmoVec2ParameterChange LastChange;  // 0x00BC, size 0x10
    UPROPERTY() FVector CurScaleOrigin;  // 0x00CC, size 0xC
    UPROPERTY() FVector CurScaleNormal;  // 0x00D8, size 0xC
    UPROPERTY() FVector CurScaleAxisX;  // 0x00E4, size 0xC
    UPROPERTY() FVector CurScaleAxisY;  // 0x00F0, size 0xC
    UPROPERTY() FTransform InitialTransform;  // 0x0100, size 0x30
};
