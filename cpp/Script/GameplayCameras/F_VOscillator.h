// /Script/GameplayCameras.VOscillator
// size 0x24, declared in Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Public/MatineeCameraShake.h

USTRUCT()
struct FVOscillator
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFOscillator X;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFOscillator Y;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFOscillator Z;  // 0x0018, size 0xC
};
