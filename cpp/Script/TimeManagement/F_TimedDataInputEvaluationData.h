// /Script/TimeManagement.TimedDataInputEvaluationData
// size 0x8, declared in Engine/Source/Runtime/TimeManagement/Public/ITimedDataInput.h

USTRUCT()
struct FTimedDataInputEvaluationData
{
public:
    UPROPERTY(BlueprintReadWrite) float DistanceToNewestSampleSeconds;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) float DistanceToOldestSampleSeconds;  // 0x0004, size 0x4
};
