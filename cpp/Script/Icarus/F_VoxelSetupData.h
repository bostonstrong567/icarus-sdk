// /Script/Icarus.VoxelSetupData
// size 0xC0, declared in Icarus/Source/Icarus/DataStructs/VoxelSetupData.h

USTRUCT()
struct FVoxelSetupData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EVoxelResourceCategory ResourceCategory;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle ResourceType;  // 0x001C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle SecondaryResourceType;  // 0x0034, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemTemplateRowHandle PyriticCrustResourceType;  // 0x004C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DensityMultiplier;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> FullyMinedSound;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FExperienceEventsRowHandle ExperienceForMining;  // 0x0090, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FStatsEnum RewardStat;  // 0x00A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag VoxelTag;  // 0x00B8, size 0x8
};
