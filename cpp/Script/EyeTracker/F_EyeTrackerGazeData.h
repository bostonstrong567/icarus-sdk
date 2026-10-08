// /Script/EyeTracker.EyeTrackerGazeData
// size 0x28, declared in Engine/Source/Runtime/EyeTracker/Public/EyeTrackerTypes.h

USTRUCT()
struct FEyeTrackerGazeData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector GazeOrigin;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector GazeDirection;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FixationPoint;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ConfidenceValue;  // 0x0024, size 0x4
};
