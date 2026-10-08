// /Game/UI/Windows/UMG_MissionBoardProspectSelected.UMG_MissionBoardProspectSelected_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x5C8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionBoardProspectSelected_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowMain;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* SwitchAnimation;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenAnimation;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BeginOperation;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* Cancel;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Currency;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_2;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_3;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_4;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_5;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DaysText;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DescriptionText;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DifficultyTitle;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider1;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider1_1;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FlavourText;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* gradient;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Hours;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_140;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LowTimeWarningIcon;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Main;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* menupattern;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Minutes;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* MissionDevice;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MissionDuration;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MissionSettings;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ProspectTexture;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Rewards;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Seconds;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* StartError;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TimeBorder;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TimeColourBorder;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Trim2;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* TypesBox;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DifficultySelect_C* UMG_DifficultySelect;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionDifficulty_C* UMG_MissionDifficulty;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionSpecialRewards_C* UMG_MissionSpecialRewards;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionType_C* UMG_MissionType;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectObjectiveList_C* UMG_ProspectObjectiveList;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WorldStats;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOperationSelected OperationSelected;  // 0x03B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectServerInfo Prospect_Info;  // 0x03C8, size 0x1B0, named "Prospect Info"
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_AcceptClaimProspect;  // 0x0578, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMissionDifficulty CachedDifficulty;  // 0x0580, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOperationClosed OperationClosed;  // 0x0588, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectListRowHandle Prospect;  // 0x0598, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle Faction_Mission;  // 0x05B0, size 0x18, named "Faction Mission"

    UFUNCTION() void BndEvt__UMG_MissionBoardProspectSelected_CancelOperation_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_MissionBoardProspectSelected_StartOperation_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PlanetProspectSelected_UMG_DifficultySelect_K2Node_ComponentBoundEvent_6_DifficultyUpdated__DelegateSignature(EMissionDifficulty Difficulty);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MissionBoardProspectSelected(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSelectedProspectInfo(FProspectServerInfo& Prospect_Info);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void ManuallyUpdateDifficulty(EMissionDifficulty CachedDifficulty);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OperationClosed__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OperationSelected__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void SetTime(TArray<FString>& Time);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ShowSelectedProspect(FProspectServerInfo Prospect, FText StartError);  // parameters 0x1C8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateRewards();
    UFUNCTION(BlueprintCallable) void UpdateSpecialRewards();
    UFUNCTION(BlueprintCallable) void UpdateWorldStats();
};
