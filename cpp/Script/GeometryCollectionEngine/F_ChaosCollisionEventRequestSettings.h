// /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// size 0x18, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/ChaosCollisionEventFilter.h

USTRUCT()
struct FChaosCollisionEventRequestSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxNumberResults;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinMass;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinSpeed;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinImpulse;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EChaosCollisionSortMethod SortMethod;  // 0x0014, size 0x1
};
