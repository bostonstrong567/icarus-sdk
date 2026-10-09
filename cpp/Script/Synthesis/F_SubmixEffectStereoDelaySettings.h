// /Script/Synthesis.SubmixEffectStereoDelaySettings
// size 0x24, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectStereoDelay.h

USTRUCT()
struct FSubmixEffectStereoDelaySettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EStereoDelaySourceEffect DelayMode;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DelayTimeMsec;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Feedback;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DelayRatio;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WetLevel;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DryLevel;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFilterEnabled;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EStereoDelayFiltertype FilterType;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FilterFrequency;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FilterQ;  // 0x0020, size 0x4
};
