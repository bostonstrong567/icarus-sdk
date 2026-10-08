// /Script/UMG.SlateChildSize
// size 0x8, declared in Engine/Source/Runtime/UMG/Public/Components/SlateWrapperTypes.h

USTRUCT()
struct FSlateChildSize
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Value;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESlateSizeRule> SizeRule;  // 0x0004, size 0x1
};
