// /Script/Engine.ParticleModuleAttractorPoint
// Derives from: UParticleModuleAttractorBase > UParticleModule > UObject
// size 0xE0, declared in Engine/Source/Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorPoint.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector Position;  // 0x0030, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionFloat Range;  // 0x0078, size 0x30
    UPROPERTY(EditAnywhere) FRawDistributionFloat Strength;  // 0x00A8, size 0x30
    UPROPERTY(EditAnywhere) uint8 StrengthByDistance : 1;  // 0x00D8, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bAffectBaseVelocity : 1;  // 0x00D8, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bOverrideVelocity : 1;  // 0x00D8, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bUseWorldSpacePosition : 1;  // 0x00D8, mask 0x08
    UPROPERTY(EditAnywhere) uint8 Positive_X : 1;  // 0x00D8, mask 0x10
    UPROPERTY(EditAnywhere) uint8 Positive_Y : 1;  // 0x00D8, mask 0x20
    UPROPERTY(EditAnywhere) uint8 Positive_Z : 1;  // 0x00D8, mask 0x40
    UPROPERTY(EditAnywhere) uint8 Negative_X : 1;  // 0x00D8, mask 0x80
    UPROPERTY(EditAnywhere) uint8 Negative_Y : 1;  // 0x00D9, mask 0x01
    UPROPERTY(EditAnywhere) uint8 Negative_Z : 1;  // 0x00D9, mask 0x02
};
