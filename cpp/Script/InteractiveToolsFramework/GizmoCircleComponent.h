// /Script/InteractiveToolsFramework.GizmoCircleComponent
// Derives from: UGizmoBaseComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x490, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/GizmoCircleComponent.h

UCLASS(Config=Engine)
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
    UPROPERTY(EditAnywhere) FVector Normal;  // 0x0470, size 0xC
    UPROPERTY(EditAnywhere) float Radius;  // 0x047C, size 0x4
    UPROPERTY(EditAnywhere) float Thickness;  // 0x0480, size 0x4
    UPROPERTY(EditAnywhere) int32 NumSides;  // 0x0484, size 0x4
    UPROPERTY(EditAnywhere) bool bViewAligned;  // 0x0488, size 0x1
    UPROPERTY(EditAnywhere) bool bOnlyAllowFrontFacingHits;  // 0x0489, size 0x1
private:
    bool bRenderVisibility;  // 0x048A, not reflected
    bool bCircleIsViewPlaneParallel;  // 0x048B, not reflected
};
