// /Script/SlateCore.FontOutlineSettings
// size 0x20, declared in Engine/Source/Runtime/SlateCore/Public/Fonts/SlateFontInfo.h

USTRUCT()
struct FFontOutlineSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OutlineSize;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bSeparateFillAlpha;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bApplyOutlineToDropShadows;  // 0x0005, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* OutlineMaterial;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor OutlineColor;  // 0x0010, size 0x10
};
