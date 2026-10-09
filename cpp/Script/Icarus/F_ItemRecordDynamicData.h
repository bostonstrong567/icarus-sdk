// /Script/Icarus.ItemRecordDynamicData
// size 0x8, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ItemStateRecorderComponent.h

USTRUCT()
struct FItemRecordDynamicData
{
public:
    UPROPERTY(SaveGame) int32 Type;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) int32 Value;  // 0x0004, size 0x4
};
