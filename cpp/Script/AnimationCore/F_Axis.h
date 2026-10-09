// /Script/AnimationCore.Axis
// size 0x10, declared in Engine/Source/Runtime/AnimationCore/Public/CommonAnimTypes.h

USTRUCT()
struct FAxis
{
public:
    UPROPERTY(EditAnywhere) FVector Axis;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere) bool bInLocalSpace;  // 0x000C, size 0x1
};
