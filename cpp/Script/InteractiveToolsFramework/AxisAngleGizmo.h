// /Script/InteractiveToolsFramework.AxisAngleGizmo
// Derives from: UInteractiveGizmo > UObject
// size 0xF0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/AxisAngleGizmo.h

UCLASS(Transient)
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
    UPROPERTY() TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x0048, size 0x10
    UPROPERTY() TScriptInterface<IGizmoFloatParameterSource> AngleSource;  // 0x0058, size 0x10
    UPROPERTY() TScriptInterface<IGizmoClickTarget> HitTarget;  // 0x0068, size 0x10
    UPROPERTY() TScriptInterface<IGizmoStateTarget> StateTarget;  // 0x0078, size 0x10
    UPROPERTY() bool bInInteraction;  // 0x0088, size 0x1
    UPROPERTY() FVector RotationOrigin;  // 0x008C, size 0xC
    UPROPERTY() FVector RotationAxis;  // 0x0098, size 0xC
    UPROPERTY() FVector RotationPlaneX;  // 0x00A4, size 0xC
    UPROPERTY() FVector RotationPlaneY;  // 0x00B0, size 0xC
    UPROPERTY() FVector InteractionStartPoint;  // 0x00BC, size 0xC
    UPROPERTY() FVector InteractionCurPoint;  // 0x00C8, size 0xC
    UPROPERTY() float InteractionStartAngle;  // 0x00D4, size 0x4
    UPROPERTY() float InteractionCurAngle;  // 0x00D8, size 0x4
protected:
    FVector LastHitPosition;  // 0x00DC, not reflected
    float InitialTargetAngle;  // 0x00E8, not reflected
    bool bEnableSnapAngleModifier;  // 0x00EC, not reflected
};
