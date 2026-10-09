// /Script/CoreUObject.InterpCurveVector2D
// size 0x18, declared in Engine/Source/Runtime/Core/Public/Math/InterpCurve.h

USTRUCT()
struct FInterpCurveVector2D
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FInterpCurvePointVector2D> Points;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsLooped;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LoopKeyOffset;  // 0x0014, size 0x4
};
