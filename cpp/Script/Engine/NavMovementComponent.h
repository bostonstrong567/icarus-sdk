// /Script/Engine.NavMovementComponent
// Derives from: UMovementComponent > UActorComponent > UObject
// size 0x130, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/NavMovementComponent.h

UCLASS(Abstract, Config=Engine)
class UNavMovementComponent : public UMovementComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FNavAgentProperties NavAgentProps;  // 0x00F0, size 0x30
    UPROPERTY(EditAnywhere) float FixedPathBrakingDistance;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUpdateNavAgentWithOwnersCollision : 1;  // 0x0124, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bUseAccelerationForPaths : 1;  // 0x0124, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bUseFixedBrakingDistanceForPaths : 1;  // 0x0124, mask 0x04
    UPROPERTY() FMovementProperties MovementState;  // 0x0125, size 0x1
    UPROPERTY() UObject* PathFollowingComp;  // 0x0128, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bStopMovementAbortPaths;  // 0x0124, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCrouching() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsFalling() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsFlying() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsMovingOnGround() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSwimming() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StopActiveMovement();
    UFUNCTION(BlueprintCallable) void StopMovementKeepPathing();

    // Virtual functions that start here:
    //   CanStartPathFollowing, CanStopPathFollowing, GetActorFeetLocationBased
    //   GetPathFollowingBrakingDistance, IsCrouching, IsFalling, IsFlying, IsMovingOnGround, IsSwimming
    //   RequestDirectMove, RequestPathMove, StopActiveMovement
};
