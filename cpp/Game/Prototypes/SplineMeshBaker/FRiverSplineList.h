// /Game/Prototypes/SplineMeshBaker/FRiverSplineList.FRiverSplineList
// size 0x18

USTRUCT()
struct FRiverSplineList
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWTSplineMesh> Splines;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Level;  // 0x0010, size 0x4
};
