// /Script/Engine.ParticleModuleTypeDataGpu
// Derives from: UParticleModuleTypeDataBase > UParticleModule > UObject
// size 0x420, declared in Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase
{
public:
    UPROPERTY() FGPUSpriteEmitterInfo EmitterInfo;  // 0x0030, size 0x280
    UPROPERTY() FGPUSpriteResourceData ResourceData;  // 0x02B0, size 0x160
    UPROPERTY(EditAnywhere) float CameraMotionBlurAmount;  // 0x0410, size 0x4
    UPROPERTY(EditAnywhere) uint8 bClearExistingParticlesOnInit : 1;  // 0x0414, mask 0x01
};
