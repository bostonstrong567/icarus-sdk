// /Script/Engine.ParticleModuleSourceMovement
// Derives from: UParticleModuleLocationBase > UParticleModule > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleSourceMovement.h

UCLASS(EditInlineNew)
class UParticleModuleSourceMovement : public UParticleModuleLocationBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector SourceMovementScale;  // 0x0030, size 0x48
};
