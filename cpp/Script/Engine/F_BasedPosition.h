// /Script/Engine.BasedPosition
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FBasedPosition
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Base;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Position;  // 0x0008, size 0xC
    UPROPERTY() FVector CachedBaseLocation;  // 0x0014, size 0xC
    UPROPERTY() FRotator CachedBaseRotation;  // 0x0020, size 0xC
    UPROPERTY() FVector CachedTransPosition;  // 0x002C, size 0xC
};
