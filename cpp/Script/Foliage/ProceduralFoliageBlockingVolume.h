// /Script/Foliage.ProceduralFoliageBlockingVolume
// Derives from: AVolume > ABrush > AActor > UObject
// size 0x260, declared in Engine/Source/Runtime/Foliage/Public/ProceduralFoliageBlockingVolume.h

UCLASS(MinimalAPI, Config=Engine)
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
    UPROPERTY(EditAnywhere) AProceduralFoliageVolume* ProceduralFoliageVolume;  // 0x0258, size 0x8
};
