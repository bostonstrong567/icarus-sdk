// /Script/Engine.FontFace
// Derives from: UObject
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Engine/FontFace.h

UCLASS(MinimalAPI)
class UFontFace : public UObject, public IFontFaceInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString SourceFilename;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFontHinting Hinting;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFontLoadingPolicy LoadingPolicy;  // 0x0041, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EFontLayoutMethod LayoutMethod;  // 0x0042, size 0x1
    TSharedRef<FFontFaceData,1> FontFaceData;  // 0x0048, not reflected
};
