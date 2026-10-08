// /Script/Icarus.SavedInventoryContainerData
// size 0x30, declared in Icarus/Source/Icarus/Inventory/ContainerManager/IcarusContainerManagerRecorderComponent.h

USTRUCT()
struct FSavedInventoryContainerData
{
    UPROPERTY(SaveGame) int32 InventoryIndex;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) FName InventoryInfo;  // 0x0004, size 0x8
    UPROPERTY(SaveGame) FInventorySaveData InventorySaveData;  // 0x0010, size 0x18
    UPROPERTY(SaveGame) bool bInventoryWantsTick;  // 0x0028, size 0x1
};
