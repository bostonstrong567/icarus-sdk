// /Script/Engine.QuartzTransportTimeStamp
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h

USTRUCT()
struct FQuartzTransportTimeStamp
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Bars;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Beat;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float BeatFraction;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Seconds;  // 0x000C, size 0x4
};
