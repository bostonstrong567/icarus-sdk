// /Script/Foliage.ProceduralFoliageVolume
// Derives from: AVolume > ABrush > AActor > UObject
// size 0x260, declared in Engine/Source/Runtime/Foliage/Public/ProceduralFoliageVolume.h

UCLASS(Config=Engine)
class AProceduralFoliageVolume : public AVolume
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UProceduralFoliageComponent* ProceduralComponent;  // 0x0258, size 0x8
};
