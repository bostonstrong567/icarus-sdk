// /Script/AugmentedReality.ARTrackedPose
// Derives from: UARTrackedGeometry > UObject
// size 0x150, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTrackable.h

UCLASS()
class UARTrackedPose : public UARTrackedGeometry
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FARPose3D TrackedPose;  // 0x00F8, size 0x50
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FARPose3D GetTrackedPoseData() const;  // parameters 0x50
};
