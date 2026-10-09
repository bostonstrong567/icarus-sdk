// /Script/UMG.ScaleBoxSlot
// Derives from: UPanelSlot > UVisual > UObject
// size 0x60, declared in Engine/Source/Runtime/UMG/Public/Components/ScaleBoxSlot.h

UCLASS()
class UScaleBoxSlot : public UPanelSlot
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin Padding;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EVerticalAlignment> VerticalAlignment;  // 0x0049, size 0x1
private:
    TWeakPtr<SScaleBox,0> ScaleBox;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPadding(FMargin InPadding);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);  // parameters 0x1
};
