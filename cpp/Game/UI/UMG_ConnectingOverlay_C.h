// /Game/UI/UMG_ConnectingOverlay.UMG_ConnectingOverlay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x508, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ConnectingOverlay_C : public UUserWidget, public IDynamicWidgetInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowDLCBadges;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* DoubleXPFadeIn;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowDHPurchaseButton;  // 0x0278, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowCompetitionPanel;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* HideConnectingPrompt;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowSidePanel;  // 0x0290, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowAnnouncementPanel;  // 0x0298, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowMenuButtons;  // 0x02A0, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* FadeOut;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AnnouncementBlack;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* AnnouncementScreenCloseButton;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_PurchaseDH;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ButtonCredits;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ButtonDemo;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ButtonExit;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ButtonOffline;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ButtonPlay;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ButtonSettings;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ConnectingHbox;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ConnectingPromptBorder;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ConnectingSteam;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ExternalTitleButton_C* Discord;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ExternalTitleButton_C* Feedback;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* FrontLayer;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Logo;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Logo_DH;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* MainButtonVertBox;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* PakMeta;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* PakMetaCopy;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InfoHover_C* PakMetaHover;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PakMetaImage;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* PakMetaMessage;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ExternalTitleButton_C* PatchNotes;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* person;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ShowRoadmapButton;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* smoke;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SpaceFiller;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* SteamLocalAdmin;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_PurchaseDH;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_RetryStatus;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_Status;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_AnnouncementPanel_C* UMG_AnnouncementPanel;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CreditsPage_C* UMG_CreditsPage_C_2;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CriticalMassTrailer_Button_C* UMG_CriticalMassTrailer_Button;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DLCBadgeContainer_C* UMG_DLCBadgeContainer;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DoubleXPEvent_C* UMG_DoubleXPEvent;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FatalSkyTrailerButton_C* UMG_FatalSkyTrailerButton;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LatestPatchNotesButton_C* UMG_LatestPatchNotesButton;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingIcon_C* UMG_LoadingIcon;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SeekerTrailerButton_C* UMG_SeekerTrailerButton;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SettingsMenu_C* UMG_SettingsMenu;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TitleScreenTrailerButton_C* UMG_TitleScreenTrailerButton;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UIcarusMessageListeners* IcarusMessageListener;  // 0x0410, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText RetryStatusFormat;  // 0x0418, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ContentServerConnectionComplete;  // 0x0430, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UOfflineAccountMigrator* OfflineAccountMigratorTest;  // 0x0438, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterface_TitleScreen_C* UserInterfaceRef;  // 0x0440, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString MigrationFailureMsg;  // 0x0448, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ForceDataMigration;  // 0x0458, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPakMetaDetail PakMetaDetail;  // 0x0460, size 0xA8

    UFUNCTION() void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonOffline_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__ShowRoadmapButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ConnectingOverlay_ButtonCredits_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_ConnectingOverlay_ButtonDemo_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_ConnectingOverlay_Button_PurchaseDH_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ConnectingOverlay_Button_PurchaseDH_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ConnectingOverlay_Discord_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ConnectingOverlay_Feedback_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ConnectingOverlay_PakMetaCopy_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ConnectingOverlay_PatchNotes_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CheckIfConnectionFinished();
    UFUNCTION(BlueprintCallable) void CheckPakMeta();
    UFUNCTION(BlueprintCallable) void CloseCredits(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CloseSettings(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DoNothing();
    UFUNCTION(BlueprintCallable) void DoNothing2();
    UFUNCTION(BlueprintCallable) void EscapeKeyPressed();
    UFUNCTION() void ExecuteUbergraph_UMG_ConnectingOverlay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finished_E78F06674F46BAE2FA5469B944A0976A();
    UFUNCTION(BlueprintCallable) void FrameGenerationUpdated(bool Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetOwnedPackageIds();
    UFUNCTION(BlueprintCallable) void GetPakMetaLongMessage(FPakMetaDetail PakDetail, FText& MessageOut);  // parameters 0xC0
    UFUNCTION(BlueprintCallable) void GetPakMetaShortMessage(FPakMetaDetail PakDetail, FText& OutMessage);  // parameters 0xC0
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void IsEscapeMenuDisabled(bool& Disabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Log(FString Description);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void LoginFailed(ELoginFailure ErrorCode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void MoveToCharacterSelection();
    UFUNCTION(BlueprintCallable) void OnConnectMessageEvent(bool bSuccess);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnContentServerConnectionSuccess();
    UFUNCTION(BlueprintCallable) void OnFail_2E20AAC94911EA94788DB58E9DB4C4EF(const FResGetUserProfile& Response);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void OnFail_721D4B3242A6C8BE1C7381BDBF55A696(const FResGetUserProfile& Response);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void OnSuccess_2E20AAC94911EA94788DB58E9DB4C4EF(const FResGetUserProfile& Response);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void OnSuccess_721D4B3242A6C8BE1C7381BDBF55A696(const FResGetUserProfile& Response);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void QuitGame();
    UFUNCTION(BlueprintCallable) void RetryFetchPackages();
    UFUNCTION(BlueprintCallable) void Show_Pak_Meta_Popup_if_Required();  // named "Show Pak Meta Popup if Required"
    UFUNCTION(BlueprintCallable) void ShowCharacterSelectScreen();
    UFUNCTION(BlueprintCallable) void ShowMigrationError();
    UFUNCTION(BlueprintCallable) void UpdateConnectingProgress();
    UFUNCTION(BlueprintCallable) void UpdateDLSSMode(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Visbility_Changed(ESlateVisibility InVisibility);  // parameters 0x1
};
