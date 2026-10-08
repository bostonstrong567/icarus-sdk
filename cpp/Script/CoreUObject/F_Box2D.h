// /Script/CoreUObject.Box2D
// size 0x14, declared in Engine/Source/Runtime/Core/Public/Math/Box2D.h

USTRUCT()
struct FBox2D
{
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector2D Min;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FVector2D Max;  // 0x0008, size 0x8
    UPROPERTY() uint8 bIsValid;  // 0x0010, size 0x1
};
