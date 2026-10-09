// /Script/Icarus.InventorySaveData
// size 0x18, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorStateRecorderComponent.h

USTRUCT()
struct FInventorySaveData
{
public:
    UPROPERTY(SaveGame) TArray<FInventorySlotSaveData> Slots;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) int32 InventoryID;  // 0x0010, size 0x4
};
