// /Script/SlateCore.CompositeFont
// size 0x38, declared in Engine/Source/Runtime/SlateCore/Public/Fonts/CompositeFont.h

USTRUCT()
struct FCompositeFont
{
    UPROPERTY() FTypeface DefaultTypeface;  // 0x0000, size 0x10
    UPROPERTY() FCompositeFallbackFont FallbackTypeface;  // 0x0010, size 0x18
    UPROPERTY() TArray<FCompositeSubFont> SubTypefaces;  // 0x0028, size 0x10
};
