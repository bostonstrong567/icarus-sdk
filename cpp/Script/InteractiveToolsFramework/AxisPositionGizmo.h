// /Script/InteractiveToolsFramework.AxisPositionGizmo
// Derives from: UInteractiveGizmo > UObject
// size 0xD8, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/AxisPositionGizmo.h

UCLASS(Transient)
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
    UPROPERTY() TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x0048, size 0x10
    UPROPERTY() TScriptInterface<IGizmoFloatParameterSource> ParameterSource;  // 0x0058, size 0x10
    UPROPERTY() TScriptInterface<IGizmoClickTarget> HitTarget;  // 0x0068, size 0x10
    UPROPERTY() TScriptInterface<IGizmoStateTarget> StateTarget;  // 0x0078, size 0x10
    UPROPERTY() bool bEnableSignedAxis;  // 0x0088, size 0x1
    UPROPERTY() bool bInInteraction;  // 0x0089, size 0x1
    UPROPERTY() FVector InteractionOrigin;  // 0x008C, size 0xC
    UPROPERTY() FVector InteractionAxis;  // 0x0098, size 0xC
    UPROPERTY() FVector InteractionStartPoint;  // 0x00A4, size 0xC
    UPROPERTY() FVector InteractionCurPoint;  // 0x00B0, size 0xC
    UPROPERTY() float InteractionStartParameter;  // 0x00BC, size 0x4
    UPROPERTY() float InteractionCurParameter;  // 0x00C0, size 0x4
    UPROPERTY() float ParameterSign;  // 0x00C4, size 0x4
protected:
    FVector LastHitPosition;  // 0x00C8, not reflected
    float InitialTargetParameter;  // 0x00D4, not reflected
};
