// /Script/Synthesis.SourceEffectSimpleDelaySettings
// size 0x18, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectSimpleDelay.h

USTRUCT()
struct FSourceEffectSimpleDelaySettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpeedOfSound;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DelayAmount;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DryAmount;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WetAmount;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Feedback;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bDelayBasedOnDistance : 1;  // 0x0014, mask 0x01
};
