// /Script/UMG.TextBlock
// Derives from: UTextLayoutWidget > UWidget > UVisual > UObject
// size 0x2A8, declared in Engine/Source/Runtime/UMG/Public/Components/TextBlock.h

UCLASS()
class UTextBlock : public UTextLayoutWidget
{
public:
    UPROPERTY(EditAnywhere) FText Text;  // 0x0128, size 0x18
    UPROPERTY() FGetText TextDelegate;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateColor ColorAndOpacity;  // 0x0150, size 0x28
    UPROPERTY() FGetSlateColor ColorAndOpacityDelegate;  // 0x0178, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateFontInfo Font;  // 0x0188, size 0x58
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateBrush StrikeBrush;  // 0x01E0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D ShadowOffset;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor ShadowColorAndOpacity;  // 0x0270, size 0x10
    UPROPERTY() FGetLinearColor ShadowColorAndOpacityDelegate;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinDesiredWidth;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bWrapWithInvalidationPanel;  // 0x0294, size 0x1
    UPROPERTY(Deprecated) bool bAutoWrapText;  // 0x0295, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ETextTransformPolicy TextTransformPolicy;  // 0x0296, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bSimpleTextMode;  // 0x0297, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<STextBlock,0> MyTextBlock;  // 0x0298, protected

    UFUNCTION(BlueprintCallable) UMaterialInstanceDynamic* GetDynamicFontMaterial();  // parameters 0x8
    UFUNCTION(BlueprintCallable) UMaterialInstanceDynamic* GetDynamicOutlineMaterial();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetText() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetAutoWrapText(bool InAutoTextWrap);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetColorAndOpacity(FSlateColor InColorAndOpacity);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetFont(FSlateFontInfo InFontInfo);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void SetMinDesiredWidth(float InMinDesiredWidth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOpacity(float InOpacity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetShadowOffset(FVector2D InShadowOffset);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetStrikeBrush(FSlateBrush InStrikeBrush);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void SetText(FText InText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWrapTextAt(float InWrapTextAt);  // parameters 0x4

    // Virtual functions that start here:
    //   GetDisplayText, SetText
};
