// /Game/UI/Windows/GreatHunt/UMG_GreatHunt_MissionSelected.UMG_GreatHunt_MissionSelected_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x571, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_GreatHunt_MissionSelected_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowMain;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* SwitchAnimation;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenAnimation;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* AbandonOperation;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BeginOperation;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* ButtonSwitcher;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Currency;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DescriptionText;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HuntDescription;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HuntImage;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HuntName;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HuntOverview;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_110;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Main;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MissionOverview;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* OutcomesBox;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* OutcomesList;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ProspectTexture;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Rewards;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* StatusList;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_GreatHunt_ObjectiveList_C* UMG_GreatHunt_ObjectiveList;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionDifficulty_C* UMG_MissionDifficulty;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOperationSelected OperationSelected;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectServerInfo Prospect_Info;  // 0x0340, size 0x1B0, named "Prospect Info"
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_AcceptClaimProspect;  // 0x04F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMissionDifficulty CachedDifficulty;  // 0x04F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOperationClosed OperationClosed;  // 0x0500, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ChoiceProspects;  // 0x0510, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IncorrectProspect;  // 0x0528, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString RequiredDLCText;  // 0x0530, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTalentsRowHandle Talent;  // 0x0540, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Faction_Mission;  // 0x0558, size 0x18, named "Faction Mission"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsLocked;  // 0x0570, size 0x1

    UFUNCTION() void BndEvt__UMG_GreatHunt_MissionSelected_AbandonOperation_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_MissionBoardProspectSelected_StartOperation_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CancelProspectSelect();
    UFUNCTION(BlueprintCallable) void CancelQuest();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_GreatHunt_MissionSelected(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSelectedProspectInfo(FProspectServerInfo& Prospect_Info);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void HideBeginOperations(bool Hide);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void IsCurrentMission(FTalentsRowHandle Talent, bool& IsCurrentMission);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void Nothing();
    UFUNCTION(BlueprintCallable) void OnFlagUpdated();
    UFUNCTION(BlueprintCallable) void OperationClosed__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OperationSelected__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void RefreshSelectedButton(bool Disabled, FTalentsRowHandle Talent);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void Select_Hover_Text(FTalentsRowHandle Talent, bool IsLocked);  // parameters 0x19, named "Select Hover Text"
    UFUNCTION(BlueprintCallable) void SelectProspect();
    UFUNCTION(BlueprintCallable) void SetActiveButton();
    UFUNCTION(BlueprintCallable) void ShowHuntOverview(bool bVisibility, FTalentArchetypesRowHandle Archetype);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void ShowSelectedProspect(FProspectServerInfo Prospect, bool Active, bool IsLocked, FTalentsRowHandle Talent);  // parameters 0x1CC
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateOutcomes();
    UFUNCTION(BlueprintCallable) void UpdateRewards();
};
