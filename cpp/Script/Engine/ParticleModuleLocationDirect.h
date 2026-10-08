// /Script/Engine.ParticleModuleLocationDirect
// Derives from: UParticleModuleLocationBase > UParticleModule > UObject
// size 0x150, declared in Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationDirect.h

UCLASS(EditInlineNew)
class UParticleModuleLocationDirect : public UParticleModuleLocationBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector Location;  // 0x0030, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionVector LocationOffset;  // 0x0078, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionVector ScaleFactor;  // 0x00C0, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionVector Direction;  // 0x0108, size 0x48
};
