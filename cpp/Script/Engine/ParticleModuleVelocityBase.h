// /Script/Engine.ParticleModuleVelocityBase
// Derives from: UParticleModule > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocityBase.h

UCLASS(Abstract, EditInlineNew)
class UParticleModuleVelocityBase : public UParticleModule
{
public:
    UPROPERTY(EditAnywhere) uint8 bInWorldSpace : 1;  // 0x0030, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bApplyOwnerScale : 1;  // 0x0030, mask 0x02
};
