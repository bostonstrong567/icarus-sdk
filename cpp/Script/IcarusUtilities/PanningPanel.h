// /Script/IcarusUtilities.PanningPanel
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x640, declared in Icarus/Source/IcarusUtilities/Public/Widgets/PanningPanel.h

UCLASS()
class UPanningPanel : public UPanelWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    TSharedPtr<SPanningPanel,0> PanningPanel;  // 0x0120, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScrollBarStyle ScrollBarStyle;  // 0x0130, size 0x4D0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EPanningDirection PanningDirection;  // 0x0600, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ScrollBarThickness;  // 0x0604, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ScrollBarPadding;  // 0x060C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AlwaysShowScrollbar;  // 0x0614, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AlwaysShowScrollbarTrack;  // 0x0615, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHideScrollbar;  // 0x0616, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D Size;  // 0x0618, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D ZoomRange;  // 0x0620, size 0x8
    UPROPERTY(BlueprintReadOnly) float ZoomOverride;  // 0x0628, size 0x4
    UPROPERTY(BlueprintReadOnly) FVector2D PositionOverride;  // 0x062C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAllowScroll;  // 0x0634, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OverScrollAmount;  // 0x0638, size 0x4
public:
    UFUNCTION(BlueprintCallable) UOverlaySlot* AddChildToOverlay(UWidget* Content);  // parameters 0x10
    UFUNCTION(BlueprintCallable) FVector2D GetPosition();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Refresh();
    UFUNCTION(BlueprintCallable) void SetPositionOverride(FVector2D Position);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetZoomOverride(float Value);  // parameters 0x4
};
