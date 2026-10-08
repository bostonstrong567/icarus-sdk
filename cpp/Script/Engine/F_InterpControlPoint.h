// /Script/Engine.InterpControlPoint
// size 0x1C, declared in Engine/Source/Runtime/Engine/Classes/Components/InterpToMovementComponent.h

USTRUCT()
struct FInterpControlPoint
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PositionControlPoint;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bPositionIsRelative;  // 0x000C, size 0x1

    // Not reflected:
    float StartTime;  // 0x0010
    float DistanceToNext;  // 0x0014
    float Percentage;  // 0x0018
};
