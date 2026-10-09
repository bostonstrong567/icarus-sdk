// /Script/CoreUObject.Color
// size 0x4, declared in Engine/Source/Runtime/Core/Public/Math/Color.h

USTRUCT()
struct FColor
{
public:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) uint8 B;  // 0x0000, size 0x1
    uint32 AlignmentDummy;  // 0x0000, not reflected
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) uint8 G;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) uint8 R;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) uint8 A;  // 0x0003, size 0x1
};
