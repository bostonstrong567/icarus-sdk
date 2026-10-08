// /Script/AugmentedReality.ARMeshGeometry
// Derives from: UARTrackedGeometry > UObject
// size 0x100, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTrackable.h

UCLASS()
class UARMeshGeometry : public UARTrackedGeometry
{
public:

    UFUNCTION(BlueprintCallable) bool GetObjectClassificationAtLocation(const FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff);  // parameters 0x21

    // Virtual functions that start here:
    //   GetObjectClassificationAtLocation
};
