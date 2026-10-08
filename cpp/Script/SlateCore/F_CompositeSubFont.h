// /Script/SlateCore.CompositeSubFont
// size 0x38, declared in Engine/Source/Runtime/SlateCore/Public/Fonts/CompositeFont.h

USTRUCT()
struct FCompositeSubFont : public FCompositeFallbackFont
{
    UPROPERTY() TArray<FInt32Range> CharacterRanges;  // 0x0018, size 0x10
    UPROPERTY() FString Cultures;  // 0x0028, size 0x10
};
