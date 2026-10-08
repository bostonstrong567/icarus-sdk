// /Script/Icarus.ProspectSaveData
// size 0xE0, declared in Icarus/Source/Icarus/Subsystems/Offline/ProspectSaveData.h

USTRUCT()
struct FProspectSaveData
{
    UPROPERTY(EditAnywhere, SaveGame) FProspectInfo ProspectInfo;  // 0x0000, size 0xA0
    UPROPERTY(EditAnywhere, SaveGame) FProspectBlob ProspectBlob;  // 0x00A0, size 0x40
};
