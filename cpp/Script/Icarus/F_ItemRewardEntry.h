// /Script/Icarus.ItemRewardEntry
// size 0x88, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FItemRewardEntry
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Item;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DropChance;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsRowHandle DropChanceAdditiveStat;  // 0x001C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsRowHandle RequiredStatToDrop;  // 0x0034, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinRandomStackCount;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxRandomStackCount;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRewardsScale;  // 0x0054, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsRowHandle StackAdditiveStat;  // 0x0058, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsRowHandle StackMultiplicativeStat;  // 0x0070, size 0x18
};
