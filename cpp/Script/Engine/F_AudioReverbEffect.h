// /Script/Engine.AudioReverbEffect
// size 0x48, declared in Engine/Source/Runtime/Engine/Public/AudioEffect.h

USTRUCT()
struct FAudioReverbEffect : public FAudioEffectParameters
{

    // Not reflected:
    double Time;  // 0x0008
    float Volume;  // 0x0010
    float Density;  // 0x0014
    float Diffusion;  // 0x0018
    float Gain;  // 0x001C
    float GainHF;  // 0x0020
    float DecayTime;  // 0x0024
    float DecayHFRatio;  // 0x0028
    float ReflectionsGain;  // 0x002C
    float ReflectionsDelay;  // 0x0030
    float LateGain;  // 0x0034
    float LateDelay;  // 0x0038
    float AirAbsorptionGainHF;  // 0x003C
    float RoomRolloffFactor;  // 0x0040
    bool bBypassEarlyReflections;  // 0x0044
    bool bBypassLateReflections;  // 0x0045
};
