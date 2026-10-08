// /Script/Engine.ParticleModuleLocationPrimitiveCylinder
// Derives from: UParticleModuleLocationPrimitiveBase > UParticleModuleLocationBase > UParticleModule > UObject
// size 0x120, declared in Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h

UCLASS(EditInlineNew)
class UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase
{
public:
    UPROPERTY(EditAnywhere) uint8 RadialVelocity : 1;  // 0x00B0, mask 0x01
    UPROPERTY(EditAnywhere) FRawDistributionFloat StartRadius;  // 0x00B8, size 0x30
    UPROPERTY(EditAnywhere) FRawDistributionFloat StartHeight;  // 0x00E8, size 0x30
    UPROPERTY(EditAnywhere) TEnumAsByte<CylinderHeightAxis> HeightAxis;  // 0x0118, size 0x1
};
