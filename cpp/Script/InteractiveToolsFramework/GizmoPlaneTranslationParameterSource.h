// /Script/InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// Derives from: UGizmoBaseVec2ParameterSource > UObject
// size 0x130, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/ParameterToTransformAdapters.h

UCLASS()
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
    TUniqueFunction<bool __cdecl(FVector const &,FVector &)> PositionConstraintFunction;  // 0x0050, not reflected
    UPROPERTY() TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x0090, size 0x10
    UPROPERTY() TScriptInterface<IGizmoTransformSource> TransformSource;  // 0x00A0, size 0x10
    UPROPERTY() FVector2D Parameter;  // 0x00B0, size 0x8
    UPROPERTY() FGizmoVec2ParameterChange LastChange;  // 0x00B8, size 0x10
    UPROPERTY() FVector CurTranslationOrigin;  // 0x00C8, size 0xC
    UPROPERTY() FVector CurTranslationNormal;  // 0x00D4, size 0xC
    UPROPERTY() FVector CurTranslationAxisX;  // 0x00E0, size 0xC
    UPROPERTY() FVector CurTranslationAxisY;  // 0x00EC, size 0xC
    UPROPERTY() FTransform InitialTransform;  // 0x0100, size 0x30
};
