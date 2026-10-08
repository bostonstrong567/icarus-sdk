// /Script/CoreUObject.PackedNormal
// size 0x4, declared in Engine/Source/Runtime/RenderCore/Public/PackedNormal.h

USTRUCT()
struct FPackedNormal
{
    UPROPERTY(EditAnywhere, SaveGame) uint8 X;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) uint8 Y;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) uint8 Z;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) uint8 W;  // 0x0003, size 0x1

    // Not reflected:
    FPackedNormal::<unnamed-type-Vector> Vector;  // 0x0000
};
