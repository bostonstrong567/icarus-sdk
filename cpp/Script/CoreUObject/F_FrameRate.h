// /Script/CoreUObject.FrameRate
// size 0x8, declared in Engine/Source/Runtime/Core/Public/Misc/FrameRate.h

USTRUCT()
struct FFrameRate
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Numerator;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Denominator;  // 0x0004, size 0x4
};
