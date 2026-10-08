// /Script/Engine.TViewTarget
// size 0x610, declared in Engine/Source/Runtime/Engine/Classes/Camera/PlayerCameraManager.h

USTRUCT()
struct FTViewTarget
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Target;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMinimalViewInfo POV;  // 0x0010, size 0x5F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APlayerState* PlayerState;  // 0x0600, size 0x8
};
