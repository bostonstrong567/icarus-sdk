// /Script/Engine.ReverbEffect
// Derives from: UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Sound/ReverbEffect.h

UCLASS(MinimalAPI)
class UReverbEffect : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bBypassEarlyReflections;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) float ReflectionsDelay;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) float GainHF;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) float ReflectionsGain;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bBypassLateReflections;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere) float LateDelay;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) float DecayTime;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) float Density;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) float Diffusion;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float AirAbsorptionGainHF;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) float DecayHFRatio;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere) float LateGain;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) float Gain;  // 0x0058, size 0x4
    UPROPERTY() float RoomRolloffFactor;  // 0x005C, size 0x4
};
