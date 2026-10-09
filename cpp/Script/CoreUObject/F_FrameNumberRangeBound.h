// /Script/CoreUObject.FrameNumberRangeBound
// size 0x8, declared in Engine/Source/Runtime/Core/Public/Math/RangeBound.h

USTRUCT()
struct FFrameNumberRangeBound
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ERangeBoundTypes> Type;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFrameNumber Value;  // 0x0004, size 0x4
};
