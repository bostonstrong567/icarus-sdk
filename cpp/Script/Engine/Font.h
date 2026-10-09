// /Script/Engine.Font
// Derives from: UObject
// size 0x1D0, declared in Engine/Source/Runtime/Engine/Classes/Engine/Font.h

UCLASS(MinimalAPI)
class UFont : public UObject, public IFontProviderInterface
{
public:
    UPROPERTY(EditAnywhere) EFontCacheType FontCacheType;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) TArray<FFontCharacter> Characters;  // 0x0038, size 0x10
    UPROPERTY() TArray<UTexture2D*> Textures;  // 0x0048, size 0x10
    UPROPERTY() int32 IsRemapped;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) float EmScale;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere) float Ascent;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere) float Descent;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere) float Leading;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere) int32 Kerning;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere) FFontImportOptionsData ImportOptions;  // 0x0070, size 0xB0
    UPROPERTY(Transient) int32 NumCharacters;  // 0x0120, size 0x4
    UPROPERTY(Transient) TArray<int32> MaxCharHeight;  // 0x0128, size 0x10
    UPROPERTY(EditAnywhere) float ScalingFactor;  // 0x0138, size 0x4
    UPROPERTY(EditAnywhere) int32 LegacyFontSize;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere) FName LegacyFontName;  // 0x0140, size 0x8
    UPROPERTY() FCompositeFont CompositeFont;  // 0x0148, size 0x38
    TMap<unsigned short,unsigned short,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned short,unsigned short,0> > CharRemap;  // 0x0180, not reflected
};
