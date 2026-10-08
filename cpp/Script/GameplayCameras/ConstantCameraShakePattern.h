// /Script/GameplayCameras.ConstantCameraShakePattern
// Derives from: USimpleCameraShakePattern > UCameraShakePattern > UObject
// size 0x50, declared in Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Private/Tests/CameraShakeTestObjects.h

UCLASS(EditInlineNew)
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{
public:
    UPROPERTY() FVector LocationOffset;  // 0x0038, size 0xC
    UPROPERTY() FRotator RotationOffset;  // 0x0044, size 0xC
};
