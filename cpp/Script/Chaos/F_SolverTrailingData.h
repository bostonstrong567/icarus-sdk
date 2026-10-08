// /Script/Chaos.SolverTrailingData
// size 0x30, declared in Engine/Source/Runtime/Experimental/Chaos/Public/GeometryCollection/RecordedTransformTrack.h

USTRUCT()
struct FSolverTrailingData
{
    UPROPERTY() FVector Location;  // 0x0000, size 0xC
    UPROPERTY() FVector Velocity;  // 0x000C, size 0xC
    UPROPERTY() FVector AngularVelocity;  // 0x0018, size 0xC
    UPROPERTY() float Mass;  // 0x0024, size 0x4
    UPROPERTY() int32 ParticleIndex;  // 0x0028, size 0x4
    UPROPERTY() int32 ParticleIndexMesh;  // 0x002C, size 0x4
};
