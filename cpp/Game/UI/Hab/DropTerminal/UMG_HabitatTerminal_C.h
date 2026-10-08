// /Game/UI/Hab/DropTerminal/UMG_HabitatTerminal.UMG_HabitatTerminal_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x5F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_HabitatTerminal_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BackButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* BrowserSwitcher;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* Cancel;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_HostProspectsList_C* DedicatedServerBrowser;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Loading;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* OpenProspectCloseButton;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OpenProspectOverlay;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_OpenProspectWindow_C* OpenProspectScreen;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* OutpostMenuSlot;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PlanetImageBG;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* PlanetView;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* PlanetViewButton;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* ProspectMenuSlot;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ProspectServerBrowser;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* ProspectTypeSwitcher;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ProviderBox;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ProviderBox2;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* Refresh;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* SelectedOutpostCloseButton;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SelectedOutpostOverlay;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_OutpostSelected_C* SelectedOutpostScreen;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* SelectedProspectCloseButton;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SelectedProspectOverlay;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlanetProspectSelected_C* SelectedProspectScreen;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_HostProspectsList_C* ServerBrowser;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ServerBrowserButton;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* Switcher;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCircularThrobber* ThrobberRefresh;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* UMG_LoadingIcon;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MultiToggle_C* UMG_MultiToggle;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlanetProspectView_C* UMG_PlanetProspectView;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RevisionNumber_C* UMG_RevisionNumber;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProspectsUpdated ProspectsUpdated;  // 0x0388, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectServerInfo Working_Prospect_Info;  // 0x0398, size 0x1B0, named "Working Prospect Info"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UFMODEvent*> BriefingAudio;  // 0x0548, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODEventInstance BriefingAudioEvent;  // 0x0558, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCloseTerminal CloseTerminal;  // 0x0560, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_OpenProspectWindow_C* OpenProspectWindow;  // 0x0570, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_PasswordInput_C* PasswordInput;  // 0x0578, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_OpenWorldSelection_C* OpenWorldSelectionWindow;  // 0x0580, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString GPortalLink;  // 0x0588, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString NitradoLink;  // 0x0598, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString SurvivalLink;  // 0x05A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString StreamlineLink;  // 0x05B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FString> ProviderLinks;  // 0x05C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UTexture2D*> ProviderImages;  // 0x05D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TEnumAsByte<EStretch>> In_Stretch;  // 0x05E8, size 0x10, named "In Stretch"

    UFUNCTION(BlueprintCallable) void BackButtonClicked();
    UFUNCTION() void BndEvt__PlanetViewButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__Refresh_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__ServerBrowserButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_HabitatTerminal_BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_HabitatTerminal_Cancel_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_HabitatTerminal_UMG_MultiToggle_K2Node_ComponentBoundEvent_3_MultiToggleStateChanged__DelegateSignature(int32 PreviousToggleIndex, int32 CurrentToggleIndex);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CancelPassword();
    UFUNCTION(BlueprintCallable) void ClaimAndLaunchProspect(FProspectServerInfo Prospect_Info);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void CloseResumeProspect();
    UFUNCTION(BlueprintCallable) void CloseTerminal__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ConfirmPassword();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FProspectServerInfo> ConvertDedicatedServerSessions(TArray<FBlueprintSessionResult>& Sessions);  // parameters 0x20
    UFUNCTION() void ExecuteUbergraph_UMG_HabitatTerminal(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HideCloseButton(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void JoinProspect(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void Log(FString Description);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnOpened();
    UFUNCTION(BlueprintCallable) void OpenWorldProspectSelected(FProspectListRowHandle Prospect);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Opened();
    UFUNCTION(BlueprintCallable) void OptionAClicked();
    UFUNCTION(BlueprintCallable) void OptionBClicked_Event();
    UFUNCTION(BlueprintCallable) void OutpostClosed();
    UFUNCTION(BlueprintCallable) void OutpostModelViewChanged(UTalentControllerComponent* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OutpostSelected(FProspectServerInfo Prospect, bool Active);  // parameters 0x1B1
    UFUNCTION(BlueprintCallable) void PasswordCheck();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ProspectClosed();
    UFUNCTION(BlueprintCallable) void ProspectModelViewChanged(UTalentControllerComponent* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ProspectSelected(FProspectServerInfo Prospect, bool Active);  // parameters 0x1B1
    UFUNCTION(BlueprintCallable) void ProspectsUpdated__DelegateSignature();
    UFUNCTION(BlueprintCallable) void ResetOpenProspectOverlay();
    UFUNCTION(BlueprintCallable) bool ResetProspectView();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ReturnToTopLevel();
    UFUNCTION(BlueprintCallable) void ServerProviderSetup();
    UFUNCTION(BlueprintCallable) void SetupProspectTalentScreen();
    UFUNCTION(BlueprintCallable) void ShowCloseButton_Event_0();
    UFUNCTION(BlueprintCallable) void ShowOutpostCloseButton(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SwitchToHost();
    UFUNCTION(BlueprintCallable) void SwitchToHostOpenWorld();
    UFUNCTION(BlueprintCallable) void SwitchToHostOutpost();
    UFUNCTION(BlueprintCallable) void SwitchToJoin();
    UFUNCTION(BlueprintCallable) void SwitchToResumeProspect();
    UFUNCTION(BlueprintCallable) void TalentOutpostSelected(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void TalentProspectSelected(FProspectServerInfo ProspectInfo, FText Error);  // parameters 0x1C8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateMatchmakingState(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateRefreshButtonState();
};
