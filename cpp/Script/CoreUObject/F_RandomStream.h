// /Script/CoreUObject.RandomStream
// size 0x8, declared in Engine/Source/Runtime/Core/Public/Math/RandomStream.h

USTRUCT()
struct FRandomStream
{
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 InitialSeed;  // 0x0000, size 0x4
    UPROPERTY() int32 Seed;  // 0x0004, size 0x4
};
