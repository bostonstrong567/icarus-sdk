// /Game/Prototypes/SplineMeshBaker/FShrinkWrapSplineList.FShrinkWrapSplineList
// size 0x18

USTRUCT()
struct FShrinkWrapSplineList
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWTShrinkWrap> Splines;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Level;  // 0x0010, size 0x4
};
