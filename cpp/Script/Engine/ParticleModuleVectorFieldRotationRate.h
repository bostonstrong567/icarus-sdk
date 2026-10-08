// /Script/Engine.ParticleModuleVectorFieldRotationRate
// Derives from: UParticleModuleVectorFieldBase > UParticleModule > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldRotationRate.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase
{
public:
    UPROPERTY(EditAnywhere) FVector RotationRate;  // 0x0030, size 0xC
};
