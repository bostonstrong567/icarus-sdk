// /Script/Engine.AudioEQEffect
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundMix.h

USTRUCT()
struct FAudioEQEffect : public FAudioEffectParameters
{
    UPROPERTY(EditAnywhere) float FrequencyCenter0;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float Gain0;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) float Bandwidth0;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) float FrequencyCenter1;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) float Gain1;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) float Bandwidth1;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) float FrequencyCenter2;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) float Gain2;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) float Bandwidth2;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) float FrequencyCenter3;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) float Gain3;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float Bandwidth3;  // 0x003C, size 0x4

    // Not reflected:
    double RootTime;  // 0x0008
};
