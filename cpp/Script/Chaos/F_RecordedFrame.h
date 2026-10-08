// /Script/Chaos.RecordedFrame
// size 0xB8, declared in Engine/Source/Runtime/Experimental/Chaos/Public/GeometryCollection/RecordedTransformTrack.h

USTRUCT()
struct FRecordedFrame
{
    UPROPERTY() TArray<FTransform> Transforms;  // 0x0000, size 0x10
    UPROPERTY() TArray<int32> TransformIndices;  // 0x0010, size 0x10
    UPROPERTY() TArray<int32> PreviousTransformIndices;  // 0x0020, size 0x10
    UPROPERTY() TArray<bool> DisabledFlags;  // 0x0030, size 0x10
    UPROPERTY() TArray<FSolverCollisionData> Collisions;  // 0x0040, size 0x10
    UPROPERTY() TArray<FSolverBreakingData> Breakings;  // 0x0050, size 0x10
    UPROPERTY() TSet<FSolverTrailingData> Trailings;  // 0x0060, size 0x50
    UPROPERTY() float Timestamp;  // 0x00B0, size 0x4
};
