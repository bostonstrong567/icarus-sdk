// /Script/Engine.ParticleModuleLocationPrimitiveBase
// Derives from: UParticleModuleLocationBase > UParticleModule > UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h

UCLASS(EditInlineNew)
class UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase
{
public:
    UPROPERTY(EditAnywhere) uint8 Positive_X : 1;  // 0x0030, mask 0x01
    UPROPERTY(EditAnywhere) uint8 Positive_Y : 1;  // 0x0030, mask 0x02
    UPROPERTY(EditAnywhere) uint8 Positive_Z : 1;  // 0x0030, mask 0x04
    UPROPERTY(EditAnywhere) uint8 Negative_X : 1;  // 0x0030, mask 0x08
    UPROPERTY(EditAnywhere) uint8 Negative_Y : 1;  // 0x0030, mask 0x10
    UPROPERTY(EditAnywhere) uint8 Negative_Z : 1;  // 0x0030, mask 0x20
    UPROPERTY(EditAnywhere) uint8 SurfaceOnly : 1;  // 0x0030, mask 0x40
    UPROPERTY(EditAnywhere) uint8 Velocity : 1;  // 0x0030, mask 0x80
    UPROPERTY(EditAnywhere) FRawDistributionFloat VelocityScale;  // 0x0038, size 0x30
    UPROPERTY(EditAnywhere) FRawDistributionVector StartLocation;  // 0x0068, size 0x48

    // Virtual functions that start here:
    //   DetermineUnitDirection
};
