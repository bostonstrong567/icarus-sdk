// /Script/Icarus.ScalingValueMap
// size 0x14, declared in Icarus/Source/Icarus/DataStructs/Scaling/ScalingRuleData.h

USTRUCT()
struct FScalingValueMap
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InMinValue;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InMaxValue;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OutMinPercentScale;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OutMaxPercentScale;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bClampOutput;  // 0x0010, size 0x1
};
