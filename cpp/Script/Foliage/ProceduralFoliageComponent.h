// /Script/Foliage.ProceduralFoliageComponent
// Derives from: UActorComponent > UObject
// size 0xD8, declared in Engine/Source/Runtime/Foliage/Public/ProceduralFoliageComponent.h

UCLASS(Config=Engine)
class UProceduralFoliageComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UProceduralFoliageSpawner* FoliageSpawner;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TileOverlap;  // 0x00B8, size 0x4
    UPROPERTY() AVolume* SpawningVolume;  // 0x00C0, size 0x8
    UPROPERTY() FGuid ProceduralGuid;  // 0x00C8, size 0x10

    // Virtual functions that start here:
    //   GetBounds
};
