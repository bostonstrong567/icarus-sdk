// /Script/Icarus.CriticalHitPlayer
// size 0x34, declared in Icarus/Source/Icarus/DataStructs/CriticalHitSetup.h

USTRUCT()
struct FCriticalHitPlayer
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeScale;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeLength;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FOV;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationOffset;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PivotOffset;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CameraOffset;  // 0x001C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator CameraRotationOffset;  // 0x0028, size 0xC
};
