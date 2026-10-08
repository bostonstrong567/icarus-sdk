// /Script/GeometryCollectionEngine.ChaosCollisionEventData
// size 0x58, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/ChaosCollisionEventFilter.h

USTRUCT()
struct FChaosCollisionEventData
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector Normal;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector Velocity1;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector Velocity2;  // 0x0024, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Mass1;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Mass2;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector Impulse;  // 0x0038, size 0xC

    // Not reflected:
    Chaos::TGeometryParticle<float,3> * Particle;  // 0x0048
    Chaos::TGeometryParticle<float,3> * Levelset;  // 0x0050
};
