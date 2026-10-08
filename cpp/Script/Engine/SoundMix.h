// /Script/Engine.SoundMix
// Derives from: UObject
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundMix.h

UCLASS(MinimalAPI)
class USoundMix : public UObject
{
public:
    UPROPERTY(EditAnywhere) uint8 bApplyEQ : 1;  // 0x0028, mask 0x01
    UPROPERTY(EditAnywhere) float EQPriority;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) FAudioEQEffect EQSettings;  // 0x0030, size 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FSoundClassAdjuster> SoundClassEffects;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere) float InitialDelay;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) float FadeInTime;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere) float Duration;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere) float FadeOutTime;  // 0x008C, size 0x4
};
