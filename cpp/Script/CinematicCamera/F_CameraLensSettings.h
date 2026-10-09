// /Script/CinematicCamera.CameraLensSettings
// size 0x18, declared in Engine/Source/Runtime/CinematicCamera/Public/CineCameraComponent.h

USTRUCT()
struct FCameraLensSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinFocalLength;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxFocalLength;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinFStop;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxFStop;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinimumFocusDistance;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DiaphragmBladeCount;  // 0x0014, size 0x4
};
