// /Script/Niagara.NiagaraCollisionEventPayload
// size 0x2C, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEvents.h

USTRUCT()
struct FNiagaraCollisionEventPayload
{
    UPROPERTY() FVector CollisionPos;  // 0x0000, size 0xC
    UPROPERTY() FVector CollisionNormal;  // 0x000C, size 0xC
    UPROPERTY() FVector CollisionVelocity;  // 0x0018, size 0xC
    UPROPERTY() int32 ParticleIndex;  // 0x0024, size 0x4
    UPROPERTY() int32 PhysicalMaterialIndex;  // 0x0028, size 0x4
};
