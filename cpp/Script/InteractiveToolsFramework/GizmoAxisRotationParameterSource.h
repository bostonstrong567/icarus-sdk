// /Script/InteractiveToolsFramework.GizmoAxisRotationParameterSource
// Derives from: UGizmoBaseFloatParameterSource > UObject
// size 0x110, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/ParameterToTransformAdapters.h

UCLASS()
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
    UPROPERTY() TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x0090, size 0x10
    UPROPERTY() TScriptInterface<IGizmoTransformSource> TransformSource;  // 0x00A0, size 0x10
    UPROPERTY() float Angle;  // 0x00B0, size 0x4
    UPROPERTY() FGizmoFloatParameterChange LastChange;  // 0x00B4, size 0x8
    UPROPERTY() FVector CurRotationAxis;  // 0x00BC, size 0xC
    UPROPERTY() FVector CurRotationOrigin;  // 0x00C8, size 0xC
    UPROPERTY() FTransform InitialTransform;  // 0x00E0, size 0x30

    // Not reflected: the engine's scripting cannot see these.
    TUniqueFunction<FQuat __cdecl(FQuat const &)> RotationConstraintFunction;  // 0x0050
};
