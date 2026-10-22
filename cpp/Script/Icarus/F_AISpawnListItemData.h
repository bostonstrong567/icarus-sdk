// /Script/Icarus.AISpawnListItemData
// size 0x30, declared in Icarus/Source/Icarus/AI/AISpawnConfigData.h

USTRUCT()
struct FAISpawnListItemData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GreatHuntCampaignSpawner;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupEnum AISetup;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpawnWeight;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesEnum EpicCreature;  // 0x0020, size 0x10
};
