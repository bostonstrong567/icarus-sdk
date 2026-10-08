// /Script/Engine.ParticleModuleTrailSource
// Derives from: UParticleModuleTrailBase > UParticleModule > UObject
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Particles/Trail/ParticleModuleTrailSource.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleTrailSource : public UParticleModuleTrailBase
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<ETrail2SourceMethod> SourceMethod;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) FName SourceName;  // 0x0034, size 0x8
    UPROPERTY(EditAnywhere) FRawDistributionFloat SourceStrength;  // 0x0040, size 0x30
    UPROPERTY(EditAnywhere) uint8 bLockSourceStength : 1;  // 0x0070, mask 0x01
    UPROPERTY(EditAnywhere) int32 SourceOffsetCount;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere) TArray<FVector> SourceOffsetDefaults;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleSourceSelectionMethod> SelectionMethod;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere) uint8 bInheritRotation : 1;  // 0x008C, mask 0x01
};
