// /Script/AugmentedReality.ARTrackedPose
// Derives from: UARTrackedGeometry > UObject
// size 0x150, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTrackable.h

UCLASS()
class UARTrackedPose : public UARTrackedGeometry
{
public:
    UPROPERTY() FARPose3D TrackedPose;  // 0x00F8, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintPure) FARPose3D GetTrackedPoseData() const;  // parameters 0x50
};
