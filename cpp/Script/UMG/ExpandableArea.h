// /Script/UMG.ExpandableArea
// Derives from: UWidget > UVisual > UObject
// size 0x338, declared in Engine/Source/Runtime/UMG/Public/Components/ExpandableArea.h

UCLASS()
class UExpandableArea : public UWidget, public INamedSlotInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FExpandableAreaStyle Style;  // 0x0110, size 0x120
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateBrush BorderBrush;  // 0x0230, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSlateColor BorderColor;  // 0x02B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsExpanded;  // 0x02E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxHeight;  // 0x02E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin HeaderPadding;  // 0x02E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMargin AreaPadding;  // 0x02F8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnExpandableAreaExpansionChanged OnExpansionChanged;  // 0x0308, size 0x10
protected:
    UPROPERTY(Instanced) UWidget* HeaderContent;  // 0x0318, size 0x8
    UPROPERTY(Instanced) UWidget* BodyContent;  // 0x0320, size 0x8
    TSharedPtr<SExpandableArea,0> MyExpandableArea;  // 0x0328, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetIsExpanded() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIsExpanded(bool IsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIsExpanded_Animated(bool IsExpanded);  // parameters 0x1
};
