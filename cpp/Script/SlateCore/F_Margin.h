// /Script/SlateCore.Margin
// size 0x10, declared in Engine/Source/Runtime/SlateCore/Public/Layout/Margin.h

USTRUCT()
struct FMargin
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Left;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Top;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Right;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Bottom;  // 0x000C, size 0x4
};
