// /Script/CinematicCamera.CameraFilmbackSettings
// size 0xC, declared in Engine/Source/Runtime/CinematicCamera/Public/CineCameraComponent.h

USTRUCT()
struct FCameraFilmbackSettings
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float SensorWidth;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float SensorHeight;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float SensorAspectRatio;  // 0x0008, size 0x4
};
