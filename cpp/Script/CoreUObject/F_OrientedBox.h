// /Script/CoreUObject.OrientedBox
// size 0x3C, declared in Engine/Source/Runtime/Core/Public/Math/OrientedBox.h

USTRUCT()
struct FOrientedBox
{
    UPROPERTY(EditAnywhere, SaveGame) FVector Center;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, SaveGame) FVector AxisX;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, SaveGame) FVector AxisY;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere, SaveGame) FVector AxisZ;  // 0x0024, size 0xC
    UPROPERTY(EditAnywhere, SaveGame) float ExtentX;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) float ExtentY;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) float ExtentZ;  // 0x0038, size 0x4
};
