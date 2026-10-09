// /Script/Icarus.AudioContextSubscriber
// size 0x20, declared in Icarus/Source/Icarus/Audio/AudioContextComponent.h

USTRUCT()
struct FAudioContextSubscriber
{
public:
    UPROPERTY(Instanced) UFMODAudioComponent* AudioComponent;  // 0x0000, size 0x8
    bool bUsesOcclusionParameter;  // 0x0008, not reflected
    FName OcclusionParameterTraceName;  // 0x000C, not reflected
    bool bUsesWaterImmersionParameter;  // 0x0014, not reflected
    uint32 UniqueId;  // 0x0018, not reflected
};
