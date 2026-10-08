// /Script/Icarus.WorkshopItem
// size 0x68, declared in Icarus/Source/Icarus/IcarusGenerated/WorkshopItems/WorkshopItemsRowHandle.h

USTRUCT()
struct FWorkshopItem : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle Item;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWorkshopCost> ResearchCost;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWorkshopCost> ReplicationCost;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentsRowHandle RequiredMission;  // 0x0050, size 0x18
};
