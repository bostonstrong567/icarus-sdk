// /Script/UMG.RichTextBlock
// Derives from: UTextLayoutWidget > UWidget > UVisual > UObject
// size 0x678, declared in Engine/Source/Runtime/UMG/Public/Components/RichTextBlock.h

UCLASS()
class URichTextBlock : public UTextLayoutWidget
{
public:
    UPROPERTY(EditAnywhere) FText Text;  // 0x0128, size 0x18
    UPROPERTY(EditAnywhere) UDataTable* TextStyleSet;  // 0x0140, size 0x8
    UPROPERTY(EditAnywhere) TArray<TSubclassOf<URichTextBlockDecorator>> DecoratorClasses;  // 0x0148, size 0x10
    UPROPERTY(EditAnywhere) bool bOverrideDefaultStyle;  // 0x0158, size 0x1
    UPROPERTY(EditAnywhere) FTextBlockStyle DefaultTextStyleOverride;  // 0x0160, size 0x270
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinDesiredWidth;  // 0x03D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ETextTransformPolicy TextTransformPolicy;  // 0x03D4, size 0x1
    UPROPERTY(Transient) FTextBlockStyle DefaultTextStyle;  // 0x03D8, size 0x270
    UPROPERTY(Transient) TArray<URichTextBlockDecorator*> InstanceDecorators;  // 0x0648, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FSlateStyleSet,0> StyleInstance;  // 0x0658, protected
    TSharedPtr<SRichTextBlock,0> MyRichTextBlock;  // 0x0668, protected

    UFUNCTION() void ClearAllDefaultStyleOverrides();
    UFUNCTION(BlueprintCallable) URichTextBlockDecorator* GetDecoratorByClass(TSubclassOf<URichTextBlockDecorator> DecoratorClass);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetText() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetAutoWrapText(bool InAutoTextWrap);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDefaultColorAndOpacity(FSlateColor InColorAndOpacity);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetDefaultFont(FSlateFontInfo InFontInfo);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void SetDefaultShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetDefaultShadowOffset(FVector2D InShadowOffset);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetDefaultStrikeBrush(FSlateBrush& InStrikeBrush);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void SetDefaultTextStyle(const FTextBlockStyle& InDefaultTextStyle);  // parameters 0x270
    UFUNCTION(BlueprintCallable) void SetMinDesiredWidth(float InMinDesiredWidth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetText(const FText& InText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetTextStyleSet(UDataTable* NewTextStyleSet);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);  // parameters 0x1

    // Virtual functions that start here:
    //   ApplyUpdatedDefaultTextStyle, CreateDecorators, CreateMarkupParser, CreateMarkupWriter, SetText
    //   UpdateStyleData
};
