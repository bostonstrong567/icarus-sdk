// /Script/Icarus.FarmableData
// size 0x30, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FFarmableData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFarmingSeedsRowHandle> AllowedSeeds;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumberOfCultivations;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bReseedsAfterHarvest;  // 0x002C, size 0x1
};
