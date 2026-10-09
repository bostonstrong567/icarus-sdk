// /Script/Synthesis.SourceEffectChorusSettings
// size 0x78, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectChorus.h

USTRUCT()
struct FSourceEffectChorusSettings
{
public:
    UPROPERTY() float Depth;  // 0x0000, size 0x4
    UPROPERTY() float Frequency;  // 0x0004, size 0x4
    UPROPERTY() float Feedback;  // 0x0008, size 0x4
    UPROPERTY() float WetLevel;  // 0x000C, size 0x4
    UPROPERTY() float DryLevel;  // 0x0010, size 0x4
    UPROPERTY() float Spread;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings DepthModulation;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings FrequencyModulation;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings FeedbackModulation;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings WetModulation;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings DryModulation;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundModulationDestinationSettings SpreadModulation;  // 0x0068, size 0x10
};
