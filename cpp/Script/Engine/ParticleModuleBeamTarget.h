// /Script/Engine.ParticleModuleBeamTarget
// Derives from: UParticleModuleBeamBase > UParticleModule > UObject
// size 0x120, declared in Engine/Source/Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamTarget.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<Beam2SourceTargetMethod> TargetMethod;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) FName TargetName;  // 0x0034, size 0x8
    UPROPERTY(EditAnywhere) FRawDistributionVector Target;  // 0x0040, size 0x48
    UPROPERTY(EditAnywhere) uint8 bTargetAbsolute : 1;  // 0x0088, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bLockTarget : 1;  // 0x0088, mask 0x02
    UPROPERTY(EditAnywhere) TEnumAsByte<Beam2SourceTargetTangentMethod> TargetTangentMethod;  // 0x008C, size 0x1
    UPROPERTY(EditAnywhere) FRawDistributionVector TargetTangent;  // 0x0090, size 0x48
    UPROPERTY(EditAnywhere) uint8 bLockTargetTangent : 1;  // 0x00D8, mask 0x01
    UPROPERTY(EditAnywhere) FRawDistributionFloat TargetStrength;  // 0x00E0, size 0x30
    UPROPERTY(EditAnywhere) uint8 bLockTargetStength : 1;  // 0x0110, mask 0x01
    UPROPERTY(EditAnywhere) float LockRadius;  // 0x0114, size 0x4
    int32 LastSelectedParticleIndex;  // 0x0118, not reflected
};
