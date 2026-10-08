// /Game/UI/Hab/DropTerminal/UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0xB98, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_PlanetProspectSelected_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowMain;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* SwitchAnimation;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenAnimation;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* Button_CustomGameSettings;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CannotJoinWarning;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ClaimProspectButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ColourCornerInsurance;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_1;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_2;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_3;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CornerColourHardcore;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Currency;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_2;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_3;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_4;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_5;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DaysText;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DescriptionText;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DifficultyTitle;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider1;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider1_1;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FlavourText;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* gradient;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* HardcoreBG;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Checkbox_C* HardcoreCheck;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HardcoreHelperText;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HardcoreMissionOverlay;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HardcoreTitle;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* HostProspectButton;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Hours;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_140;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_218;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_335;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* InsuranceBG;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Checkbox_C* InsuranceCheck;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* InsuranceHelperText;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* InsuranceTitle;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* JoinHostButtons;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* JoinProspectButton;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Loadout;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LoadoutOverlay;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LobbyBorder;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LowTimeWarningIcon;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Main;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* MaxAssignedError;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* MaxPlayersError;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* menupattern;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Minutes;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MissionDuration;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MissionSettings;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MoreRewards_Hardcore;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MoreRewards_Insurance;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* PlayerList;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ProspectTexture;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Rewards;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Seconds;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* SettingsOverlay;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* SettleLoading;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* SettleProspectButton;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TimeBorder;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TimeColourBorder;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Trim1;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Trim2;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DifficultySelect_C* UMG_DifficultySelect;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadoutSelection_C* UMG_LoadoutSelection;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionDifficulty_C* UMG_MissionDifficulty;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionSpecialRewards_C* UMG_MissionSpecialRewards;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerListEntry_C* UMG_PlayerListEntry;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerListEntry_C* UMG_PlayerListEntry_1;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerListEntry_C* UMG_PlayerListEntry_2;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerListEntry_C* UMG_PlayerListEntry_3;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerListEntry_C* UMG_PlayerListEntry_4;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerListEntry_C* UMG_PlayerListEntry_5;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerListEntry_C* UMG_PlayerListEntry_6;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerListEntry_C* UMG_PlayerListEntry_7;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectObjectiveList_C* UMG_ProspectObjectiveList;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge_1;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WorldStats;  // 0x0510, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FStartSelectedProspect StartSelectedProspect;  // 0x0518, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ProspectPin_C* SelectedProspectPin;  // 0x0528, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Settled;  // 0x0530, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectServerInfo Prospect_Info;  // 0x0538, size 0x1B0, named "Prospect Info"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FHostProspect HostProspect;  // 0x06E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClaimProspect ClaimProspect;  // 0x06F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FJoinProspect JoinProspect;  // 0x0708, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* Close_Button;  // 0x0718, size 0x8, named "Close Button"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSettleProspect SettleProspect;  // 0x0720, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Claim;  // 0x0730, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FShowCloseButton ShowCloseButton;  // 0x0738, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_AcceptClaimProspect;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HardcoreFlag;  // 0x0750, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMissionDifficulty CachedDifficulty;  // 0x0751, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMissionDifficulty LockedInDifficulty;  // 0x0752, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPlayerLoadoutData PendingLoadout;  // 0x0758, size 0x3E0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<EMissionDifficulty> ValidDifficulties;  // 0x0B38, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_TerrainButtonPromptContents_C* DifficultyWarningPromptContents;  // 0x0B48, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccountFlagsRowHandle LevelBoostAccountFlag;  // 0x0B50, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LevelBoostTo;  // 0x0B68, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DifficultyWarningPrompt;  // 0x0B70, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCustomGameSetting> CustomSettings;  // 0x0B88, size 0x10

    UFUNCTION(BlueprintCallable) void AcceptClaim();
    UFUNCTION() void BndEvt__ClaimProspectButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__EndProspectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__HostProspectButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__JoinProspectButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PlanetProspectSelected_Button_CustomGameSettings_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_PlanetProspectSelected_UMG_DifficultySelect_K2Node_ComponentBoundEvent_6_DifficultyUpdated__DelegateSignature(EMissionDifficulty Difficulty);  // parameters 0x1
    UFUNCTION() void BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_4_ConfirmLoadout__DelegateSignature(FPlayerLoadoutData Loadout);  // parameters 0x3E0
    UFUNCTION() void BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_5_Back__DelegateSignature();
    UFUNCTION(BlueprintCallable) void BoostButtonClicked();
    UFUNCTION(BlueprintCallable) void CancelWarningPrompt();
    UFUNCTION(BlueprintCallable) void ClaimProspect__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void ClearPendingLoadout();
    UFUNCTION(BlueprintCallable) void CompleteJoinProspect();
    UFUNCTION(BlueprintCallable) void ConfirmWarningPrompt();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_PlanetProspectSelected(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSelectedProspectInfo(FProspectServerInfo& Prospect_Info);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void GrantLevelBoost();
    UFUNCTION(BlueprintCallable) void HardcoreCheckboxUpdated(bool Checked, bool WasForced);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void HostProspect__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void Initialise(UUMG_CloseButton_2_C* CloseButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void InsuranceCheckboxUpdated(bool Checked, bool WasForced);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void JoinProspect__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void Join_ShowLoadoutSelection();
    UFUNCTION(BlueprintCallable) void Join_TryShowDifficultyWarning();
    UFUNCTION(BlueprintCallable) void ManuallyUpdateDifficulty(EMissionDifficulty CachedDifficulty);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnCustomSettingsUpdated(TArray<FCustomGameSetting>& NewSettingValues);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFailure_39B8951B40750D4BA0F6A8BA5082E1DC(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnFailure_6A3406D34D6989803C8B84813F106342(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable) void OnLobbyPrivacyChanged();
    UFUNCTION(BlueprintCallable) void OnSuccess_39B8951B40750D4BA0F6A8BA5082E1DC(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnSuccess_6A3406D34D6989803C8B84813F106342(FErrorCodesEnum Result, FString ExtraErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ReadyCheck();
    UFUNCTION(BlueprintCallable) void RejectClaim();
    UFUNCTION(BlueprintCallable) void SetMultiplayerState(FProspectServerInfo Prospect);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void SetPendingLoadout(const FPlayerLoadoutData& PendingLoadoutData);  // parameters 0x3E0
    UFUNCTION(BlueprintCallable) void SetTime(TArray<FString>& Time);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SettleProspectResultHandler(bool Success, const FProspectInfo& ProspectInfo);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void SettleProspect__DelegateSignature(FProspectServerInfo Prospect_Info, bool Settle);  // parameters 0x1B1
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldShowLevelBoostPrompt(bool& Show);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldShowWarningMessage(bool& Show);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowCloseButton__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ShowSelectedProspect(FProspectServerInfo Prospect, bool Active, bool SkipAnimation);  // parameters 0x1B2
    UFUNCTION(BlueprintCallable) void StartSelectedProspect__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateCompletionText(FFactionMissionsRowHandle RowHandle);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdatePlayerList();
    UFUNCTION(BlueprintCallable) void UpdateRewards();
    UFUNCTION(BlueprintCallable) void UpdateSettleButton(FProspectInfo ServerInfo);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) void UpdateWorldStats();
    UFUNCTION(BlueprintCallable) void ValidateCustomGameSettings();
};
