// /Script/CoreUObject.IntVector
// size 0xC, declared in Engine/Source/Runtime/Core/Public/Math/IntVector.h

USTRUCT()
struct FIntVector
{
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 X;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 Y;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) int32 Z;  // 0x0008, size 0x4
};
