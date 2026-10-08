// /Script/Engine.ParticleModuleLocationPrimitiveTriangle
// Derives from: UParticleModuleLocationBase > UParticleModule > UObject
// size 0x108, declared in Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h

UCLASS(EditInlineNew)
class UParticleModuleLocationPrimitiveTriangle : public UParticleModuleLocationBase
{
public:
    UPROPERTY(EditAnywhere) FRawDistributionVector StartOffset;  // 0x0030, size 0x48
    UPROPERTY(EditAnywhere) FRawDistributionFloat Height;  // 0x0078, size 0x30
    UPROPERTY(EditAnywhere) FRawDistributionFloat Angle;  // 0x00A8, size 0x30
    UPROPERTY(EditAnywhere) FRawDistributionFloat Thickness;  // 0x00D8, size 0x30
};
