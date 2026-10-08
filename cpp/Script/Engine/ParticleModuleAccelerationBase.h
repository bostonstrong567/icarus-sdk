// /Script/Engine.ParticleModuleAccelerationBase
// Derives from: UParticleModule > UObject
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationBase.h

UCLASS(Abstract, EditInlineNew)
class UParticleModuleAccelerationBase : public UParticleModule
{
public:
    UPROPERTY(EditAnywhere) uint8 bAlwaysInWorldSpace : 1;  // 0x0030, mask 0x01
};
