// /Script/CoreUObject.Box
// size 0x1C, declared in Engine/Source/Runtime/Core/Public/Math/Box.h

USTRUCT()
struct FBox
{
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector Min;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector Max;  // 0x000C, size 0xC
    UPROPERTY() uint8 IsValid;  // 0x0018, size 0x1
};
