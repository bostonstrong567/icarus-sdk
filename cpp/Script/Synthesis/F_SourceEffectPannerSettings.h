// /Script/Synthesis.SourceEffectPannerSettings
// size 0x8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectPanner.h

USTRUCT()
struct FSourceEffectPannerSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Spread;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Pan;  // 0x0004, size 0x4
};
