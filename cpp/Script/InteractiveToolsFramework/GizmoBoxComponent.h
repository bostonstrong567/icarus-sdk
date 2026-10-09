// /Script/InteractiveToolsFramework.GizmoBoxComponent
// Derives from: UGizmoBaseComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4B0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/GizmoBoxComponent.h

UCLASS(Config=Engine)
class UGizmoBoxComponent : public UGizmoBaseComponent
{
public:
    UPROPERTY(EditAnywhere) FVector Origin;  // 0x0470, size 0xC
    UPROPERTY(EditAnywhere) FQuat Rotation;  // 0x0480, size 0x10
    UPROPERTY(EditAnywhere) FVector Dimensions;  // 0x0490, size 0xC
    UPROPERTY(EditAnywhere) float LineThickness;  // 0x049C, size 0x4
    UPROPERTY(EditAnywhere) bool bRemoveHiddenLines;  // 0x04A0, size 0x1
    UPROPERTY(EditAnywhere) bool bEnableAxisFlip;  // 0x04A1, size 0x1
private:
    bool bFlippedX;  // 0x04A2, not reflected
    bool bFlippedY;  // 0x04A3, not reflected
    bool bFlippedZ;  // 0x04A4, not reflected
    bool bRenderVisibility;  // 0x04A5, not reflected
};
