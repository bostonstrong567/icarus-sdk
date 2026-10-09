// /Script/Icarus.MountTalentSaveData
// size 0x18, declared in Icarus/Source/Icarus/AI/Mounts/IcarusMountCharacterRecorderComponent.h

USTRUCT()
struct FMountTalentSaveData
{
public:
    UPROPERTY(SaveGame) FString TalentRowName;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) int32 TalentRank;  // 0x0010, size 0x4
};
