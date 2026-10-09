// /Script/Icarus.InventorySlotDynamicData
// size 0x8, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ActorStateRecorderComponent.h

USTRUCT()
struct FInventorySlotDynamicData
{
public:
    UPROPERTY(SaveGame) int32 Index;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) int32 Value;  // 0x0004, size 0x4
};
