// /Script/Icarus.IcarusPlayerMovementComponent
// Derives from: UCharacterMovementComponent > UPawnMovementComponent > UNavMovementComponent > UMovementComponent > UActorComponent > UObject
// size 0xC70, declared in Icarus/Source/Icarus/Characters/Components/IcarusPlayerMovementComponent.h

UCLASS(Config=Engine)
class UIcarusPlayerMovementComponent : public UCharacterMovementComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSwimming;  // 0x0AF0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FluidFriction;  // 0x0AF4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* LadderExitMontage;  // 0x0AF8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LadderExitTolerance;  // 0x0B00, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LadderAngleOffset;  // 0x0B04, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMaxOutLadderVelocity;  // 0x0B08, size 0x1
    UPROPERTY() FTransform LadderStart;  // 0x0B20, size 0x30
    UPROPERTY() FTransform LadderEnd;  // 0x0B50, size 0x30
    UPROPERTY() float CurrentWaterDepth;  // 0x0B80, size 0x4
    UPROPERTY() bool bIsInShallowWater;  // 0x0B84, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AvoidanceVelocityAlpha;  // 0x0B88, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bUseInterpolatedRotationRate;  // 0x0B8C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeltaTimeMultiplier;  // 0x0B90, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpolationExponent;  // 0x0B94, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EEasingFunc> InterpolationFunction;  // 0x0B98, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TimeSpentSliding;  // 0x0BA8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsSliding;  // 0x0BAC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FHitResult LastSlideHit;  // 0x0BB0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SlidingDurationThreshold;  // 0x0C38, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SlidingEndDurationThreshold;  // 0x0C3C, size 0x4
    UPROPERTY(BlueprintAssignable) FCharacterSlidingUpdatedSignature OnCharacterSlidingUpdated;  // 0x0C40, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bClearAnimRootMotionVelocityOnFlyingEnd;  // 0x0C54, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bCanEverSprint;  // 0x0C55, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bWantsToSprint : 1;  // 0x0C56, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bWantsToAim : 1;  // 0x0C56, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bWantsToReloadWeapon : 1;  // 0x0C56, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BackwardsMovementSpeedMultiplier;  // 0x0C5C, size 0x4
    UPROPERTY() AActor* CurrentTrap;  // 0x0C60, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle LadderExitTimer;  // 0x0B10
    FRotator LastFrameInterpolatedRotationRate;  // 0x0B9C, private
    float LastSlideTime;  // 0x0C50, private
    float CachedDefaultGravityScale;  // 0x0C58
    bool bWasFlyingWithAnimRootMotion;  // 0x0C68, private

    UFUNCTION(BlueprintCallable) void EnterLadder(ULadderComponent* Ladder);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EnterWater();
    UFUNCTION(BlueprintCallable) void ExitLadder();
    UFUNCTION(BlueprintCallable) void ExitWater();
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetCurrentTrap() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentWaterDepth() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetLadderPosition() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetNormalizedLadderInput() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsAiming() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsClimbingLadder() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsReloadingWeapon() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSprinting() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCurrentTrap(AActor* NewTrap);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetIsSliding(bool IsSliding);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateWaterDepth();

    // Virtual functions that start here:
    //   Aim, CanAimInCurrentState, CanEverSprint, CanSprintInCurrentState, GetCurrentWaterDepth
    //   IcarusFindWaterLine, IcarusSwim, Sprint, StartWeaponReload, StopAim, StopSprint, StopWeaponReload
};
