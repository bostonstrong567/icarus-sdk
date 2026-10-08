// /Script/Icarus.TalentWidget
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, declared in Icarus/Source/Icarus/Talents/View/TalentWidget.h

UCLASS(EditInlineNew)
class UTalentWidget : public UUserWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FTalentsRowHandle Talent;  // 0x0260, size 0x18
    UPROPERTY(Instanced) TWeakObjectPtr<UTalentGraphWidget> CachedOwningGraphWidget;  // 0x0278, size 0x8
    UPROPERTY(Instanced) TWeakObjectPtr<UTalentTooltipWidget> CachedTooltipWidget;  // 0x0280, size 0x8

    UFUNCTION(BlueprintNativeEvent) void FillTooltip(UTalentTooltipWidget* NewTooltipWidget);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) FString GetStringForFilterSearch();  // parameters 0x10
    UFUNCTION() UWidget* GetTooltip();  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnTalentSet();
    UFUNCTION(BlueprintImplementableEvent) void SetSearchHighlight(bool bHighlighted);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTalent(FTalentsRowHandle InTalent);  // parameters 0x18
    UFUNCTION(BlueprintCallable) UTalentTooltipWidget* TryGetCurrentTooltipWidget();  // parameters 0x8

    // Virtual functions that start here:
    //   FillTooltip_Implementation
};
