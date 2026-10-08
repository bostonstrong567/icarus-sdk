// /Script/Chaos.SolverCollisionData
// size 0x6C, declared in Engine/Source/Runtime/Experimental/Chaos/Public/GeometryCollection/RecordedTransformTrack.h

USTRUCT()
struct FSolverCollisionData
{
    UPROPERTY() FVector Location;  // 0x0000, size 0xC
    UPROPERTY() FVector AccumulatedImpulse;  // 0x000C, size 0xC
    UPROPERTY() FVector Normal;  // 0x0018, size 0xC
    UPROPERTY() FVector Velocity1;  // 0x0024, size 0xC
    UPROPERTY() FVector Velocity2;  // 0x0030, size 0xC
    UPROPERTY() FVector AngularVelocity1;  // 0x003C, size 0xC
    UPROPERTY() FVector AngularVelocity2;  // 0x0048, size 0xC
    UPROPERTY() float Mass1;  // 0x0054, size 0x4
    UPROPERTY() float Mass2;  // 0x0058, size 0x4
    UPROPERTY() int32 ParticleIndex;  // 0x005C, size 0x4
    UPROPERTY() int32 LevelsetIndex;  // 0x0060, size 0x4
    UPROPERTY() int32 ParticleIndexMesh;  // 0x0064, size 0x4
    UPROPERTY() int32 LevelsetIndexMesh;  // 0x0068, size 0x4
};
