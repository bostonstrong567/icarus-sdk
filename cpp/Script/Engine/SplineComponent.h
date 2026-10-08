// /Script/Engine.SplineComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x550, declared in Engine/Source/Runtime/Engine/Classes/Components/SplineComponent.h

UCLASS(Config=Engine)
class USplineComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(EditAnywhere) FSplineCurves SplineCurves;  // 0x0450, size 0x70
    UPROPERTY(Deprecated) FInterpCurveVector SplineInfo;  // 0x04C0, size 0x18
    UPROPERTY(Deprecated) FInterpCurveQuat SplineRotInfo;  // 0x04D8, size 0x18
    UPROPERTY(Deprecated) FInterpCurveVector SplineScaleInfo;  // 0x04F0, size 0x18
    UPROPERTY(Deprecated) FInterpCurveFloat SplineReparamTable;  // 0x0508, size 0x18
    UPROPERTY(Deprecated) bool bAllowSplineEditingPerInstance;  // 0x0520, size 0x1
    UPROPERTY(EditAnywhere) int32 ReparamStepsPerSegment;  // 0x0524, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Duration;  // 0x0528, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bStationaryEndpoints;  // 0x052C, size 0x1
    UPROPERTY(EditAnywhere) bool bSplineHasBeenEdited;  // 0x052D, size 0x1
    UPROPERTY() bool bModifiedByConstructionScript;  // 0x052E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bInputSplinePointsToConstructionScript;  // 0x052F, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDrawDebug;  // 0x0530, size 0x1
    UPROPERTY(EditAnywhere) bool bClosedLoop;  // 0x0531, size 0x1
    UPROPERTY(EditAnywhere) bool bLoopPositionOverride;  // 0x0532, size 0x1
    UPROPERTY(EditAnywhere) float LoopPosition;  // 0x0534, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector DefaultUpVector;  // 0x0538, size 0xC

    UFUNCTION(BlueprintCallable) void AddPoint(const FSplinePoint& Point, bool bUpdateSpline);  // parameters 0x45
    UFUNCTION(BlueprintCallable) void AddPoints(const TArray<FSplinePoint>& Points, bool bUpdateSpline);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void AddSplineLocalPoint(const FVector& Position);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void AddSplinePoint(const FVector& Position, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);  // parameters 0xE
    UFUNCTION(BlueprintCallable) void AddSplinePointAtIndex(const FVector& Position, int32 Index, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);  // parameters 0x12
    UFUNCTION(BlueprintCallable) void AddSplineWorldPoint(const FVector& Position);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ClearSplinePoints(bool bUpdateSpline);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector FindDirectionClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) float FindInputKeyClosestToWorldLocation(const FVector& WorldLocation) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector FindLocationClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector FindRightVectorClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) float FindRollClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator FindRotationClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector FindScaleClosestToWorldLocation(const FVector& WorldLocation) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector FindTangentClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform FindTransformClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale) const;  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector FindUpVectorClosestToWorldLocation(const FVector& WorldLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetArriveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetDefaultUpVector(TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetDirectionAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetDirectionAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetDirectionAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetDirectionAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDistanceAlongSplineAtSplineInputKey(float InKey) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDistanceAlongSplineAtSplinePoint(int32 PointIndex) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFloatPropertyAtSplineInputKey(float InKey, FName PropertyName) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFloatPropertyAtSplinePoint(int32 Index, FName PropertyName) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInputKeyAtDistanceAlongSpline(float Distance) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetLeaveTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLocalLocationAndTangentAtSplinePoint(int32 PointIndex, FVector& LocalLocation, FVector& LocalTangent) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLocationAndTangentAtSplinePoint(int32 PointIndex, FVector& Location, FVector& Tangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x1D
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetLocationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetLocationAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetLocationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetLocationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumberOfSplinePoints() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumberOfSplineSegments() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetRightVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetRightVectorAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetRightVectorAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetRightVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRollAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRollAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRollAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRollAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetRotationAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetRotationAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetRotationAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetRotationAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetScaleAtDistanceAlongSpline(float Distance) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetScaleAtSplineInputKey(float InKey) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetScaleAtSplinePoint(int32 PointIndex) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetScaleAtTime(float Time, bool bUseConstantVelocity) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSplineLength() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<ESplinePointType> GetSplinePointType(int32 PointIndex) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetTangentAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetTangentAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetTangentAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetTangentAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetTransformAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale) const;  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetTransformAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale) const;  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetTransformAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseScale) const;  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetTransformAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity, bool bUseScale) const;  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetUpVectorAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetUpVectorAtSplineInputKey(float InKey, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetUpVectorAtSplinePoint(int32 PointIndex, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetUpVectorAtTime(float Time, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUseConstantVelocity) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetVectorPropertyAtSplineInputKey(float InKey, FName PropertyName) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetVectorPropertyAtSplinePoint(int32 Index, FName PropertyName) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetWorldDirectionAtDistanceAlongSpline(float Distance) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetWorldDirectionAtTime(float Time, bool bUseConstantVelocity) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetWorldLocationAtDistanceAlongSpline(float Distance) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetWorldLocationAtSplinePoint(int32 PointIndex) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetWorldLocationAtTime(float Time, bool bUseConstantVelocity) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetWorldRotationAtDistanceAlongSpline(float Distance) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetWorldRotationAtTime(float Time, bool bUseConstantVelocity) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetWorldTangentAtDistanceAlongSpline(float Distance) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsClosedLoop() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RemoveSplinePoint(int32 Index, bool bUpdateSpline);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetClosedLoop(bool bInClosedLoop, bool bUpdateSpline);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetClosedLoopAtPosition(bool bInClosedLoop, float Key, bool bUpdateSpline);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetDefaultUpVector(const FVector& UpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetDrawDebug(bool bShow);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);  // parameters 0x12
    UFUNCTION(BlueprintCallable) void SetRotationAtSplinePoint(int32 PointIndex, const FRotator& InRotation, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);  // parameters 0x12
    UFUNCTION(BlueprintCallable) void SetScaleAtSplinePoint(int32 PointIndex, const FVector& InScaleVector, bool bUpdateSpline);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetSelectedSplineSegmentColor(const FLinearColor& SegmentColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetSplineLocalPoints(const TArray<FVector>& Points);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetSplinePointType(int32 PointIndex, TEnumAsByte<ESplinePointType> Type, bool bUpdateSpline);  // parameters 0x6
    UFUNCTION(BlueprintCallable) void SetSplinePoints(const TArray<FVector>& Points, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);  // parameters 0x12
    UFUNCTION(BlueprintCallable) void SetSplineWorldPoints(const TArray<FVector>& Points);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetTangentAtSplinePoint(int32 PointIndex, const FVector& InTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);  // parameters 0x12
    UFUNCTION(BlueprintCallable) void SetTangentColor(const FLinearColor& TangentColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetTangentsAtSplinePoint(int32 PointIndex, const FVector& InArriveTangent, const FVector& InLeaveTangent, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);  // parameters 0x1E
    UFUNCTION(BlueprintCallable) void SetUnselectedSplineSegmentColor(const FLinearColor& SegmentColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetUpVectorAtSplinePoint(int32 PointIndex, const FVector& InUpVector, TEnumAsByte<ESplineCoordinateSpace> CoordinateSpace, bool bUpdateSpline);  // parameters 0x12
    UFUNCTION(BlueprintCallable) void SetWorldLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateSpline();

    // Virtual functions that start here:
    //   AllowsSpinePointLocationEditing, AllowsSplinePointArriveTangentEditing
    //   AllowsSplinePointLeaveTangentEditing, AllowsSplinePointRotationEditing
    //   AllowsSplinePointScaleEditing, GetEnabledSplinePointTypes, GetSplinePointsMetadata, UpdateSpline
};
