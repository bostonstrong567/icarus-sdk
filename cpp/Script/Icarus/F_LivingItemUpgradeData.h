// /Script/Icarus.LivingItemUpgradeData
// size 0x50, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/LivingItemUpgradesLibrary.generated.h

USTRUCT()
struct FLivingItemUpgradeData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsRowHandle AlterationToApply;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWorkshopCost> UpgradeCost;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMeshCustomisationData> MeshCustomisations;  // 0x0040, size 0x10
};
