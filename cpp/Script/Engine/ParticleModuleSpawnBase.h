// /Script/Engine.ParticleModuleSpawnBase
// Derives from: UParticleModule > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h

UCLASS(Abstract, EditInlineNew)
class UParticleModuleSpawnBase : public UParticleModule
{
public:
    UPROPERTY(EditAnywhere) uint8 bProcessSpawnRate : 1;  // 0x0030, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bProcessBurstList : 1;  // 0x0030, mask 0x02

    // Virtual functions that start here:
    //   GetBurstCount, GetEstimatedSpawnRate, GetMaximumBurstCount, GetMaximumSpawnRate, GetSpawnAmount
};
