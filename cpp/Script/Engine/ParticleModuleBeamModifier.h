// /Script/Engine.ParticleModuleBeamModifier
// Derives from: UParticleModuleBeamBase > UParticleModule > UObject
// size 0x108, declared in Engine/Source/Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamModifier.h

UCLASS(EditInlineNew)
class UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<BeamModifierType> ModifierType;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) FBeamModifierOptions PositionOptions;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) FRawDistributionVector Position;  // 0x0038, size 0x48
    UPROPERTY(EditAnywhere) FBeamModifierOptions TangentOptions;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) FRawDistributionVector Tangent;  // 0x0088, size 0x48
    UPROPERTY(EditAnywhere) uint8 bAbsoluteTangent : 1;  // 0x00D0, mask 0x01
    UPROPERTY(EditAnywhere) FBeamModifierOptions StrengthOptions;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere) FRawDistributionFloat Strength;  // 0x00D8, size 0x30
};
