// /Script/Icarus.MovementStateData
// size 0x1C, declared in Icarus/Source/Icarus/NPC/Characters/MovementState.h

USTRUCT()
struct FMovementStateData
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxWalkSpeed;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GroundFriction;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrakingFriction;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxAcceleration;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrakingDeceleration;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationRate;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSwimSpeed;  // 0x0018, size 0x4
};
