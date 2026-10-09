// /Script/Engine.ReverbSettings
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Sound/ReverbSettings.h

USTRUCT()
struct FReverbSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bApplyReverb;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UReverbEffect* ReverbEffect;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundEffectSubmixPreset* ReverbPluginEffect;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Volume;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FadeTime;  // 0x001C, size 0x4
};
