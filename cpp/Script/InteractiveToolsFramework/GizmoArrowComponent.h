// /Script/InteractiveToolsFramework.GizmoArrowComponent
// Derives from: UGizmoBaseComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x490, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/GizmoArrowComponent.h

UCLASS(Config=Engine)
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
    UPROPERTY(EditAnywhere) FVector Direction;  // 0x0470, size 0xC
    UPROPERTY(EditAnywhere) float Gap;  // 0x047C, size 0x4
    UPROPERTY(EditAnywhere) float Length;  // 0x0480, size 0x4
    UPROPERTY(EditAnywhere) float Thickness;  // 0x0484, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    bool bFlipped;  // 0x0488, private
    bool bRenderVisibility;  // 0x0489, private
};
