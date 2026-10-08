// /Script/Engine.ParticleModuleLocationEmitter
// Derives from: UParticleModuleLocationBase > UParticleModule > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationEmitter.h

UCLASS(EditInlineNew)
class UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
public:
    UPROPERTY(EditAnywhere) FName EmitterName;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<ELocationEmitterSelectionMethod> SelectionMethod;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere) uint8 InheritSourceVelocity : 1;  // 0x003C, mask 0x01
    UPROPERTY(EditAnywhere) float InheritSourceVelocityScale;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) uint8 bInheritSourceRotation : 1;  // 0x0044, mask 0x01
    UPROPERTY(EditAnywhere) float InheritSourceRotationScale;  // 0x0048, size 0x4
};
