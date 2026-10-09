// /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// size 0x18, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/ChaosBreakingEventFilter.h

USTRUCT()
struct FChaosBreakingEventRequestSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxNumberOfResults;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinRadius;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinSpeed;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinMass;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EChaosBreakingSortMethod SortMethod;  // 0x0014, size 0x1
};
