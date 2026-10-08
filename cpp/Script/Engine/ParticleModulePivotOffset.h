// /Script/Engine.ParticleModulePivotOffset
// Derives from: UParticleModuleLocationBase > UParticleModule > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Particles/Modules/Location/ParticleModulePivotOffset.h

UCLASS(EditInlineNew)
class UParticleModulePivotOffset : public UParticleModuleLocationBase
{
public:
    UPROPERTY(EditAnywhere) FVector2D PivotOffset;  // 0x0030, size 0x8
};
