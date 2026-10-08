// /Game/BP/Quests/UMG_MissionInfo.UMG_MissionInfo_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2C9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionInfo_C : public UUserWidget, public IUserObjectListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CompleteAnimationCollapse;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Reveal;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CompleteAnimation;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Complete;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CompletedBox;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* Description;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Glow;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MainVertBox;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Subquests;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TintingBorder;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AQuest* CachedQuest;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bComplete;  // 0x02C8, size 0x1

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_MissionInfo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void OnListItemObjectSet(UObject* ListItemObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Setup(AQuest* Quest);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
