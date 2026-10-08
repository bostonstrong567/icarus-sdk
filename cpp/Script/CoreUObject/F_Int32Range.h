// /Script/CoreUObject.Int32Range
// size 0x10, declared in Engine/Source/Runtime/Core/Public/Math/Range.h

USTRUCT()
struct FInt32Range
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInt32RangeBound LowerBound;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInt32RangeBound UpperBound;  // 0x0008, size 0x8
};
