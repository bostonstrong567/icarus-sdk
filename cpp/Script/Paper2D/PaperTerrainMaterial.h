// /Script/Paper2D.PaperTerrainMaterial
// Derives from: UDataAsset > UObject
// size 0x48, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTerrainMaterial.h

UCLASS()
class UPaperTerrainMaterial : public UDataAsset
{
public:
    UPROPERTY(EditAnywhere) TArray<FPaperTerrainMaterialRule> Rules;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere) UPaperSprite* InteriorFill;  // 0x0040, size 0x8
};
