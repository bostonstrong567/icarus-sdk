// /Script/Engine.FractureEffect
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FFractureEffect
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UParticleSystem* ParticleSystem;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundBase* Sound;  // 0x0008, size 0x8
};
