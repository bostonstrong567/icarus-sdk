// /Script/Icarus.TalentGraphWidget
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E0, declared in Icarus/Source/Icarus/Talents/View/TalentGraphWidget.h

UCLASS(EditInlineNew)
class UTalentGraphWidget : public UUserWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Instanced, BlueprintReadOnly) UPanningPanel* Panner;  // 0x0260, size 0x8
    FTalentsRowHandle PendingFocusTalent;  // 0x0268, not reflected
    int32 PendingFocusAttempts;  // 0x0280, not reflected
    UPROPERTY(BlueprintReadOnly) FTalentArchetypesRowHandle TalentArchetype;  // 0x0284, size 0x18
    UPROPERTY(Instanced, BlueprintReadOnly) UTalentViewInterface* TalentView;  // 0x02A0, size 0x8
    UPROPERTY(BlueprintReadOnly) TArray<UTalentTreeWidget*> TalentTreeWidgets;  // 0x02A8, size 0x10
    UPROPERTY(BlueprintReadOnly) int32 Zoom;  // 0x02B8, size 0x4
    UPROPERTY() TArray<UTalentTooltipWidget*> TooltipWidgets;  // 0x02C0, size 0x10
    int32 CurrentTooltipWidgetIndex;  // 0x02D0, not reflected
    int32 TooltipPoolSize;  // 0x02D4, not reflected
    UPROPERTY() TSubclassOf<UTalentTooltipWidget> TooltipWidgetClass;  // 0x02D8, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UTalentWidget* FindTalentWidget(FTalentsRowHandle Talent) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable) void FocusTalent(FTalentsRowHandle Talent);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FTalentArchetypesRowHandle GetTalentArchetype() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void InitializeGraph(UTalentViewInterface* View, FTalentArchetypesRowHandle Archetype);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void OnZoomChanged(int32 Level, float Scale);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void PostSetup();
};
