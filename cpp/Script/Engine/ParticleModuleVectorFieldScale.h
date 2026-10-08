// /Script/Engine.ParticleModuleVectorFieldScale
// Derives from: UParticleModuleVectorFieldBase > UParticleModule > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVectorFieldScale : public UParticleModuleVectorFieldBase
{
public:
    UPROPERTY(Instanced, Deprecated) UDistributionFloat* VectorFieldScale;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) FRawDistributionFloat VectorFieldScaleRaw;  // 0x0038, size 0x30
};
