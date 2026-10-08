// /Script/Engine.CameraCacheEntry
// size 0x600, declared in Engine/Source/Runtime/Engine/Classes/Camera/PlayerCameraManager.h

USTRUCT()
struct FCameraCacheEntry
{
    UPROPERTY() float TimeStamp;  // 0x0000, size 0x4
    UPROPERTY() FMinimalViewInfo POV;  // 0x0010, size 0x5F0
};
