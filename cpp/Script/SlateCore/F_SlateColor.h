// /Script/SlateCore.SlateColor
// size 0x28, declared in Engine/Source/Runtime/SlateCore/Public/Styling/SlateColor.h

USTRUCT()
struct FSlateColor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor SpecifiedColor;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESlateColorStylingMode> ColorUseRule;  // 0x0010, size 0x1
private:
    TSharedPtr<FLinearColor,0> LinkedSpecifiedColor;  // 0x0018, not reflected
};
