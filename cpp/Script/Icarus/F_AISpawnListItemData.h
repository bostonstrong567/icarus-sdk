// /Script/Icarus.AISpawnListItemData
// size 0x28, declared in Icarus/Source/Icarus/AI/AISpawnConfigData.h

USTRUCT()
struct FAISpawnListItemData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupEnum AISetup;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpawnWeight;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesEnum EpicCreature;  // 0x0018, size 0x10
};
