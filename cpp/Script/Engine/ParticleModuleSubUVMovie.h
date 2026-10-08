// /Script/Engine.ParticleModuleSubUVMovie
// Derives from: UParticleModuleSubUV > UParticleModuleSubUVBase > UParticleModule > UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Particles/SubUV/ParticleModuleSubUVMovie.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
public:
    UPROPERTY(EditAnywhere) uint8 bUseEmitterTime : 1;  // 0x0070, mask 0x01
    UPROPERTY(EditAnywhere) FRawDistributionFloat FrameRate;  // 0x0078, size 0x30
    UPROPERTY(EditAnywhere) int32 StartingFrame;  // 0x00A8, size 0x4
};
