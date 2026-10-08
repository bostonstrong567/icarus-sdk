// /Script/UMG.WidgetSwitcherSlot
// Derives from: UPanelSlot > UVisual > UObject
// size 0x58, declared in Engine/Source/Runtime/UMG/Public/Components/WidgetSwitcherSlot.h

UCLASS()
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin Padding;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EVerticalAlignment> VerticalAlignment;  // 0x0051, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    SWidgetSwitcher::FSlot * Slot;  // 0x0038, private

    UFUNCTION(BlueprintCallable) void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPadding(FMargin InPadding);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);  // parameters 0x1
};
