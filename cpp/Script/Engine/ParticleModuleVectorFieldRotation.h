// /Script/Engine.ParticleModuleVectorFieldRotation
// Derives from: UParticleModuleVectorFieldBase > UParticleModule > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldRotation.h

UCLASS(EditInlineNew)
class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase
{
public:
    UPROPERTY(EditAnywhere) FVector MinInitialRotation;  // 0x0030, size 0xC
    UPROPERTY(EditAnywhere) FVector MaxInitialRotation;  // 0x003C, size 0xC
};
