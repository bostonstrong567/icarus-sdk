// /Script/Engine.FloatingPawnMovement
// Derives from: UPawnMovementComponent > UNavMovementComponent > UMovementComponent > UActorComponent > UObject
// size 0x150, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h

UCLASS(Config=Engine)
class UFloatingPawnMovement : public UPawnMovementComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSpeed;  // 0x0138, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Acceleration;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Deceleration;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TurningBoost;  // 0x0144, size 0x4
    UPROPERTY(Transient) uint8 bPositionCorrected : 1;  // 0x0148, mask 0x01

    // Virtual functions that start here:
    //   ApplyControlInputToVelocity, LimitWorldBounds
};
