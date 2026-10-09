// /Script/Icarus.InstancedLevelSaveDataRecord
// size 0x70, declared in Icarus/Source/Icarus/World/InstancedLevels/InstancedLevelRecorderComponent.h

USTRUCT()
struct FInstancedLevelSaveDataRecord
{
public:
    UPROPERTY(SaveGame) int32 SelectedSlot;  // 0x0000, size 0x4
    UPROPERTY(SaveGame) FVector LoadedLocation;  // 0x0004, size 0xC
    UPROPERTY(SaveGame) FString UniqueLevelName;  // 0x0010, size 0x10
    UPROPERTY(SaveGame) FInstancedBlobSave InstancedSave;  // 0x0020, size 0x40
    UPROPERTY(SaveGame) TArray<int32> InstancedInventories;  // 0x0060, size 0x10
};
