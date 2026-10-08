// /Script/Icarus.EquipmentRequestInventoryContainer
// Derives from: AActor > UObject
// size 0x238, declared in Icarus/Source/Icarus/Systems/Deployables/EquipmentRequestInventoryContainer.h

UCLASS(Config=Engine)
class AEquipmentRequestInventoryContainer : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventoryComponent* InventoryComponent;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UInventory* MetaInventory;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UInventory* CargoInventory;  // 0x0230, size 0x8

    UFUNCTION() void OnMetaInventoryChanged();
};
