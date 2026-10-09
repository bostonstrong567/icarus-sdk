// /Script/Engine.FontImportOptionsData
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Engine/FontImportOptions.h

USTRUCT()
struct FFontImportOptionsData
{
public:
    UPROPERTY(EditAnywhere) FString FontName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) float Height;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) uint8 bEnableAntialiasing : 1;  // 0x0014, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bEnableBold : 1;  // 0x0014, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bEnableItalic : 1;  // 0x0014, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bEnableUnderline : 1;  // 0x0014, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bAlphaOnly : 1;  // 0x0014, mask 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<EFontImportCharacterSet> CharacterSet;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere) FString Chars;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) FString UnicodeRange;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere) FString CharsFilePath;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) FString CharsFileWildcard;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere) uint8 bCreatePrintableOnly : 1;  // 0x0060, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bIncludeASCIIRange : 1;  // 0x0060, mask 0x02
    UPROPERTY(EditAnywhere) FLinearColor ForegroundColor;  // 0x0064, size 0x10
    UPROPERTY(EditAnywhere) uint8 bEnableDropShadow : 1;  // 0x0074, mask 0x01
    UPROPERTY(EditAnywhere) int32 TexturePageWidth;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere) int32 TexturePageMaxHeight;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere) int32 XPadding;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) int32 YPadding;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere) int32 ExtendBoxTop;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere) int32 ExtendBoxBottom;  // 0x008C, size 0x4
    UPROPERTY(EditAnywhere) int32 ExtendBoxRight;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere) int32 ExtendBoxLeft;  // 0x0094, size 0x4
    UPROPERTY(EditAnywhere) uint8 bEnableLegacyMode : 1;  // 0x0098, mask 0x01
    UPROPERTY(EditAnywhere) int32 Kerning;  // 0x009C, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUseDistanceFieldAlpha : 1;  // 0x00A0, mask 0x01
    UPROPERTY(EditAnywhere) int32 DistanceFieldScaleFactor;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere) float DistanceFieldScanRadiusScale;  // 0x00A8, size 0x4
};
