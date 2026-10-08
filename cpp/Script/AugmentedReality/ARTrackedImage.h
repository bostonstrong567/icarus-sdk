// /Script/AugmentedReality.ARTrackedImage
// Derives from: UARTrackedGeometry > UObject
// size 0x110, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTrackable.h

UCLASS()
class UARTrackedImage : public UARTrackedGeometry
{
public:
    UPROPERTY() UARCandidateImage* DetectedImage;  // 0x00F8, size 0x8
    UPROPERTY() FVector2D EstimatedSize;  // 0x0100, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) UARCandidateImage* GetDetectedImage() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetEstimateSize();  // parameters 0x8
};
