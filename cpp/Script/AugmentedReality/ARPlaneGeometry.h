// /Script/AugmentedReality.ARPlaneGeometry
// Derives from: UARTrackedGeometry > UObject
// size 0x130, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTrackable.h

UCLASS()
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
    UPROPERTY() EARPlaneOrientation Orientation;  // 0x00F8, size 0x1
    UPROPERTY() FVector Center;  // 0x00FC, size 0xC
    UPROPERTY() FVector Extent;  // 0x0108, size 0xC
    UPROPERTY() TArray<FVector> BoundaryPolygon;  // 0x0118, size 0x10
    UPROPERTY() UARPlaneGeometry* SubsumedBy;  // 0x0128, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FVector> GetBoundaryPolygonInLocalSpace() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetCenter() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetExtent() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) EARPlaneOrientation GetOrientation() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) UARPlaneGeometry* GetSubsumedBy() const;  // parameters 0x8
};
