// /Script/SlateCore.FontData
// size 0x20, declared in Engine/Source/Runtime/SlateCore/Public/Fonts/CompositeFont.h

USTRUCT()
struct FFontData
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FString FontFilename;  // 0x0000, size 0x10
    UPROPERTY() EFontHinting Hinting;  // 0x0010, size 0x1
    UPROPERTY() EFontLoadingPolicy LoadingPolicy;  // 0x0011, size 0x1
    UPROPERTY() int32 SubFaceIndex;  // 0x0014, size 0x4
    UPROPERTY() UObject* FontFaceAsset;  // 0x0018, size 0x8
};
