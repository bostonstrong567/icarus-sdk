// /Script/Icarus.ScalingRuleData
// size 0x98, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/ScalingRulesLibrary.generated.h

USTRUCT()
struct FScalingRuleData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bScaleByNearbyPlayerCount;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingValueMap NearbyPlayersScaling;  // 0x001C, size 0x14
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CustomNearbyPlayersCurve;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bScaleByTargetLevel;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingValueMap TargetLevelScaling;  // 0x003C, size 0x14
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CustomTargetLevelCurve;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bScaleByProspectDifficulty;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingValueMap ProspectDifficultyScaling;  // 0x005C, size 0x14
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CustomProspectDifficultyCurve;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bScaleByAverageNearbyPlayerLevel;  // 0x0078, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingValueMap AverageNearbyPlayerLevelScaling;  // 0x007C, size 0x14
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CustomAverageNearbyPlayerLevelCurve;  // 0x0090, size 0x8
};
