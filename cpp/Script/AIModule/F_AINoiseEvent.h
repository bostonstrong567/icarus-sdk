// /Script/AIModule.AINoiseEvent
// size 0x30, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Hearing.h

USTRUCT()
struct FAINoiseEvent
{
public:
    float Age;  // 0x0000, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector NoiseLocation;  // 0x0004, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Loudness;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxRange;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Instigator;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Tag;  // 0x0020, size 0x8
    FGenericTeamId TeamIdentifier;  // 0x0028, not reflected
};
