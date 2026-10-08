// /Script/Engine.ParticleModuleSpawn
// Derives from: UParticleModuleSpawnBase > UParticleModule > UObject
// size 0xE8, declared in Engine/Source/Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSpawn : public UParticleModuleSpawnBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionFloat Rate;  // 0x0038, size 0x30
    UPROPERTY(EditAnywhere) FRawDistributionFloat RateScale;  // 0x0068, size 0x30
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleBurstMethod> ParticleBurstMethod;  // 0x0098, size 0x1
    UPROPERTY(EditAnywhere) TArray<FParticleBurst> BurstList;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere) FRawDistributionFloat BurstScale;  // 0x00B0, size 0x30
    UPROPERTY(EditAnywhere) uint8 bApplyGlobalSpawnRateScale : 1;  // 0x00E0, mask 0x01
};
