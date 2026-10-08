// /Script/Icarus.IcarusGOAPAIFact
// size 0x60, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/IcarusGOAPAIMemory.generated.h

USTRUCT()
struct FIcarusGOAPAIFact
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Target;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPObjectType ObjectType;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FAIStimulus LastAIStimulus;  // 0x0020, size 0x3C
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPFactSource FactSource;  // 0x005C, size 0x1

    // Not reflected:
    FWeakObjectPtr TargetWeakPointer;  // 0x0000
};
