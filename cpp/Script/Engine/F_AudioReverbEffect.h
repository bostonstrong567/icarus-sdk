// /Script/Engine.AudioReverbEffect
// size 0x48, declared in Engine/Source/Runtime/Engine/Public/AudioEffect.h

USTRUCT()
struct FAudioReverbEffect : public FAudioEffectParameters
{
public:
    double Time;  // 0x0008, not reflected
    float Volume;  // 0x0010, not reflected
    float Density;  // 0x0014, not reflected
    float Diffusion;  // 0x0018, not reflected
    float Gain;  // 0x001C, not reflected
    float GainHF;  // 0x0020, not reflected
    float DecayTime;  // 0x0024, not reflected
    float DecayHFRatio;  // 0x0028, not reflected
    float ReflectionsGain;  // 0x002C, not reflected
    float ReflectionsDelay;  // 0x0030, not reflected
    float LateGain;  // 0x0034, not reflected
    float LateDelay;  // 0x0038, not reflected
    float AirAbsorptionGainHF;  // 0x003C, not reflected
    float RoomRolloffFactor;  // 0x0040, not reflected
    bool bBypassEarlyReflections;  // 0x0044, not reflected
    bool bBypassLateReflections;  // 0x0045, not reflected
};
