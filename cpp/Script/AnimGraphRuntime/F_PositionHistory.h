// /Script/AnimGraphRuntime.PositionHistory
// size 0x30, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/KismetAnimationTypes.h

USTRUCT()
struct FPositionHistory
{
public:
    UPROPERTY(EditAnywhere) TArray<FVector> Positions;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) float Range;  // 0x0010, size 0x4
    TArray<float,TSizedDefaultAllocator<32> > Velocities;  // 0x0018, not reflected
    uint32 LastIndex;  // 0x0028, not reflected
};
