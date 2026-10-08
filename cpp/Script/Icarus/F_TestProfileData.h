// /Script/Icarus.TestProfileData
// size 0x60, declared in Icarus/Source/Icarus/AutomatedTesting/IcarusTestRail.h

USTRUCT()
struct FTestProfileData
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LatestWindowedFrameAverage;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinWindowedFrameAverage;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxWindowedFrameAverage;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxWindowedFrametimeRailPosition;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinFrametime;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxFrametime;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxFrametimeRailPosition;  // 0x0028, size 0x4

    // Not reflected:
    TArray<float,TSizedDefaultAllocator<32> > FrameTimes;  // 0x0000
    float[10] FrameWindow;  // 0x002C
    int32 OldestFrame;  // 0x0054
    int32 CurrentWindowNum;  // 0x0058
};
