// /Script/Icarus.MountGeneticsSaveData
// size 0xC, declared in Icarus/Source/Icarus/AI/Mounts/GeneticsRecorderStructs.h

USTRUCT()
struct FMountGeneticsSaveData
{
public:
    UPROPERTY(SaveGame) FName GeneticValueName;  // 0x0000, size 0x8
    UPROPERTY(SaveGame) int32 Value;  // 0x0008, size 0x4
};
