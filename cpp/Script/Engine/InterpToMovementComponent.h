// /Script/Engine.InterpToMovementComponent
// Derives from: UMovementComponent > UActorComponent > UObject
// size 0x190, declared in Engine/Source/Runtime/Engine/Classes/Components/InterpToMovementComponent.h

UCLASS(Config=Engine)
class UInterpToMovementComponent : public UMovementComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Duration;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bPauseOnImpact : 1;  // 0x00F4, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSweep;  // 0x00F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ETeleportType TeleportType;  // 0x00F9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EInterpToBehaviourType BehaviourType;  // 0x00FA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bCheckIfStillInWorld;  // 0x00FB, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bForceSubStepping : 1;  // 0x00FC, mask 0x01
    UPROPERTY(BlueprintAssignable) FOnInterpToReverseDelegate OnInterpToReverse;  // 0x0100, size 0x10
    UPROPERTY(BlueprintAssignable) FOnInterpToStopDelegate OnInterpToStop;  // 0x0110, size 0x10
    UPROPERTY(BlueprintAssignable) FOnInterpToWaitBeginDelegate OnWaitBeginDelegate;  // 0x0120, size 0x10
    UPROPERTY(BlueprintAssignable) FOnInterpToWaitEndDelegate OnWaitEndDelegate;  // 0x0130, size 0x10
    UPROPERTY(BlueprintAssignable) FOnInterpToResetDelegate OnResetDelegate;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSimulationTimeStep;  // 0x0150, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxSimulationIterations;  // 0x0154, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FInterpControlPoint> ControlPoints;  // 0x0158, size 0x10
protected:
    float CurrentTime;  // 0x0168, not reflected
    float TimeMultiplier;  // 0x016C, not reflected
    float CurrentDirection;  // 0x0170, not reflected
    bool bIsWaiting;  // 0x0174, not reflected
    bool bStopped;  // 0x0175, not reflected
    bool bContainsActorControlPoints;  // 0x0176, not reflected
private:
    float TotalDistance;  // 0x0178, not reflected
    FVector StartLocation;  // 0x017C, not reflected
    bool bPointsFinalized;  // 0x0188, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddControlPointPosition(FVector Pos, bool bPositionIsRelative);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void FinaliseControlPoints();
    UFUNCTION(BlueprintCallable) void ResetControlPoints();
    UFUNCTION(BlueprintCallable) void RestartMovement(float InitialDirection);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void StopSimulating(const FHitResult& HitResult);  // parameters 0x88

    // Virtual functions that start here:
    //   AddControlPointPosition, CheckStillInWorld, ComputeMoveDelta, ShouldUseSubStepping
    //   UpdateControlPoints
};
