// /Script/Engine.FindFloorResult
// size 0x94, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h

USTRUCT()
struct FFindFloorResult
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bBlockingHit : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bWalkableFloor : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bLineTrace : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FloorDist;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LineDist;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FHitResult HitResult;  // 0x000C, size 0x88
};
