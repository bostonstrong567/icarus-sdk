// /Script/Icarus.QuickMove
// size 0x38, declared in Icarus/Source/Icarus/Traits/Behaviours/Inventory/QuickMove.h

USTRUCT()
struct FQuickMove : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryIDEnum Source;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FInventoryIDEnum> Destinations;  // 0x0028, size 0x10
};
