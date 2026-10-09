// /Script/CinematicCamera.CameraFocusSettings
// size 0x58, declared in Engine/Source/Runtime/CinematicCamera/Public/CineCameraComponent.h

USTRUCT()
struct FCameraFocusSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECameraFocusMethod FocusMethod;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ManualFocusDistance;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCameraTrackingFocusSettings TrackingFocusSettings;  // 0x0008, size 0x38
    UPROPERTY(EditAnywhere, Transient) uint8 bDrawDebugFocusPlane : 1;  // 0x0040, mask 0x01
    UPROPERTY(EditAnywhere) FColor DebugFocusPlaneColor;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSmoothFocusChanges : 1;  // 0x0048, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FocusSmoothingInterpSpeed;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FocusOffset;  // 0x0050, size 0x4
};
