// /Script/EyeTracker.EyeTrackerStereoGazeData
// size 0x40, declared in Engine/Source/Runtime/EyeTracker/Public/EyeTrackerTypes.h

USTRUCT()
struct FEyeTrackerStereoGazeData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LeftEyeOrigin;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LeftEyeDirection;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RightEyeOrigin;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RightEyeDirection;  // 0x0024, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector FixationPoint;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ConfidenceValue;  // 0x003C, size 0x4
};
