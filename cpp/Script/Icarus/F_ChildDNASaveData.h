// /Script/Icarus.ChildDNASaveData
// size 0x40, declared in Icarus/Source/Icarus/AI/Mounts/GeneticsRecorderStructs.h

USTRUCT()
struct FChildDNASaveData
{
public:
    UPROPERTY(SaveGame) TArray<FMountGeneticsSaveData> Genetics;  // 0x0000, size 0x10
    UPROPERTY(SaveGame) int32 Sex;  // 0x0010, size 0x4
    UPROPERTY(SaveGame) int32 UniqueVariation;  // 0x0014, size 0x4
    UPROPERTY(SaveGame) FName LineageName;  // 0x0018, size 0x8
    UPROPERTY(SaveGame) FString MotherName;  // 0x0020, size 0x10
    UPROPERTY(SaveGame) FString FatherName;  // 0x0030, size 0x10
};
