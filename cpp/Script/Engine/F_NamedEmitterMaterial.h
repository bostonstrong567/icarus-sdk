// /Script/Engine.NamedEmitterMaterial
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleSystem.h

USTRUCT()
struct FNamedEmitterMaterial
{
    UPROPERTY(EditAnywhere) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) UMaterialInterface* Material;  // 0x0008, size 0x8
};
