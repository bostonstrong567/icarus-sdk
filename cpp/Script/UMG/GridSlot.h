// /Script/UMG.GridSlot
// Derives from: UPanelSlot > UVisual > UObject
// size 0x70, declared in Engine/Source/Runtime/UMG/Public/Components/GridSlot.h

UCLASS()
class UGridSlot : public UPanelSlot
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin Padding;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EVerticalAlignment> VerticalAlignment;  // 0x0049, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Row;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 RowSpan;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Column;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 ColumnSpan;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Layer;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D Nudge;  // 0x0060, size 0x8
private:
    SGridPanel::FSlot * Slot;  // 0x0068, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetColumn(int32 InColumn);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetColumnSpan(int32 InColumnSpan);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLayer(int32 InLayer);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetNudge(FVector2D InNudge);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetPadding(FMargin InPadding);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetRow(int32 InRow);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRowSpan(int32 InRowSpan);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);  // parameters 0x1
};
