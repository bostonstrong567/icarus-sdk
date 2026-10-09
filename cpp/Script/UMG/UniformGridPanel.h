// /Script/UMG.UniformGridPanel
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x148, declared in Engine/Source/Runtime/UMG/Public/Components/UniformGridPanel.h

UCLASS()
class UUniformGridPanel : public UPanelWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin SlotPadding;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinDesiredSlotWidth;  // 0x0130, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinDesiredSlotHeight;  // 0x0134, size 0x4
protected:
    TSharedPtr<SUniformGridPanel,0> MyUniformGridPanel;  // 0x0138, not reflected
public:
    UFUNCTION(BlueprintCallable) UUniformGridSlot* AddChildToUniformGrid(UWidget* Content, int32 InRow, int32 InColumn);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSlotPadding(FMargin InSlotPadding);  // parameters 0x10
};
