// /Script/InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// Derives from: UGizmoBaseFloatParameterSource > UObject
// size 0x110, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/ParameterToTransformAdapters.h

UCLASS()
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
    TUniqueFunction<bool __cdecl(FVector const &,FVector &)> PositionConstraintFunction;  // 0x0050, not reflected
    UPROPERTY() TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x0090, size 0x10
    UPROPERTY() TScriptInterface<IGizmoTransformSource> TransformSource;  // 0x00A0, size 0x10
    UPROPERTY() float Parameter;  // 0x00B0, size 0x4
    UPROPERTY() FGizmoFloatParameterChange LastChange;  // 0x00B4, size 0x8
    UPROPERTY() FVector CurTranslationAxis;  // 0x00BC, size 0xC
    UPROPERTY() FVector CurTranslationOrigin;  // 0x00C8, size 0xC
    UPROPERTY() FTransform InitialTransform;  // 0x00E0, size 0x30
};
