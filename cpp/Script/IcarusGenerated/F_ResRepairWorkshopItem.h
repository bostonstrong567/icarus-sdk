// /Script/IcarusGenerated.ResRepairWorkshopItem
// size 0x30, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemIcarus/RepairWorkshopItemCallbackProxyGen.generated.h

USTRUCT()
struct FResRepairWorkshopItem
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryDelta InventoryDelta;  // 0x0008, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaResource> CurrencyDelta;  // 0x0020, size 0x10
};
