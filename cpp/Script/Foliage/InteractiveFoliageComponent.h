// /Script/Foliage.InteractiveFoliageComponent
// Derives from: UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4F0, declared in Engine/Source/Runtime/Foliage/Private/InteractiveFoliageComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
    FInteractiveFoliageSceneProxy * FoliageSceneProxy;  // 0x04E0, not reflected
};
