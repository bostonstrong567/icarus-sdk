// /Script/Icarus.PlayerHistoryEntryRecord
// size 0x28, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/PlayerHistoryRecorderComponent.h

USTRUCT()
struct FPlayerHistoryEntryRecord
{
public:
    UPROPERTY(SaveGame) FString UserId;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) int32 ChrSlot;  // 0x0010, size 0x4
    UPROPERTY(SaveGame) FString CachedCharacterName;  // 0x0018, size 0x10
};
