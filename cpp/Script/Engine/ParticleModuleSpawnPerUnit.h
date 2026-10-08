// /Script/Engine.ParticleModuleSpawnPerUnit
// Derives from: UParticleModuleSpawnBase > UParticleModule > UObject
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
public:
    UPROPERTY(EditAnywhere) float UnitScalar;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float MovementTolerance;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) FRawDistributionFloat SpawnPerUnit;  // 0x0040, size 0x30
    UPROPERTY(EditAnywhere) float MaxFrameDistance;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere) uint8 bIgnoreSpawnRateWhenMoving : 1;  // 0x0074, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bIgnoreMovementAlongX : 1;  // 0x0074, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bIgnoreMovementAlongY : 1;  // 0x0074, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bIgnoreMovementAlongZ : 1;  // 0x0074, mask 0x08
};
