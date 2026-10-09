// /Script/Icarus.CombustibleData
// size 0x40, declared in Icarus/Source/Icarus/Inventory/InventoryItemLibrary.h

USTRUCT()
struct FCombustibleData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MillijoulesProvided;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle ProducesItem;  // 0x001C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DescriptionText;  // 0x0034, size 0x8
};
