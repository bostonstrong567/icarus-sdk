// /Script/Synthesis.SourceEffectEQSettings
// size 0x10, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectEQ.h

USTRUCT()
struct FSourceEffectEQSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSourceEffectEQBand> EQBands;  // 0x0000, size 0x10
};
