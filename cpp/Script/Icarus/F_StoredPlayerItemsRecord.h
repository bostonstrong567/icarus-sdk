// /Script/Icarus.StoredPlayerItemsRecord
// size 0x20, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/GameModeStateRecorderComponent.h

USTRUCT()
struct FStoredPlayerItemsRecord
{
public:
    UPROPERTY(SaveGame) FString PlayerId;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) TArray<FInventorySlotSaveData> Items;  // 0x0010, size 0x10
};
