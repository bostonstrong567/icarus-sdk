// /Game/BP/Quests/UMG_QuestObjectiveEntry.UMG_QuestObjectiveEntry_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_QuestObjectiveEntry_C : public UUserWidget, public IUserObjectListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CompleteAnimationCollapse;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Reveal;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CompleteAnimation;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Complete;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CompletedBox;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Glow;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* InfoContainer;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MainVertBox;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* ObjectiveTextBlock;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TintingBorder;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CachedComplete;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CachedParentComplete;  // 0x02C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AQuest* CachedQuest;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 VisibleState;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDataTable* Complete_Text_Style_Set;  // 0x02D8, size 0x8, named "Complete Text Style Set"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDataTable* Incomplete_Text_Style_Set;  // 0x02E0, size 0x8, named "Incomplete Text Style Set"

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_QuestObjectiveEntry(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_150A755A4DAA0F7702CFB689A47AFB20();
    UFUNCTION(BlueprintCallable) void Finished_54BD1BA940CD590F99FE70B029DA39D5();
    UFUNCTION(BlueprintCallable) void Finished_E810283B4FB239E8364D2C8C80E2C89B();
    UFUNCTION(BlueprintCallable) void Finished_FA89F8484A04F5B013BEE5B07F351D47();
    UFUNCTION(BlueprintImplementableEvent) void OnListItemObjectSet(UObject* ListItemObject);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Setup(FText Text, bool Complete, bool ParentComplete, bool SubObjective);  // parameters 0x1B
    UFUNCTION(BlueprintCallable) void UpdateStyle();
};
