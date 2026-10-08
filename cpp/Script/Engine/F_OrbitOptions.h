// /Script/Engine.OrbitOptions
// size 0x4, declared in Engine/Source/Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h

USTRUCT()
struct FOrbitOptions
{
    UPROPERTY(EditAnywhere) uint8 bProcessDuringSpawn : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bProcessDuringUpdate : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bUseEmitterTime : 1;  // 0x0000, mask 0x04
};
