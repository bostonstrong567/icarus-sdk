// /Script/CoreUObject.PackedRGBA16N
// size 0x8, declared in Engine/Source/Runtime/RenderCore/Public/PackedNormal.h

USTRUCT()
struct FPackedRGBA16N
{
    UPROPERTY(EditAnywhere, SaveGame) int32 XY;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 ZW;  // 0x0004, size 0x4

    // Not reflected:
    int16 X;  // 0x0000
    int16 Y;  // 0x0002
    int16 Z;  // 0x0004
    int16 W;  // 0x0006
};
