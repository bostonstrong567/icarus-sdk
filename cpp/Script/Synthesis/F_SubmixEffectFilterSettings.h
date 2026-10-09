// /Script/Synthesis.SubmixEffectFilterSettings
// size 0xC, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectFilter.h

USTRUCT()
struct FSubmixEffectFilterSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESubmixFilterType FilterType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESubmixFilterAlgorithm FilterAlgorithm;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FilterFrequency;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FilterQ;  // 0x0008, size 0x4
};
