// /Script/Icarus.FarmingSeedData
// size 0x1B0, declared in Icarus/Source/Icarus/DataStructs/FarmingSeedData.h

USTRUCT()
struct FFarmingSeedData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle CropRewards;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle DecayedRewards;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFarmingSeedAudioData Audio;  // 0x0048, size 0x78
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAtmospheresRowHandle> OptimalBiomes;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFarmingGrowthStatesRowHandle Stage1;  // 0x00D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFarmingGrowthStatesRowHandle Stage2;  // 0x00E8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFarmingGrowthStatesRowHandle Stage3;  // 0x0100, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFarmingGrowthStatesRowHandle Stage4;  // 0x0118, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFarmingGrowthStatesRowHandle Mature;  // 0x0130, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFarmingGrowthStatesRowHandle Decayed;  // 0x0148, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemableRowHandle Itemable;  // 0x0160, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDeployableRowHandle Deployable;  // 0x0178, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECropMeshRotationType RotationType;  // 0x0190, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle FatigueModifier;  // 0x0194, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FatigueIncreaseEachHarvest;  // 0x01AC, size 0x4
};
