// /Script/Engine.ParticleModuleVectorFieldScaleOverLife
// Derives from: UParticleModuleVectorFieldBase > UParticleModule > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVectorFieldScaleOverLife : public UParticleModuleVectorFieldBase
{
public:
    UPROPERTY(Instanced, Deprecated) UDistributionFloat* VectorFieldScaleOverLife;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) FRawDistributionFloat VectorFieldScaleOverLifeRaw;  // 0x0038, size 0x30
};
