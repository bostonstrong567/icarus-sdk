// /Game/UI/Hab/DropTerminal/UMG_OpenProspectWindow.UMG_OpenProspectWindow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x658, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_OpenProspectWindow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowMain;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* SwitchAnimation;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenAnimation;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_1;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner_3;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CornerColourHardcore;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Currency;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_2;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_3;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_4;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Days_5;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DaysText;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* DeleteProspectButton;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DescriptionText;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider1;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider1_1;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FlavourText;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* HardcoreBG;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Checkbox_C* HardcoreCheck;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HardcoreHelperText;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* HardcoreMissionOverlay;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HardcoreTitle;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HostDetailsRow;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCircularThrobber* HostDetailsThrobber;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* HostIcon;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* HostInfoPanel;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* HostName;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Hours;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* LaunchProspectButton;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Loadout;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LowTimeWarningIcon;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Main;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* menupattern;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Minutes;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MissionDuration;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Modifiers;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MoreRewards_Hardcore;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* NoLoadout;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NoMissionRewards;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NoMissionTimer;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* PlayerList;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PlayerListContainer;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ProspectList;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ProspectTexture;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Rewards;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SaveName;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Seconds;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* SettleLoading;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_NotAssociated;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Time;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TimeAndRewards;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TimeBorder;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TimeColourBorder;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Trim1;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Trim2;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DifficultySelect_C* UMG_DifficultySelect;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ItemsOnDrop_C* UMG_ItemsOnDrop;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadoutSelection_C* UMG_LoadoutSelection;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_WorkshopCostLarge_C* UMG_WorkshopCostLarge_1;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WorldStats;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FStartSelectedProspect StartSelectedProspect;  // 0x0468, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Settled;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAssociatedProspectInfo Prospect_Info;  // 0x0480, size 0xD8, named "Prospect Info"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FHostProspect HostProspect;  // 0x0558, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClaimProspect ClaimProspect;  // 0x0568, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FJoinProspect JoinProspect;  // 0x0578, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* Close_Button;  // 0x0588, size 0x8, named "Close Button"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSettleProspect SettleProspect;  // 0x0590, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString SelectedProspectID;  // 0x05A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_AcceptClaimProspect;  // 0x05B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText NewVar_0;  // 0x05B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FExistingOutpostData> ExistingOutpostInfo;  // 0x05D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSelectLoadout SelectLoadout;  // 0x05E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAssociatedProspectInfo> AllAssociatedProspects;  // 0x05F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PendingGetHostId;  // 0x0600, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString LoadingPlayersForProspectId;  // 0x0610, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CurrentLoadingPlayerProspectId;  // 0x0620, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PendingPlayerIds;  // 0x0630, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DidCreateLoadout;  // 0x0640, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FShowBackButton ShowBackButton;  // 0x0648, size 0x10

    UFUNCTION(BlueprintCallable) void AcceptClaim();
    UFUNCTION() void BndEvt__EndProspectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__HostProspectButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CanDeleteProspects(bool& CanDelete);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CancelDelete();
    UFUNCTION(BlueprintCallable) void CancelDeleteStep2();
    UFUNCTION(BlueprintCallable) void CancelRemoteDelete();
    UFUNCTION(BlueprintCallable) void ClaimProspect__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void ClearHostDetails();
    UFUNCTION(BlueprintCallable) void CloseLoadoutPanel();
    UFUNCTION(BlueprintCallable) void ConfirmDelete();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DoDeleteProspect();
    UFUNCTION() void ExecuteUbergraph_UMG_OpenProspectWindow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ExistingProspectButtonClicked(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void FillProspectList(TArray<FAssociatedProspectInfo>& Prospects);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void HostProspect__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void Initialise(UUMG_CloseButton_2_C* CloseButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void JoinProspect__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void LaunchProspect();
    UFUNCTION(BlueprintCallable) void LoadHostDetails(FString HostId);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ManuallyUpdateDifficulty(EMissionDifficulty CachedDifficulty);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void NeedsToCreateLoadout(const FProspectInfo& ProspectInfo, bool& NeedsLoadout);  // parameters 0xA1
    UFUNCTION(BlueprintCallable) void OnFailure_569CEA364899DB2167FFA5AF2DFC2119(FGetIcarusPlayerPersonaResult Result);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnLoadoutBackClicked();
    UFUNCTION(BlueprintCallable) void OnLoadoutConfirmed(FPlayerLoadoutData Loadout);  // parameters 0x3E0
    UFUNCTION(BlueprintCallable) void OnLoadoutSelected();
    UFUNCTION(BlueprintCallable) void OnLobbyPrivacyChanged();
    UFUNCTION(BlueprintCallable) void OnReceiveProspects(const TArray<FAssociatedProspectInfo>& ProspectList);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnServerProspectListUpdated();
    UFUNCTION(BlueprintCallable) void OnSuccess_569CEA364899DB2167FFA5AF2DFC2119(FGetIcarusPlayerPersonaResult Result);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnWindowOpened();
    UFUNCTION(BlueprintCallable) void RejectClaim();
    UFUNCTION(BlueprintCallable) void ResetState();
    UFUNCTION(BlueprintCallable) void SelectLoadout__DelegateSignature();
    UFUNCTION(BlueprintCallable) void SelectProspectInfo(FAssociatedProspectInfo NewProspect);  // parameters 0xD8
    UFUNCTION(BlueprintCallable) void SettleProspect__DelegateSignature(FProspectServerInfo Prospect_Info, bool Settle);  // parameters 0x1B1
    UFUNCTION(BlueprintCallable) void ShowBackButton__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ShowLoadedHostDetails(FText PlayerName, UTexture2D* Avatar);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ShowLoadoutPanel();
    UFUNCTION(BlueprintCallable) void ShowNoProspectsAvailable();
    UFUNCTION(BlueprintCallable) void ShowPrivacySelect();
    UFUNCTION(BlueprintCallable) void ShowTryDeleteRemoteProspectPopup();
    UFUNCTION(BlueprintCallable) void StartSelectedProspect__DelegateSignature();
    UFUNCTION(BlueprintCallable) void UpdatePlayerList();
    UFUNCTION(BlueprintCallable) void UpdateProspectList();
    UFUNCTION(BlueprintCallable) void UpdateRemainingTime();
    UFUNCTION(BlueprintCallable) void UpdateRewards();
    UFUNCTION(BlueprintCallable) void UpdateWorldStats();
};
