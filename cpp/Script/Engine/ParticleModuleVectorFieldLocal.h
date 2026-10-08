// /Script/Engine.ParticleModuleVectorFieldLocal
// Derives from: UParticleModuleVectorFieldBase > UParticleModule > UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase
{
public:
    UPROPERTY(EditAnywhere) UVectorField* VectorField;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) FVector RelativeTranslation;  // 0x0038, size 0xC
    UPROPERTY(EditAnywhere) FRotator RelativeRotation;  // 0x0044, size 0xC
    UPROPERTY(EditAnywhere) FVector RelativeScale3D;  // 0x0050, size 0xC
    UPROPERTY(EditAnywhere) float Intensity;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere) float Tightness;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere) uint8 bIgnoreComponentTransform : 1;  // 0x0064, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bTileX : 1;  // 0x0064, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bTileY : 1;  // 0x0064, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bTileZ : 1;  // 0x0064, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bUseFixDT : 1;  // 0x0064, mask 0x10
};
