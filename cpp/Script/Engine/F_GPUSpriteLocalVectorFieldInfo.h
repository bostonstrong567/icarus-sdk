// /Script/Engine.GPUSpriteLocalVectorFieldInfo
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h

USTRUCT()
struct FGPUSpriteLocalVectorFieldInfo
{
public:
    UPROPERTY() UVectorField* Field;  // 0x0000, size 0x8
    UPROPERTY() FTransform Transform;  // 0x0010, size 0x30
    UPROPERTY() FRotator MinInitialRotation;  // 0x0040, size 0xC
    UPROPERTY() FRotator MaxInitialRotation;  // 0x004C, size 0xC
    UPROPERTY() FRotator RotationRate;  // 0x0058, size 0xC
    UPROPERTY() float Intensity;  // 0x0064, size 0x4
    UPROPERTY() float Tightness;  // 0x0068, size 0x4
    UPROPERTY() uint8 bIgnoreComponentTransform : 1;  // 0x006C, mask 0x01
    UPROPERTY() uint8 bTileX : 1;  // 0x006C, mask 0x02
    UPROPERTY() uint8 bTileY : 1;  // 0x006C, mask 0x04
    UPROPERTY() uint8 bTileZ : 1;  // 0x006C, mask 0x08
    UPROPERTY() uint8 bUseFixDT : 1;  // 0x006C, mask 0x10
};
