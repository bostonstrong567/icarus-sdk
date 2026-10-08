// /Script/UMG.WindowTitleBarArea
// Derives from: UContentWidget > UPanelWidget > UWidget > UVisual > UObject
// size 0x140, declared in Engine/Source/Runtime/UMG/Public/Components/WindowTitleBarArea.h

UCLASS()
class UWindowTitleBarArea : public UContentWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bWindowButtonsEnabled;  // 0x0120, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bDoubleClickTogglesFullscreen;  // 0x0121, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SWindowTitleBarArea,0> MyWindowTitleBarArea;  // 0x0128, protected
    FDelegateHandle WindowActionNotificationHandle;  // 0x0138, private

    UFUNCTION(BlueprintCallable) void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPadding(FMargin InPadding);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);  // parameters 0x1
};
