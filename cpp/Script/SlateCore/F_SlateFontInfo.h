// /Script/SlateCore.SlateFontInfo
// size 0x58, declared in Engine/Source/Runtime/SlateCore/Public/Fonts/SlateFontInfo.h

USTRUCT()
struct FSlateFontInfo
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* FontObject;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* FontMaterial;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFontOutlineSettings OutlineSettings;  // 0x0010, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TypefaceFontName;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Size;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LetterSpacing;  // 0x004C, size 0x4

    // Not reflected:
    TSharedPtr<FCompositeFont const ,0> CompositeFont;  // 0x0030
    EFontFallback FontFallback;  // 0x0050
};
