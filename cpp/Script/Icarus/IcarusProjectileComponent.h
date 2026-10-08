// /Script/Icarus.IcarusProjectileComponent
// Derives from: UProjectileMovementComponent > UMovementComponent > UActorComponent > UObject
// size 0x220, declared in Icarus/Source/Icarus/Systems/IcarusProjectileComponent.h

UCLASS(Config=Engine)
class UIcarusProjectileComponent : public UProjectileMovementComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator VelocityRotationOffset;  // 0x01D0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator AngularRotation;  // 0x01DC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HomingTargetBoneName;  // 0x01E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisableHomingOncePassedTarget;  // 0x01F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bPreventHomingAccelerationBeforeApex;  // 0x01F1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bScaleHomingMagnitudeByDistanceToTarget;  // 0x01F2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* HomingScaleCurve;  // 0x01F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* HomingGravityScale;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HomingNegativeZAccelerationMultiplier;  // 0x0208, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    bool bHasReachedApex;  // 0x020C, private
    float LastMoveTime;  // 0x0210, private
    FVector ScalingMagnitudeStartPosition;  // 0x0214, private

    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasReachedApex() const;  // parameters 0x1
};
