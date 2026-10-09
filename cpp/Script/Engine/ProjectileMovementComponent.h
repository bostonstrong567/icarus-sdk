// /Script/Engine.ProjectileMovementComponent
// Derives from: UMovementComponent > UActorComponent > UObject
// size 0x1D0, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/ProjectileMovementComponent.h

UCLASS(Config=Engine)
class UProjectileMovementComponent : public UMovementComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialSpeed;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSpeed;  // 0x00F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRotationFollowsVelocity : 1;  // 0x00F8, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRotationRemainsVertical : 1;  // 0x00F8, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bShouldBounce : 1;  // 0x00F8, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bInitialVelocityInLocalSpace : 1;  // 0x00F8, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bForceSubStepping : 1;  // 0x00F8, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSimulationEnabled : 1;  // 0x00F8, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSweepCollision : 1;  // 0x00F8, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIsHomingProjectile : 1;  // 0x00F8, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bBounceAngleAffectsFriction : 1;  // 0x00F9, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bIsSliding : 1;  // 0x00F9, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bInterpMovement : 1;  // 0x00F9, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bInterpRotation : 1;  // 0x00F9, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float PreviousHitTime;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector PreviousHitNormal;  // 0x0100, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProjectileGravityScale;  // 0x010C, size 0x4
    UPROPERTY() float Buoyancy;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Bounciness;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Friction;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BounceVelocityStopSimulatingThreshold;  // 0x011C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinFrictionFraction;  // 0x0120, size 0x4
    UPROPERTY(BlueprintAssignable) FOnProjectileBounceDelegate OnProjectileBounce;  // 0x0128, size 0x10
    UPROPERTY(BlueprintAssignable) FOnProjectileStopDelegate OnProjectileStop;  // 0x0138, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HomingAccelerationMagnitude;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) TWeakObjectPtr<USceneComponent> HomingTargetComponent;  // 0x014C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSimulationTimeStep;  // 0x0154, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxSimulationIterations;  // 0x0158, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BounceAdditionalIterations;  // 0x015C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpLocationTime;  // 0x0160, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpRotationTime;  // 0x0164, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpLocationMaxLagDistance;  // 0x0168, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpLocationSnapToTargetDistance;  // 0x016C, size 0x4
protected:
    uint8 : 1 bInterpolationComplete;  // 0x00F9, not reflected
    FVector PendingForceThisUpdate;  // 0x0170, not reflected
    FVector InterpLocationOffset;  // 0x017C, not reflected
    FVector InterpInitialLocationOffset;  // 0x0188, not reflected
    TWeakObjectPtr<USceneComponent,FWeakObjectPtr> InterpolatedComponentPtr;  // 0x0194, not reflected
    FQuat InterpRotationOffset;  // 0x01A0, not reflected
    FQuat InterpInitialRotationOffset;  // 0x01B0, not reflected
private:
    FVector PendingForce;  // 0x01C0, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsInterpolationComplete() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsVelocityUnderSimulationThreshold() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector LimitVelocity(FVector NewVelocity) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void MoveInterpolationTarget(const FVector& NewLocation, const FRotator& NewRotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ResetInterpolation();
    UFUNCTION(BlueprintCallable) void SetInterpolatedComponent(USceneComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetVelocityInLocalSpace(FVector NewVelocity);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void StopSimulating(const FHitResult& HitResult);  // parameters 0x88

    // Virtual functions that start here:
    //   CheckStillInWorld, ComputeAcceleration, ComputeBounceResult, ComputeHomingAcceleration
    //   ComputeMoveDelta, ComputeVelocity, HandleBlockingHit, HandleDeflection, HandleSliding
    //   MoveInterpolationTarget, ResetInterpolation, SetInterpolatedComponent, SetVelocityInLocalSpace
    //   ShouldUseSubStepping, StopSimulating, TickInterpolation
};
