// /Script/Icarus.InventorySlotStatData
// size 0x20, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorStateRecorderComponent.h

USTRUCT()
struct FInventorySlotStatData
{
    UPROPERTY(SaveGame) int32 Index;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) FString Name;  // 0x0008, size 0x10
    UPROPERTY(SaveGame) int32 Value;  // 0x0018, size 0x4
};
