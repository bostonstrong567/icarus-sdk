// /Script/Engine.ParticleModuleEventReceiverSpawn
// Derives from: UParticleModuleEventReceiverBase > UParticleModuleEventBase > UParticleModule > UObject
// size 0xD8, declared in Engine/Source/Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverSpawn.h

UCLASS(EditInlineNew)
class UParticleModuleEventReceiverSpawn : public UParticleModuleEventReceiverBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionFloat SpawnCount;  // 0x0040, size 0x30
    UPROPERTY(EditAnywhere) uint8 bUseParticleTime : 1;  // 0x0070, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bUsePSysLocation : 1;  // 0x0070, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bInheritVelocity : 1;  // 0x0070, mask 0x04
    UPROPERTY(EditAnywhere) FRawDistributionVector InheritVelocityScale;  // 0x0078, size 0x48
    UPROPERTY(EditAnywhere) TArray<UPhysicalMaterial*> PhysicalMaterials;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere) uint8 bBanPhysicalMaterials : 1;  // 0x00D0, mask 0x01
};
