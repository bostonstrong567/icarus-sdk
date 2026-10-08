// /Script/Engine.ParticleModuleCollisionGPU
// Derives from: UParticleModuleCollisionBase > UParticleModule > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Particles/Collision/ParticleModuleCollisionGPU.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleCollisionGPU : public UParticleModuleCollisionBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionFloat Resilience;  // 0x0030, size 0x30
    UPROPERTY(EditAnywhere) FRawDistributionFloat ResilienceScaleOverLife;  // 0x0060, size 0x30
    UPROPERTY(EditAnywhere) float Friction;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere) float RandomSpread;  // 0x0094, size 0x4
    UPROPERTY(EditAnywhere) float RandomDistribution;  // 0x0098, size 0x4
    UPROPERTY(EditAnywhere) float RadiusScale;  // 0x009C, size 0x4
    UPROPERTY(EditAnywhere) float RadiusBias;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleCollisionResponse> Response;  // 0x00A4, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleCollisionMode> CollisionMode;  // 0x00A5, size 0x1
};
