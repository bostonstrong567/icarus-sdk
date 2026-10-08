// /Script/Icarus.AudioContextSubscriber
// size 0x20, declared in Icarus/Source/Icarus/Audio/AudioContextComponent.h

USTRUCT()
struct FAudioContextSubscriber
{
    UPROPERTY(Instanced) UFMODAudioComponent* AudioComponent;  // 0x0000, size 0x8

    // Not reflected:
    bool bUsesOcclusionParameter;  // 0x0008
    FName OcclusionParameterTraceName;  // 0x000C
    bool bUsesWaterImmersionParameter;  // 0x0014
    uint32 UniqueId;  // 0x0018
};
