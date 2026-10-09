// /Script/AugmentedReality.ARTrackedImage
// Derives from: UARTrackedGeometry > UObject
// size 0x110, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTrackable.h

UCLASS()
class UARTrackedImage : public UARTrackedGeometry
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() UARCandidateImage* DetectedImage;  // 0x00F8, size 0x8
    UPROPERTY() FVector2D EstimatedSize;  // 0x0100, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UARCandidateImage* GetDetectedImage() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetEstimateSize();  // parameters 0x8
};
