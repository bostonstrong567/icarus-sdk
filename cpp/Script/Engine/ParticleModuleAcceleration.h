// /Script/Engine.ParticleModuleAcceleration
// Derives from: UParticleModuleAccelerationBase > UParticleModule > UObject
// size 0x88, declared in Engine/Source/Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAcceleration.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAcceleration : public UParticleModuleAccelerationBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector Acceleration;  // 0x0038, size 0x48
    UPROPERTY(EditAnywhere) uint8 bApplyOwnerScale : 1;  // 0x0080, mask 0x01
};
