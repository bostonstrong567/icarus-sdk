// /Script/Engine.ParticleModuleAttractorParticle
// Derives from: UParticleModuleAttractorBase > UParticleModule > UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorParticle.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
public:
    UPROPERTY(EditAnywhere) FName EmitterName;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) FRawDistributionFloat Range;  // 0x0038, size 0x30
    UPROPERTY(EditAnywhere) uint8 bStrengthByDistance : 1;  // 0x0068, mask 0x01
    UPROPERTY(EditAnywhere) FRawDistributionFloat Strength;  // 0x0070, size 0x30
    UPROPERTY(EditAnywhere) uint8 bAffectBaseVelocity : 1;  // 0x00A0, mask 0x01
    UPROPERTY(EditAnywhere) TEnumAsByte<EAttractorParticleSelectionMethod> SelectionMethod;  // 0x00A4, size 0x1
    UPROPERTY(EditAnywhere) uint8 bRenewSource : 1;  // 0x00A8, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bInheritSourceVel : 1;  // 0x00A8, mask 0x02
    UPROPERTY() int32 LastSelIndex;  // 0x00AC, size 0x4
};
