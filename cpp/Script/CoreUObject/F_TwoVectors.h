// /Script/CoreUObject.TwoVectors
// size 0x18, declared in Engine/Source/Runtime/Core/Public/Math/TwoVectors.h

USTRUCT()
struct FTwoVectors
{
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector v1;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector v2;  // 0x000C, size 0xC
};
