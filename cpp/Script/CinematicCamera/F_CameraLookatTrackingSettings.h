// /Script/CinematicCamera.CameraLookatTrackingSettings
// size 0x50, declared in Engine/Source/Runtime/CinematicCamera/Public/CineCameraActor.h

USTRUCT()
struct FCameraLookatTrackingSettings
{
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) uint8 bEnableLookAtTracking : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) uint8 bDrawDebugLookAtTrackingPosition : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAtTrackingInterpSpeed;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) TSoftObjectPtr<AActor> ActorToTrack;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector RelativeOffset;  // 0x0040, size 0xC
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) uint8 bAllowRoll : 1;  // 0x004C, mask 0x01

    // Not reflected:
    FRotator LastLookatTrackingRotation;  // 0x0008
};
