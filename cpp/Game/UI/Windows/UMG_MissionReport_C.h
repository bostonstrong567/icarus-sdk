// /Game/UI/Windows/UMG_MissionReport.UMG_MissionReport_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x568, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionReport_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* RewardAnimation;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeIn;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* BadgeScrollbox;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DifficultyModifiers_C* BaseReward;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ContinueButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Currency;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* CurrencyRewards;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DifficultyModifiers_C* Difficulty;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_1;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_2;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_3;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_4;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_5;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_6;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_7;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Error;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionUnlockReward_C* ExoticUnlocks;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* FactionMissionList;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* FailedGradient;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Frame;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DifficultyModifiers_C* Hardcore;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DifficultyModifiers_C* Insurance;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LoadingScreen;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MissionRewards;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NoRewards;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* PlayerList;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectTitle;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* RewardsBorder;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionUnlockReward_C* RewardUnlocks;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* RibbonsScrollbox;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* SpecialUnlocks;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DifficultyModifiers_C* Subtotal;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* Switcher;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* titledetail_1;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* titledetail_2;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* UMG_LoadingIcon;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompleteFaction_C* UMG_MissionCompleteFaction;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionTimer_C* UMG_MissionTimer;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge_1;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo Prospect_Info;  // 0x03B8, size 0xA0, named "Prospect Info"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAttachment Current_Rewards;  // 0x0458, size 0x28, named "Current Rewards"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_AccoladeMissionProgress_C*> RibbonAccolades;  // 0x0480, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_AccoladeMissionProgress_C*> BadgeAccolades;  // 0x0490, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Mission_Complete;  // 0x04A0, size 0x1, named "Mission Complete"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMissionReport Report;  // 0x04A8, size 0xC0

    UFUNCTION(BlueprintCallable) void AddAccoladeToList(FAccoladesRowHandle Accolade, bool Complete);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void AnimateCompletedAccolades();
    UFUNCTION() void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Close();
    UFUNCTION() void ExecuteUbergraph_UMG_MissionReport(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitAccoladeList();
    UFUNCTION(BlueprintCallable) void Setup();
    UFUNCTION(BlueprintCallable) void Show();
    UFUNCTION(BlueprintCallable) void ShowNoReport();
    UFUNCTION(BlueprintCallable) void ShowReport(FMissionReport Report);  // parameters 0xC0
    UFUNCTION(BlueprintCallable) void UpdateRewards();
};
