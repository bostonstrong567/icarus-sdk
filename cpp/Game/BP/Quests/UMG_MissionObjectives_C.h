// /Game/BP/Quests/UMG_MissionObjectives.UMG_MissionObjectives_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x478, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionObjectives_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Fade;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* QuestCompleteSwap;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBackgroundBlur* BackgroundBlur_QuestList;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* InfoDivider;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MainLayout;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MissionBox;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MissionObjectives;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* MissionOverview;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* MissionState;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OperationBox;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OperationTitle;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectTitle;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* QuestInfo;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* QuestList;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* QuestName;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* QuestNameRetainer;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* QuestVertbox;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_KeybindClose;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* UserToggle;  // 0x0308, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText MissionName;  // 0x0310, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasSetupQuest;  // 0x0328, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText QuestText;  // 0x0330, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDelay;  // 0x0348, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle Session_Flag;  // 0x034C, size 0x18, named "Session Flag"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_QuestObjectiveEntry_C* RecievingObjectives;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectListRowHandle Prospect;  // 0x0370, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DropName;  // 0x0388, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AQuest* CachedQuest;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FQuestsEnum, UUMG_MissionObjective_C*> Quest_Enum;  // 0x03A8, size 0x50, named "Quest Enum"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle MissionFailed;  // 0x03F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Faction_Mission;  // 0x0410, size 0x18, named "Faction Mission"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AQuest*, UUMG_MissionInfo_C*> InfoList;  // 0x0428, size 0x50

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void Delay();
    UFUNCTION() void ExecuteUbergraph_UMG_MissionObjectives(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FullClean();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateInfo();
    UFUNCTION(BlueprintCallable) void UpdateMissionNames();
    UFUNCTION(BlueprintCallable) void UserToggleVisible();
};
