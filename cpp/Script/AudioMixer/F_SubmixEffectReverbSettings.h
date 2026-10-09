// /Script/AudioMixer.SubmixEffectReverbSettings
// size 0x40, declared in Engine/Source/Runtime/AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectReverb.h

USTRUCT()
struct FSubmixEffectReverbSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bBypassEarlyReflections;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReflectionsDelay;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GainHF;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReflectionsGain;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bBypassLateReflections;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LateDelay;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DecayTime;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Density;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Diffusion;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AirAbsorptionGainHF;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DecayHFRatio;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LateGain;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Gain;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WetLevel;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DryLevel;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bBypass;  // 0x003C, size 0x1
};
