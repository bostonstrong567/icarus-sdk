// /Script/Landscape.ControlPointMeshComponent
// Derives from: UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4F0, declared in Engine/Source/Runtime/Landscape/Classes/ControlPointMeshComponent.h

UCLASS(EditInlineNew, MinimalAPI, Config=Engine)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
    UPROPERTY() float VirtualTextureMainPassMaxDrawDistance;  // 0x04E0, size 0x4
};
