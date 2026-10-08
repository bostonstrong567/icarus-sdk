// /Game/UI/Hab/DropTerminal/UMG_OutpostSelected.UMG_OutpostSelected_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x6A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_OutpostSelected_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowMain;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* SwitchAnimation;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenAnimation;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* Button_CustomGameSettings;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ClaimedWarningPrompt;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* CreateNewOutpostButton;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* DeleteOutpostButton;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* DescriptionText;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* DropPoint_PointButtons;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* DropPointImageOverlay;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* DropPointSelection;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EditIcon;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FlavourText;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* InactiveText;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* LaunchExistingOutpostButton;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Loadout;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LoadoutOverlay;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Main;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* menupattern;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Modifiers;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NameInvalidWarning;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* OutOfBoundsImage;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* OutpostList;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OutpostName;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* OutpostName_1;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OutpostNameBorder;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_DropInformation;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* PlayerList;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PointSelectionTitle;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectClaimedPrompt;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProspectName;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ProspectNameOverlay;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* ProspectNameTextbox;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ProspectTexture;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* SettleLoading;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text_ProspectName;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_ListTitle;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Trim1;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Trim2;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_Back;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DifficultySelect_C* UMG_DifficultySelect;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadoutSelection_C* UMG_LoadoutSelection;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUniformGridPanel* UniformGridPanel_MapTiles;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WorldStats;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FStartSelectedProspect StartSelectedProspect;  // 0x03D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Settled;  // 0x03E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectServerInfo ServerInfo;  // 0x03E8, size 0x1B0
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FHostProspect HostProspect;  // 0x0598, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClaimProspect ClaimProspect;  // 0x05A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FJoinProspect JoinProspect;  // 0x05B8, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* Close_Button;  // 0x05C8, size 0x8, named "Close Button"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSettleProspect SettleProspect;  // 0x05D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString SelectedProspectID;  // 0x05E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_AcceptClaimProspect;  // 0x05F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText NewVar_0;  // 0x05F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMissionDifficulty SelectedDifficulty;  // 0x0610, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FExistingOutpostData> ExistingOutpostInfo;  // 0x0618, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SelectedDropPoint;  // 0x0628, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequireDropPointSelection;  // 0x062C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DropPointSelectionSupported;  // 0x062D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MapTileNum;  // 0x0630, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_DropPointInformation_C* CurrentlySelectedDropGroup;  // 0x0638, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<FString> InUseProspectIds;  // 0x0640, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCustomGameSetting> CustomSettings;  // 0x0690, size 0x10

    UFUNCTION(BlueprintCallable) void AcceptClaim();
    UFUNCTION() void BndEvt__ClaimProspectButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__EndProspectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__HostProspectButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_OutpostSelected_Button_CustomGameSettings_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_OutpostSelected_UMG_BasicButton_Back_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_OutpostSelected_UMG_DifficultySelect_K2Node_ComponentBoundEvent_0_DifficultyUpdated__DelegateSignature(EMissionDifficulty Difficulty);  // parameters 0x1
    UFUNCTION() void BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_4_ConfirmLoadout__DelegateSignature(FPlayerLoadoutData Loadout);  // parameters 0x3E0
    UFUNCTION() void BndEvt__UMG_PlanetProspectSelected_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_5_Back__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CancelDeleteOutpost();
    UFUNCTION(BlueprintCallable) void ClaimAndLaunchProspect();
    UFUNCTION(BlueprintCallable) void ClaimProspect__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void CleanupExistingDropGroupSelection();
    UFUNCTION(BlueprintCallable) void ClearPendingLoadout();
    UFUNCTION(BlueprintCallable) void ConfirmDeleteOutpost();
    UFUNCTION(BlueprintCallable) void ConfirmOutpostClaim();
    UFUNCTION(BlueprintCallable) void ConfirmSelectedDropPoint();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_OutpostSelected(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ExistingOutpostButtonClicked(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HostProspect__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void Initialise(UUMG_CloseButton_2_C* CloseButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void InitialiseDropPointUI(FTerrainsRowHandle Terrain);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void JoinProspect__DelegateSignature(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void ManuallyUpdateDifficulty(EMissionDifficulty CachedDifficulty);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void NewOutpostButtonClicked(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnCustomSettingsUpdated(TArray<FCustomGameSetting>& NewSettingValues);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnLobbyPrivacyChanged();
    UFUNCTION(BlueprintCallable) FString OnNameChanged(const FText& InText);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnOutpostDropPointSelected(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnReceiveProspects(const TArray<FAssociatedProspectInfo>& ProspectList);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OutpostNameIsValid(bool& Valid);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OutpostNameTextChanged(const FText& Text);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OutpostNameTextCommitted(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void ReadyCheck();
    UFUNCTION(BlueprintCallable) void RefreshExistingOutpostNames();
    UFUNCTION(BlueprintCallable) void RefreshOutpostList();
    UFUNCTION(BlueprintCallable) void RejectClaim();
    UFUNCTION(BlueprintCallable) void RequestUpdateProspectsList();
    UFUNCTION(BlueprintCallable) void ResetSelectedOutpostButtons();
    UFUNCTION(BlueprintCallable) void SetOutpostDropPoint(int32 DropPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPendingLoadout(const FPlayerLoadoutData& PendingLoadoutData);  // parameters 0x3E0
    UFUNCTION(BlueprintCallable) void SettleProspect__DelegateSignature(FProspectServerInfo Prospect_Info, bool Settle);  // parameters 0x1B1
    UFUNCTION(BlueprintCallable) void ShowSelectedOutpostType(FProspectServerInfo Prospect, bool Active);  // parameters 0x1B1
    UFUNCTION(BlueprintCallable) void StartSelectedProspect__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdatePlayerList();
    UFUNCTION(BlueprintCallable) void UpdateProspectInfoToSelection();
    UFUNCTION(BlueprintCallable) void UpdateWorldStats();
    UFUNCTION(BlueprintCallable, BlueprintPure) void WorldSpaceToMapCanvasSpace(FVector InWorldLocation, FVector2D& OutWidgetLocation) const;  // parameters 0x14
};
