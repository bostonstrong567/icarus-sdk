// /Script/Engine.ParticleModuleAccelerationConstant
// Derives from: UParticleModuleAccelerationBase > UParticleModule > UObject
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationConstant.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAccelerationConstant : public UParticleModuleAccelerationBase
{
public:
    UPROPERTY(EditAnywhere) FVector Acceleration;  // 0x0038, size 0xC
};
