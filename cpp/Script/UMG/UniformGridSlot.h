// /Script/UMG.UniformGridSlot
// Derives from: UPanelSlot > UVisual > UObject
// size 0x50, declared in Engine/Source/Runtime/UMG/Public/Components/UniformGridSlot.h

UCLASS()
class UUniformGridSlot : public UPanelSlot
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EVerticalAlignment> VerticalAlignment;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Row;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Column;  // 0x0040, size 0x4
private:
    SUniformGridPanel::FSlot * Slot;  // 0x0048, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetColumn(int32 InColumn);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetRow(int32 InRow);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);  // parameters 0x1
};
