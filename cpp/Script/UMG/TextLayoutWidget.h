// /Script/UMG.TextLayoutWidget
// Derives from: UWidget > UVisual > UObject
// size 0x128, declared in Engine/Source/Runtime/UMG/Public/Components/TextWidgetTypes.h

UCLASS(Abstract)
class UTextLayoutWidget : public UWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FShapedTextOptions ShapedTextOptions;  // 0x0108, size 0x3
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ETextJustify> Justification;  // 0x010B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ETextWrappingPolicy WrappingPolicy;  // 0x010C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 AutoWrapText : 1;  // 0x010D, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WrapTextAt;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin Margin;  // 0x0114, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LineHeightPercentage;  // 0x0124, size 0x4

    UFUNCTION(BlueprintCallable) void SetJustification(TEnumAsByte<ETextJustify> InJustification);  // parameters 0x1

    // Virtual functions that start here:
    //   SetJustification
};
