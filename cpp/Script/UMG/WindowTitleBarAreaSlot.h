// /Script/UMG.WindowTitleBarAreaSlot
// Derives from: UPanelSlot > UVisual > UObject
// size 0x60, declared in Engine/Source/Runtime/UMG/Public/Components/WindowTitleBarAreaSlot.h

UCLASS()
class UWindowTitleBarAreaSlot : public UPanelSlot
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin Padding;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EVerticalAlignment> VerticalAlignment;  // 0x0049, size 0x1
private:
    TSharedPtr<SWindowTitleBarArea,0> WindowTitleBarArea;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPadding(FMargin InPadding);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);  // parameters 0x1
};
