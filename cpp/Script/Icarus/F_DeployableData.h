// /Script/Icarus.DeployableData
// size 0xA8, declared in Icarus/Source/Icarus/Traits/Behaviours/DeployableData.h

USTRUCT()
struct FDeployableData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UDeployableComponent> Behaviour;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> Stats;  // 0x0040, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDeployableSetupRowHandle> Variants;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AudioOcclusionAmount;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EffectedByWeather;  // 0x00A4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bForceShowShelterIcon;  // 0x00A5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMustBeOutside;  // 0x00A6, size 0x1
};
