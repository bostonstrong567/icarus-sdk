// /Script/UMG.WrapBoxSlot
// Derives from: UPanelSlot > UVisual > UObject
// size 0x60, declared in Engine/Source/Runtime/UMG/Public/Components/WrapBoxSlot.h

UCLASS()
class UWrapBoxSlot : public UPanelSlot
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin Padding;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bFillEmptySpace;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FillSpanWhenLessThan;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EVerticalAlignment> VerticalAlignment;  // 0x0051, size 0x1
private:
    SWrapBox::FSlot * Slot;  // 0x0058, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetFillEmptySpace(bool InbFillEmptySpace);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPadding(FMargin InPadding);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);  // parameters 0x1
};
