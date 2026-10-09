// /Script/Synthesis.SourceEffectMidSideSpreaderSettings
// size 0x8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectMidSideSpreader.h

USTRUCT()
struct FSourceEffectMidSideSpreaderSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpreadAmount;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EStereoChannelMode InputMode;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EStereoChannelMode OutputMode;  // 0x0005, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEqualPower;  // 0x0006, size 0x1
};
