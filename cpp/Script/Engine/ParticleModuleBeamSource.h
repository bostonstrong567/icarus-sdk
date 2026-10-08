// /Script/Engine.ParticleModuleBeamSource
// Derives from: UParticleModuleBeamBase > UParticleModule > UObject
// size 0x118, declared in Engine/Source/Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamSource.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleBeamSource : public UParticleModuleBeamBase
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<Beam2SourceTargetMethod> SourceMethod;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) FName SourceName;  // 0x0034, size 0x8
    UPROPERTY(EditAnywhere) uint8 bSourceAbsolute : 1;  // 0x003C, mask 0x01
    UPROPERTY(EditAnywhere) FRawDistributionVector Source;  // 0x0040, size 0x48
    UPROPERTY(EditAnywhere) uint8 bLockSource : 1;  // 0x0088, mask 0x01
    UPROPERTY(EditAnywhere) TEnumAsByte<Beam2SourceTargetTangentMethod> SourceTangentMethod;  // 0x008C, size 0x1
    UPROPERTY(EditAnywhere) FRawDistributionVector SourceTangent;  // 0x0090, size 0x48
    UPROPERTY(EditAnywhere) uint8 bLockSourceTangent : 1;  // 0x00D8, mask 0x01
    UPROPERTY(EditAnywhere) FRawDistributionFloat SourceStrength;  // 0x00E0, size 0x30
    UPROPERTY(EditAnywhere) uint8 bLockSourceStength : 1;  // 0x0110, mask 0x01

    // Not reflected: the engine's scripting cannot see these.
    int32 LastSelectedParticleIndex;  // 0x0114
};
