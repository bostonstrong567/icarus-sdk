// /Script/GameplayCameras.CompositeCameraShakePattern
// Derives from: UCameraShakePattern > UObject
// size 0x48, declared in Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Public/CompositeCameraShakePattern.h

UCLASS(EditInlineNew)
class UCompositeCameraShakePattern : public UCameraShakePattern
{
public:
    UPROPERTY(EditAnywhere) TArray<UCameraShakePattern*> ChildPatterns;  // 0x0028, size 0x10
private:
    TArray<FCameraShakeState,TSizedDefaultAllocator<32> > ChildStates;  // 0x0038, not reflected
};
