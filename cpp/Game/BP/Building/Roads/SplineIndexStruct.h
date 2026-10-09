// /Game/BP/Building/Roads/SplineIndexStruct.SplineIndexStruct
// size 0x10

USTRUCT()
struct SplineIndexStruct
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusSplineActor_C* Spline;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Index;  // 0x0008, size 0x4
};
