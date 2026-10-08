// /Script/ArchVisCharacter.ArchVisCharMovementComponent
// Derives from: UCharacterMovementComponent > UPawnMovementComponent > UNavMovementComponent > UMovementComponent > UActorComponent > UObject
// size 0xB40, declared in Engine/Plugins/Runtime/ArchVisCharacter/Source/ArchVisCharacter/Public/ArchVisCharMovementComponent.h

UCLASS(Config=Engine)
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FRotator RotationalAcceleration;  // 0x0AF0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FRotator RotationalDeceleration;  // 0x0AFC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FRotator MaxRotationalVelocity;  // 0x0B08, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinPitch;  // 0x0B14, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxPitch;  // 0x0B18, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WalkingFriction;  // 0x0B1C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WalkingSpeed;  // 0x0B20, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WalkingAcceleration;  // 0x0B24, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FRotator CurrentRotationalVelocity;  // 0x0B28, protected
    FRotator CurrentRotInput;  // 0x0B34, protected
};
