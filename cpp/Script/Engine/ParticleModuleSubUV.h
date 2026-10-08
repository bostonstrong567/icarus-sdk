// /Script/Engine.ParticleModuleSubUV
// Derives from: UParticleModuleSubUVBase > UParticleModule > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Particles/SubUV/ParticleModuleSubUV.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleSubUV : public UParticleModuleSubUVBase
{
public:
    UPROPERTY() USubUVAnimation* Animation;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) FRawDistributionFloat SubImageIndex;  // 0x0038, size 0x30
    UPROPERTY(EditAnywhere) uint8 bUseRealTime : 1;  // 0x0068, mask 0x01

    // Virtual functions that start here:
    //   DetermineImageIndex
};
