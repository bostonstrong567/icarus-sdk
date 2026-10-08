// /Script/Icarus.CriticalHitProjectile
// size 0x28, declared in Icarus/Source/Icarus/DataStructs/CriticalHitSetup.h

USTRUCT()
struct FCriticalHitProjectile
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeScale;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector CameraOffset;  // 0x0004, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator CameraRotationOffset;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FOV;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UMatineeCameraShake> CameraShake;  // 0x0020, size 0x8
};
