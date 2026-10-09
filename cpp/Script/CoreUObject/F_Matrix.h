// /Script/CoreUObject.Matrix
// size 0x40, declared in Engine/Source/Runtime/Core/Public/Math/Matrix.h

USTRUCT()
struct FMatrix
{
public:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FPlane XPlane;  // 0x0000, size 0x10
    float[4][4] M;  // 0x0000, not reflected
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FPlane YPlane;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FPlane ZPlane;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) FPlane WPlane;  // 0x0030, size 0x10
};
