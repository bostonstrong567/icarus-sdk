// /Script/UMG.ScrollBox
// Derives from: UPanelWidget > UWidget > UVisual > UObject
// size 0x880, declared in Engine/Source/Runtime/UMG/Public/Components/ScrollBox.h

UCLASS()
class UScrollBox : public UPanelWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScrollBoxStyle WidgetStyle;  // 0x0120, size 0x228
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScrollBarStyle WidgetBarStyle;  // 0x0348, size 0x4D0
    UPROPERTY(Deprecated) USlateWidgetStyleAsset* Style;  // 0x0818, size 0x8
    UPROPERTY(Deprecated) USlateWidgetStyleAsset* BarStyle;  // 0x0820, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EOrientation> Orientation;  // 0x0828, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ESlateVisibility ScrollBarVisibility;  // 0x0829, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EConsumeMouseWheel ConsumeMouseWheel;  // 0x082A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D ScrollbarThickness;  // 0x082C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin ScrollbarPadding;  // 0x0834, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool AlwaysShowScrollbar;  // 0x0844, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool AlwaysShowScrollbarTrack;  // 0x0845, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool AllowOverscroll;  // 0x0846, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAnimateWheelScrolling;  // 0x0847, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EDescendantScrollDestination NavigationDestination;  // 0x0848, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float NavigationScrollPadding;  // 0x084C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EScrollWhenFocusChanges ScrollWhenFocusChanges;  // 0x0850, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAllowRightClickDragScrolling;  // 0x0851, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float WheelScrollMultiplier;  // 0x0854, size 0x4
    UPROPERTY(BlueprintAssignable) FOnUserScrolledEvent OnUserScrolled;  // 0x0858, size 0x10
protected:
    float DesiredScrollOffset;  // 0x0868, not reflected
    TSharedPtr<SScrollBox,0> MyScrollBox;  // 0x0870, not reflected
public:
    UFUNCTION(BlueprintCallable) void EndInertialScrolling();
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetScrollOffset() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetScrollOffsetOfEnd() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetViewOffsetFraction() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ScrollToEnd();
    UFUNCTION(BlueprintCallable) void ScrollToStart();
    UFUNCTION(BlueprintCallable) void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float Padding);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetAllowOverscroll(bool NewAllowOverscroll);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetScrollOffset(float NewScrollOffset);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetScrollbarPadding(const FMargin& NewScrollbarPadding);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetScrollbarThickness(const FVector2D& NewScrollbarThickness);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);  // parameters 0x4
};
