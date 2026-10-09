// /Script/CinematicCamera.CameraTrackingFocusSettings
// size 0x38, declared in Engine/Source/Runtime/CinematicCamera/Public/CineCameraComponent.h

USTRUCT()
struct FCameraTrackingFocusSettings
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) TSoftObjectPtr<AActor> ActorToTrack;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector RelativeOffset;  // 0x0028, size 0xC
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) uint8 bDrawDebugTrackingFocusPoint : 1;  // 0x0034, mask 0x01
};
