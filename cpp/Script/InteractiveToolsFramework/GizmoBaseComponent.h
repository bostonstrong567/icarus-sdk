// /Script/InteractiveToolsFramework.GizmoBaseComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x470, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/GizmoBaseComponent.h

UCLASS(Config=Engine)
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(EditAnywhere) FLinearColor Color;  // 0x0450, size 0x10
    UPROPERTY(EditAnywhere) float HoverSizeMultiplier;  // 0x0460, size 0x4
    UPROPERTY(EditAnywhere) float PixelHitDistanceThreshold;  // 0x0464, size 0x4
protected:
    float DynamicPixelToWorldScale;  // 0x0468, not reflected
    bool bHovering;  // 0x046C, not reflected
    bool bWorld;  // 0x046D, not reflected
public:
    UFUNCTION() void UpdateHoverState(bool bHoveringIn);  // parameters 0x1
    UFUNCTION() void UpdateWorldLocalState(bool bWorldIn);  // parameters 0x1
};
