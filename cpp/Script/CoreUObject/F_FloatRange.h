// /Script/CoreUObject.FloatRange
// size 0x10, declared in Engine/Source/Runtime/Core/Public/Math/Range.h

USTRUCT()
struct FFloatRange
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFloatRangeBound LowerBound;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFloatRangeBound UpperBound;  // 0x0008, size 0x8
};
