// /Script/Icarus.ConsumableData
// size 0xA0, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FConsumableData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> Stats;  // 0x0018, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifier Modifier;  // 0x0068, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DescriptionText;  // 0x0088, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemTemplateRowHandle> Byproducts;  // 0x0090, size 0x10
};
