// /Script/CoreUObject.Vector
// size 0xC, declared in Engine/Source/Runtime/Core/Public/Math/Vector.h

USTRUCT()
struct FVector
{
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float X;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float Y;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) float Z;  // 0x0008, size 0x4
};
