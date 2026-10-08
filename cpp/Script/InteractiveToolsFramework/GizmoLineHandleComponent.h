// /Script/InteractiveToolsFramework.GizmoLineHandleComponent
// Derives from: UGizmoBaseComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4A0, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/BaseGizmos/GizmoLineHandleComponent.h

UCLASS(Config=Engine)
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{
public:
    UPROPERTY(EditAnywhere) FVector Normal;  // 0x0470, size 0xC
    UPROPERTY(EditAnywhere) float HandleSize;  // 0x047C, size 0x4
    UPROPERTY(EditAnywhere) float Thickness;  // 0x0480, size 0x4
    UPROPERTY(EditAnywhere) FVector Direction;  // 0x0484, size 0xC
    UPROPERTY(EditAnywhere) float Length;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere) bool bImageScale;  // 0x0494, size 0x1
};
