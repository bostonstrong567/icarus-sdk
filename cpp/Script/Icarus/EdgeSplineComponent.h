// /Script/Icarus.EdgeSplineComponent
// Derives from: USplineComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x560, declared in Icarus/Source/Icarus/World/EdgeSplineComponent.h

UCLASS(Config=Engine)
class UEdgeSplineComponent : public USplineComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultRadius;  // 0x0548, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultDistanceBetweenPoints;  // 0x054C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ESplineLoopDirection SplineDirection;  // 0x0550, size 0x1

    UFUNCTION(BlueprintCallable) void ForceSplinePointLocationsToComponentZValue();
    UFUNCTION(BlueprintCallable) void GenerateGenericSpline();
    UFUNCTION(BlueprintCallable) void GenerateSpline(const TArray<FVector>& EdgePoints, float PointDensity);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void GetSplineInfoFromLocation(const FVector& Location, FVector& OutClosestPointOnEdge, bool& OutIsLocationWithinSpline);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void GetSplinePointsBoundingSphere(FVector& OutOrigin, float& OutRadius) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsValidEdgeSpline() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SimplifySpline(int32 SimplificationFactor);  // parameters 0x4

    // Virtual functions that start here:
    //   BuildSplineFromOrderedPoints
};
