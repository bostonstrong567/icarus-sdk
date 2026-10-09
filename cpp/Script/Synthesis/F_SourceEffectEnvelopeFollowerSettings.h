// /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
// size 0xC, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectEnvelopeFollower.h

USTRUCT()
struct FSourceEffectEnvelopeFollowerSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AttackTime;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReleaseTime;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EEnvelopeFollowerPeakMode PeakMode;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsAnalogMode;  // 0x0009, size 0x1
};
