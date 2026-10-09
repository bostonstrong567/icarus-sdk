// /Script/IcarusGenerated.ResPurchaseWorkshopPack
// size 0x30, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResPurchaseWorkshopPack.h

USTRUCT()
struct FResPurchaseWorkshopPack
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryDelta InventoryDelta;  // 0x0008, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaResource> MetaResourceDelta;  // 0x0020, size 0x10
};
