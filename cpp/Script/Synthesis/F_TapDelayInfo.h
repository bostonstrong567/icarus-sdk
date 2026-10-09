// /Script/Synthesis.TapDelayInfo
// size 0x18, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectTapDelay.h

USTRUCT()
struct FTapDelayInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETapLineMode TapLineMode;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DelayLength;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Gain;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OutputChannel;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PanInDegrees;  // 0x0010, size 0x4
    UPROPERTY(Transient) int32 TapId;  // 0x0014, size 0x4
};
