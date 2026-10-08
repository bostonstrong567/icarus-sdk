// /Script/Engine.MovementProperties
// size 0x1, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h

USTRUCT()
struct FMovementProperties
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCanCrouch : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCanJump : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCanWalk : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCanSwim : 1;  // 0x0000, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCanFly : 1;  // 0x0000, mask 0x10
};
