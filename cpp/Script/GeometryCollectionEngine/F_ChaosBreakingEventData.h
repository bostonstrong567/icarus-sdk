// /Script/GeometryCollectionEngine.ChaosBreakingEventData
// size 0x1C, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/ChaosBreakingEventFilter.h

USTRUCT()
struct FChaosBreakingEventData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector Velocity;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Mass;  // 0x0018, size 0x4
};
