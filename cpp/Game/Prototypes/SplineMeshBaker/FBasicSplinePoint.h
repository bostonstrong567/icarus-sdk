// /Game/Prototypes/SplineMeshBaker/FBasicSplinePoint.FBasicSplinePoint
// size 0x1C

USTRUCT()
struct FBasicSplinePoint
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator Rotation;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESplinePointType> Type;  // 0x0018, size 0x1
};
