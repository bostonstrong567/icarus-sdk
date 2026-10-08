// /Game/Prototypes/SpaceStationPlayer/Data/HabMovementStateStruct.HabMovementStateStruct
// size 0x30

USTRUCT()
struct HabMovementStateStruct
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Velocity;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector DesiredDirection;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Using6DOFMovement;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TouchingSurface;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentTime;  // 0x002C, size 0x4
};
