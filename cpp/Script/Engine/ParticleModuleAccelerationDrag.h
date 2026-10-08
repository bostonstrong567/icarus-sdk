// /Script/Engine.ParticleModuleAccelerationDrag
// Derives from: UParticleModuleAccelerationBase > UParticleModule > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAccelerationDrag : public UParticleModuleAccelerationBase
{
public:
    UPROPERTY(Instanced, Deprecated) UDistributionFloat* DragCoefficient;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) FRawDistributionFloat DragCoefficientRaw;  // 0x0040, size 0x30
};
