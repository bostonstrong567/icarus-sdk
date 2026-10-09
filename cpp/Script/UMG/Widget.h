// /Script/UMG.Widget
// Derives from: UVisual > UObject
// size 0x108, declared in Engine/Source/Runtime/UMG/Public/Components/Widget.h

UCLASS(Abstract)
class UWidget : public UVisual
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPanelSlot* Slot;  // 0x0028, size 0x8
    UPROPERTY() FGetBool bIsEnabledDelegate;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText ToolTipText;  // 0x0040, size 0x18
    UPROPERTY() FGetText ToolTipTextDelegate;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UWidget* ToolTipWidget;  // 0x0068, size 0x8
    UPROPERTY() FGetWidget ToolTipWidgetDelegate;  // 0x0070, size 0x10
    UPROPERTY() FGetSlateVisibility VisibilityDelegate;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FWidgetTransform RenderTransform;  // 0x0090, size 0x1C
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D RenderTransformPivot;  // 0x00AC, size 0x8
    UPROPERTY() uint8 bIsVariable : 1;  // 0x00B4, mask 0x01
    UPROPERTY(Transient) uint8 bCreatedByConstructionScript : 1;  // 0x00B4, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bIsEnabled : 1;  // 0x00B4, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bOverride_Cursor : 1;  // 0x00B4, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EMouseCursor> Cursor;  // 0x00C1, size 0x1
    UPROPERTY(EditAnywhere) EWidgetClipping Clipping;  // 0x00C2, size 0x1
    UPROPERTY(EditAnywhere) ESlateVisibility Visibility;  // 0x00C3, size 0x1
    UPROPERTY(EditAnywhere) float RenderOpacity;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UWidgetNavigation* Navigation;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere) EFlowDirectionPreference FlowDirectionPreference;  // 0x00D0, size 0x1
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bIsVolatile : 1;  // 0x00C0, mask 0x01
    TWeakPtr<SWidget,0> MyWidget;  // 0x00D8, not reflected
    TWeakPtr<SObjectWidget,0> MyGCWidget;  // 0x00E8, not reflected
    UPROPERTY(Transient) TArray<UPropertyBinding*> NativeBindings;  // 0x00F8, size 0x10
private:
    UPROPERTY(Instanced) USlateAccessibleWidgetData* AccessibleWidgetData;  // 0x00B8, size 0x8
public:
    UFUNCTION(BlueprintCallable) void ForceLayoutPrepass();
    UFUNCTION(BlueprintCallable) void ForceVolatile(bool bForce);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetAccessibleSummaryText() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetAccessibleText() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FGeometry GetCachedGeometry() const;  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) EWidgetClipping GetClipping() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector2D GetDesiredSize() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) UGameInstance* GetGameInstance() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetIsEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) ULocalPlayer* GetOwningLocalPlayer() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintCosmetic) APlayerController* GetOwningPlayer() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FGeometry GetPaintSpaceGeometry() const;  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) UPanelWidget* GetParent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRenderOpacity() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRenderTransformAngle() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FGeometry GetTickSpaceGeometry() const;  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) ESlateVisibility GetVisibility() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasAnyUserFocus() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasFocusedDescendants() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasKeyboardFocus() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasMouseCapture() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasUserFocus(APlayerController* PlayerController) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasUserFocusedDescendants(APlayerController* PlayerController) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void InvalidateLayoutAndVolatility();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsHovered() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsVisible() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RemoveFromParent();
    UFUNCTION(BlueprintCallable) void ResetCursor();
    UFUNCTION(BlueprintCallable) void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetClipping(EWidgetClipping InClipping);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCursor(TEnumAsByte<EMouseCursor> InCursor);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFocus();
    UFUNCTION(BlueprintCallable) void SetIsEnabled(bool bInIsEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetKeyboardFocus();
    UFUNCTION(BlueprintCallable) void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetNavigationRuleCustom(EUINavigation Direction, FCustomWidgetNavigationDelegate InCustomDelegate);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetNavigationRuleCustomBoundary(EUINavigation Direction, FCustomWidgetNavigationDelegate InCustomDelegate);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetNavigationRuleExplicit(EUINavigation Direction, UWidget* InWidget);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetRenderOpacity(float InOpacity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRenderScale(FVector2D Scale);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetRenderShear(FVector2D Shear);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetRenderTransform(FWidgetTransform InTransform);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetRenderTransformAngle(float Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRenderTransformPivot(FVector2D Pivot);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetRenderTranslation(FVector2D Translation);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetToolTip(UWidget* Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetToolTipText(const FText& InToolTipText);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetUserFocus(APlayerController* PlayerController);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetVisibility(ESlateVisibility InVisibility);  // parameters 0x1

    // Virtual functions that start here:
    //   GetAccessibleWidget, GetOwningLocalPlayer, GetOwningPlayer, IsHovered, OnBindingChanged
    //   OnWidgetRebuilt, RebuildWidget, RemoveFromParent, SetIsEnabled, SetVisibility
    //   SynchronizeProperties
};
