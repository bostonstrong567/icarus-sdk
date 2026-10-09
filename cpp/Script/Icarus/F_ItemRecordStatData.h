// /Script/Icarus.ItemRecordStatData
// size 0xC, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ItemStateRecorderComponent.h

USTRUCT()
struct FItemRecordStatData
{
public:
    UPROPERTY(SaveGame) FName Stat;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) int32 Value;  // 0x0008, size 0x4
};
