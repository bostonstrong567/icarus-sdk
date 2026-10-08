// /Script/InteractiveToolsFramework.GizmoRectangleComponent
// Derives from: UGizmoBaseComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4A0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/GizmoRectangleComponent.h

UCLASS(Config=Engine)
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
    UPROPERTY(EditAnywhere) FVector DirectionX;  // 0x0470, size 0xC
    UPROPERTY(EditAnywhere) FVector DirectionY;  // 0x047C, size 0xC
    UPROPERTY(EditAnywhere) float OffsetX;  // 0x0488, size 0x4
    UPROPERTY(EditAnywhere) float OffsetY;  // 0x048C, size 0x4
    UPROPERTY(EditAnywhere) float LengthX;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere) float LengthY;  // 0x0494, size 0x4
    UPROPERTY(EditAnywhere) float Thickness;  // 0x0498, size 0x4
    UPROPERTY(EditAnywhere) uint8 SegmentFlags;  // 0x049C, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    bool bFlippedX;  // 0x049D, private
    bool bFlippedY;  // 0x049E, private
    bool bRenderVisibility;  // 0x049F, private
};
