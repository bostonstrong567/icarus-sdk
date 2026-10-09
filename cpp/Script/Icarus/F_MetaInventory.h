// /Script/Icarus.MetaInventory
// size 0x18, declared in Icarus/Source/Icarus/DataStructs/MetaInventoryTypes.h

USTRUCT()
struct FMetaInventory
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EMetaInventoryID InventoryId;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> Items;  // 0x0008, size 0x10
};
