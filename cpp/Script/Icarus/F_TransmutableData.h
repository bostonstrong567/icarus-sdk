// /Script/Icarus.TransmutableData
// size 0x50, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FTransmutableData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UnitsProvided;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle ByProductItem;  // 0x001C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DescriptionText;  // 0x0038, size 0x18
};
