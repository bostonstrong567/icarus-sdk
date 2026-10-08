// /Script/Engine.ParticleModuleParameterDynamic
// Derives from: UParticleModuleParameterBase > UParticleModule > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Particles/Parameter/ParticleModuleParameterDynamic.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase
{
public:
    UPROPERTY(EditAnywhere) TArray<FEmitterDynamicParameter> DynamicParams;  // 0x0030, size 0x10
    UPROPERTY() int32 UpdateFlags;  // 0x0040, size 0x4
    UPROPERTY() uint8 bUsesVelocity : 1;  // 0x0044, mask 0x01

    // Virtual functions that start here:
    //   UpdateParameterNames, UpdateUsageFlags
};
