// /Script/GameplayCameras.SimpleCameraShakePattern
// Derives from: UCameraShakePattern > UObject
// size 0x38, declared in Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Public/SimpleCameraShakePattern.h

UCLASS(Abstract, EditInlineNew)
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
    UPROPERTY(EditAnywhere) float Duration;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) float BlendInTime;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) float BlendOutTime;  // 0x0030, size 0x4
};
