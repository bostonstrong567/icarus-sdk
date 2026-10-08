// /Script/Engine.ParticleModuleOrbit
// Derives from: UParticleModuleOrbitBase > UParticleModule > UObject
// size 0x130, declared in Engine/Source/Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleOrbit : public UParticleModuleOrbitBase
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EOrbitChainMode> ChainMode;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere) FRawDistributionVector OffsetAmount;  // 0x0040, size 0x48
    UPROPERTY(EditAnywhere) FOrbitOptions OffsetOptions;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere) FRawDistributionVector RotationAmount;  // 0x0090, size 0x48
    UPROPERTY(EditAnywhere) FOrbitOptions RotationOptions;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere) FRawDistributionVector RotationRateAmount;  // 0x00E0, size 0x48
    UPROPERTY(EditAnywhere) FOrbitOptions RotationRateOptions;  // 0x0128, size 0x4
};
