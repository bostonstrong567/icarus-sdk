// /Script/Engine.ParticleEvent_GenerateInfo
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h

USTRUCT()
struct FParticleEvent_GenerateInfo
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EParticleEventType> Type;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) int32 Frequency;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) int32 ParticleFrequency;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) uint8 FirstTimeOnly : 1;  // 0x000C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 LastTimeOnly : 1;  // 0x000C, mask 0x02
    UPROPERTY(EditAnywhere) uint8 UseReflectedImpactVector : 1;  // 0x000C, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bUseOrbitOffset : 1;  // 0x000C, mask 0x08
    UPROPERTY(EditAnywhere) FName CustomName;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere) TArray<UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame;  // 0x0018, size 0x10
};
