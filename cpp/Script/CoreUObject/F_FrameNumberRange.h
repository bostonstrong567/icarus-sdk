// /Script/CoreUObject.FrameNumberRange
// size 0x10, declared in Engine/Source/Runtime/Core/Public/Math/Range.h

USTRUCT()
struct FFrameNumberRange
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameNumberRangeBound LowerBound;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameNumberRangeBound UpperBound;  // 0x0008, size 0x8
};
