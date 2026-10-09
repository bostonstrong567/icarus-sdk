// /Script/Icarus.TalentGraphWidget
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B8, declared in Icarus/Source/Icarus/Talents/View/TalentGraphWidget.h

UCLASS(EditInlineNew)
class UTalentGraphWidget : public UUserWidget
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(BlueprintReadOnly) FTalentArchetypesRowHandle TalentArchetype;  // 0x0260, size 0x18
    UPROPERTY(Instanced, BlueprintReadOnly) UTalentViewInterface* TalentView;  // 0x0278, size 0x8
    UPROPERTY(BlueprintReadOnly) TArray<UTalentTreeWidget*> TalentTreeWidgets;  // 0x0280, size 0x10
    UPROPERTY(BlueprintReadOnly) int32 Zoom;  // 0x0290, size 0x4
    UPROPERTY() TArray<UTalentTooltipWidget*> TooltipWidgets;  // 0x0298, size 0x10
    int32 CurrentTooltipWidgetIndex;  // 0x02A8, not reflected
    int32 TooltipPoolSize;  // 0x02AC, not reflected
    UPROPERTY() TSubclassOf<UTalentTooltipWidget> TooltipWidgetClass;  // 0x02B0, size 0x8
public:
    UFUNCTION(BlueprintCallable) void InitializeGraph(UTalentViewInterface* View, FTalentArchetypesRowHandle Archetype);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void OnZoomChanged(int32 Level, float Scale);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void PostSetup();
};
