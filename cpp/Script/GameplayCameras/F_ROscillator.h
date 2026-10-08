// /Script/GameplayCameras.ROscillator
// size 0x24, declared in Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Public/MatineeCameraShake.h

USTRUCT()
struct FROscillator
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFOscillator Pitch;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFOscillator Yaw;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFOscillator Roll;  // 0x0018, size 0xC
};
