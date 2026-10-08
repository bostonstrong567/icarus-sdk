// /Script/Engine.ParticleRandomSeedInfo
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleModule.h

USTRUCT()
struct FParticleRandomSeedInfo
{
    UPROPERTY(EditAnywhere) FName ParameterName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) uint8 bGetSeedFromInstance : 1;  // 0x0008, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bInstanceSeedIsIndex : 1;  // 0x0008, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bResetSeedOnEmitterLooping : 1;  // 0x0008, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bRandomlySelectSeedArray : 1;  // 0x0008, mask 0x08
    UPROPERTY(EditAnywhere) TArray<int32> RandomSeeds;  // 0x0010, size 0x10
};
