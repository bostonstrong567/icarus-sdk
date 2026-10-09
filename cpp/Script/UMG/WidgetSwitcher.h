// /Script/UMG.WidgetSwitcher
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x138, declared in Engine/Source/Runtime/UMG/Public/Components/WidgetSwitcher.h

UCLASS()
class UWidgetSwitcher : public UPanelWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 ActiveWidgetIndex;  // 0x0120, size 0x4
protected:
    TSharedPtr<SWidgetSwitcher,0> MyWidgetSwitcher;  // 0x0128, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UWidget* GetActiveWidget() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetActiveWidgetIndex() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumWidgets() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UWidget* GetWidgetAtIndex(int32 Index) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetActiveWidget(UWidget* Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetActiveWidgetIndex(int32 Index);  // parameters 0x4

    // Virtual functions that start here:
    //   SetActiveWidget, SetActiveWidgetIndex
};
