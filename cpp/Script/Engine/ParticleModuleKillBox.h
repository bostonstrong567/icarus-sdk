// /Script/Engine.ParticleModuleKillBox
// Derives from: UParticleModuleKillBase > UParticleModule > UObject
// size 0xC8, declared in Engine/Source/Runtime/Engine/Classes/Particles/Kill/ParticleModuleKillBox.h

UCLASS(EditInlineNew)
class UParticleModuleKillBox : public UParticleModuleKillBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector LowerLeftCorner;  // 0x0030, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionVector UpperRightCorner;  // 0x0078, size 0x48
    UPROPERTY(EditAnywhere) uint8 bAbsolute : 1;  // 0x00C0, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bKillInside : 1;  // 0x00C0, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bAxisAlignedAndFixedSize : 1;  // 0x00C0, mask 0x04
};
