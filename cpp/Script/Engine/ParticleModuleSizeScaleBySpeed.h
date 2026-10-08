// /Script/Engine.ParticleModuleSizeScaleBySpeed
// Derives from: UParticleModuleSizeBase > UParticleModule > UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Particles/Size/ParticleModuleSizeScaleBySpeed.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSizeScaleBySpeed : public UParticleModuleSizeBase
{
public:
    UPROPERTY(EditAnywhere) FVector2D SpeedScale;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) FVector2D MaxScale;  // 0x0038, size 0x8
};
