// /Script/InteractiveToolsFramework.PlanePositionGizmo
// Derives from: UInteractiveGizmo > UObject
// size 0x100, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/PlanePositionGizmo.h

UCLASS(Transient)
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
    UPROPERTY() TScriptInterface<IGizmoAxisSource> AxisSource;  // 0x0048, size 0x10
    UPROPERTY() TScriptInterface<IGizmoVec2ParameterSource> ParameterSource;  // 0x0058, size 0x10
    UPROPERTY() TScriptInterface<IGizmoClickTarget> HitTarget;  // 0x0068, size 0x10
    UPROPERTY() TScriptInterface<IGizmoStateTarget> StateTarget;  // 0x0078, size 0x10
    UPROPERTY() bool bEnableSignedAxis;  // 0x0088, size 0x1
    UPROPERTY() bool bFlipX;  // 0x0089, size 0x1
    UPROPERTY() bool bFlipY;  // 0x008A, size 0x1
    UPROPERTY() bool bInInteraction;  // 0x008B, size 0x1
    UPROPERTY() FVector InteractionOrigin;  // 0x008C, size 0xC
    UPROPERTY() FVector InteractionNormal;  // 0x0098, size 0xC
    UPROPERTY() FVector InteractionAxisX;  // 0x00A4, size 0xC
    UPROPERTY() FVector InteractionAxisY;  // 0x00B0, size 0xC
    UPROPERTY() FVector InteractionStartPoint;  // 0x00BC, size 0xC
    UPROPERTY() FVector InteractionCurPoint;  // 0x00C8, size 0xC
    UPROPERTY() FVector2D InteractionStartParameter;  // 0x00D4, size 0x8
    UPROPERTY() FVector2D InteractionCurParameter;  // 0x00DC, size 0x8
    UPROPERTY() FVector2D ParameterSigns;  // 0x00E4, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FVector LastHitPosition;  // 0x00EC, protected
    FVector2D InitialTargetParameter;  // 0x00F8, protected
};
