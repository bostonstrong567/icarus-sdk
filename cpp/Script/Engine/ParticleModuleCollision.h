// /Script/Engine.ParticleModuleCollision
// Derives from: UParticleModuleCollisionBase > UParticleModule > UObject
// size 0x190, declared in Engine/Source/Runtime/Engine/Classes/Particles/Collision/ParticleModuleCollision.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleCollision : public UParticleModuleCollisionBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector DampingFactor;  // 0x0030, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionVector DampingFactorRotation;  // 0x0078, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionFloat MaxCollisions;  // 0x00C0, size 0x30
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleCollisionComplete> CollisionCompletionOption;  // 0x00F0, size 0x1
    UPROPERTY(EditAnywhere) TArray<TEnumAsByte<EObjectTypeQuery>> CollisionTypes;  // 0x00F8, size 0x10
    FCollisionObjectQueryParams ObjectParams;  // 0x0108, not reflected
    UPROPERTY(EditAnywhere) uint8 bApplyPhysics : 1;  // 0x0110, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bIgnoreTriggerVolumes : 1;  // 0x0110, mask 0x02
    UPROPERTY(EditAnywhere) FRawDistributionFloat ParticleMass;  // 0x0118, size 0x30
    UPROPERTY(EditAnywhere) float DirScalar;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere) uint8 bPawnsDoNotDecrementCount : 1;  // 0x014C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOnlyVerticalNormalsDecrementCount : 1;  // 0x014C, mask 0x02
    UPROPERTY(EditAnywhere) float VerticalFudgeFactor;  // 0x0150, size 0x4
    UPROPERTY(EditAnywhere) FRawDistributionFloat DelayAmount;  // 0x0158, size 0x30
    UPROPERTY(EditAnywhere) uint8 bDropDetail : 1;  // 0x0188, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bCollideOnlyIfVisible : 1;  // 0x0188, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bIgnoreSourceActor : 1;  // 0x0188, mask 0x04
    UPROPERTY(EditAnywhere) float MaxCollisionDistance;  // 0x018C, size 0x4

    // Virtual functions that start here:
    //   PerformCollisionCheck
};
