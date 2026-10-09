// /Script/GeometryCollectionEngine.ChaosTrailingEventData
// size 0x2C, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/ChaosTrailingEventFilter.h

USTRUCT()
struct FChaosTrailingEventData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Velocity;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector AngularVelocity;  // 0x0018, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Mass;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ParticleIndex;  // 0x0028, size 0x4
};
