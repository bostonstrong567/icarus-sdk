// /Script/AugmentedReality.ARTrackedObject
// Derives from: UARTrackedGeometry > UObject
// size 0x100, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTrackable.h

UCLASS()
class UARTrackedObject : public UARTrackedGeometry
{
public:
    UPROPERTY() UARCandidateObject* DetectedObject;  // 0x00F8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) UARCandidateObject* GetDetectedObject() const;  // parameters 0x8
};
