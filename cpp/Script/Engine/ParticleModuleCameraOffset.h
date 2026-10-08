// /Script/Engine.ParticleModuleCameraOffset
// Derives from: UParticleModuleCameraBase > UParticleModule > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Particles/Camera/ParticleModuleCameraOffset.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionFloat CameraOffset;  // 0x0030, size 0x30
    UPROPERTY(EditAnywhere) uint8 bSpawnTimeOnly : 1;  // 0x0060, mask 0x01
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleCameraOffsetUpdateMethod> UpdateMethod;  // 0x0064, size 0x1
};
