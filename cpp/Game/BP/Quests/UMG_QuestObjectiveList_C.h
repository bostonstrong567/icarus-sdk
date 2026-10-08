// /Game/BP/Quests/UMG_QuestObjectiveList.UMG_QuestObjectiveList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_QuestObjectiveList_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* QuestCompleteSwap;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* FactionOverallProgress;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MissionBox;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MissionTitle;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OperationBox;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OperationTitle;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* QuestList;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* QuestName;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* QuestNameRetainer;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Questsborder;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* QuestVertbox;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* SpecialObjectives;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_AudioWaveform_C* UMG_AudioWaveform;  // 0x02E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText MissionName;  // 0x02F0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialise;  // 0x0308, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText QuestText;  // 0x0310, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_QuestObjectiveEntry_C*> ObjectiveWidgets;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AQuest*, UUMG_QuestObjectiveEntry_C*> WidgetMap;  // 0x0338, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HadQuest;  // 0x0388, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle Session_Flag;  // 0x038C, size 0x18, named "Session Flag"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_QuestObjectiveEntry_C* RecievingObjectives;  // 0x03A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectListRowHandle Prospect;  // 0x03B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DropName;  // 0x03C8, size 0x18

    UFUNCTION() void ExecuteUbergraph_UMG_QuestObjectiveList(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateFactionMissionUI(FFactionMissionsRowHandle FactionMission);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateObjectiveCount(TArray<FQuestDescription>& QuestDescriptions);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateObjectiveStates(TArray<FQuestDescription>& QuestDescriptions);  // parameters 0x10
};
