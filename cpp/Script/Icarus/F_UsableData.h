// /Script/Icarus.UsableData
// size 0x30, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FUsableData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FUseCondition> Uses;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAlwaysShowContextMenu;  // 0x0028, size 0x1
};
