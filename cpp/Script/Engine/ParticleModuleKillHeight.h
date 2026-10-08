// /Script/Engine.ParticleModuleKillHeight
// Derives from: UParticleModuleKillBase > UParticleModule > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Particles/Kill/ParticleModuleKillHeight.h

UCLASS(EditInlineNew)
class UParticleModuleKillHeight : public UParticleModuleKillBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionFloat Height;  // 0x0030, size 0x30
    UPROPERTY(EditAnywhere) uint8 bAbsolute : 1;  // 0x0060, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bFloor : 1;  // 0x0060, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bApplyPSysScale : 1;  // 0x0060, mask 0x04
};
