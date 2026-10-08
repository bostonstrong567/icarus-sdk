// /Game/UI/UMG_UserInterfaceServer.UMG_UserInterfaceServer_C
// Derives from: UUMG_UserInterface_Base_C > UUserInterfaceBase > UUserWidget > UWidget > UVisual > UObject
// size 0x580, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_UserInterfaceServer_C : public UUMG_UserInterface_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShowNewButtonOptions;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BTN_CloseProspectScreen;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BTN_ReturnToMainMenu;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ConfirmationOverlay;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* ConfirmationSizeBox;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* CursorItemSize;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* CursorScaleBox;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CustomPopupLayer;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* DynamicPanelOverlay;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* FullScreenPopupScaleBox;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* FullScreenPopupSlot;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* GameVersionNumber;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* JoiningGameScaleBox;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* LoadingScreenScaleBox;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LoadoutOverlay;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadoutSelection_C* LoadoutSelection;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* MainDisplayScaleBox;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_C* NewButton;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* NewButtonHoverTrigger;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* NewButtonOptionsBackgroundOverlay;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_C* OpenProspectButton;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* OpenProspectCloseButton;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OpenProspectOverlay;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_OpenProspectWindow_C* OpenProspectWindow;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* OpenWorldCloseButton;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_C* OpenWorldHostButton;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* OpenWorldOverlay;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_C* OutpostButton;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* OutpostViewSlot;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pattern;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_C* ProspectHostButton;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* ProspectViewSlot;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* SelectedOutpostCloseButton;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SelectedOutpostOverlay;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_OutpostSelected_C* SelectedOutpostScreen;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* SelectedProspectCloseButton;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* SelectedProspectOverlay;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlanetProspectSelected_C* SelectedProspectScreen;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Chatbox_C* UMG_Chatbox;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ClientLogging_C* UMG_ClientLogging;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ConfirmationPopup_C* UMG_ConfirmationPopup;  // 0x0510, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CursorWidget_C* UMG_CursorWidget;  // 0x0518, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_JoiningGame_C* UMG_JoiningGame;  // 0x0520, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingScreen_C* UMG_LoadingScreen;  // 0x0528, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_OpenWorldSelection_C* UMG_OpenWorldSelection;  // 0x0530, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Vignette;  // 0x0538, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_ProjectionInterface_C* W_ProjectionInterface;  // 0x0540, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaItem> Meta_Inventory;  // 0x0548, size 0x10, named "Meta Inventory"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaResource> Meta_Resources;  // 0x0558, size 0x10, named "Meta Resources"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUserWidget* CurrentPopup;  // 0x0568, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AreNewButtonOptionsShowing;  // 0x0570, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_TalentView_Prospect_C* CachedTalentViewProspect;  // 0x0578, size 0x8

    UFUNCTION() void BndEvt__UMG_UserInterfaceServer_BTN_CloseProspectScreen_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_UserInterfaceServer_BTN_ReturnToMainMenu_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_UserInterfaceServer_NewButtonHoverTrigger_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_UserInterfaceServer_NewButtonHoverTrigger_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_UserInterfaceServer_OpenProspectButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_UserInterfaceServer_OpenWorldCloseButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_UserInterfaceServer_OpenWorldHostButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_UserInterfaceServer_OutpostButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_UserInterfaceServer_ProspectHostButton_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClaimAndLaunchProspect(FProspectServerInfo Prospect_Info);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void CloseOpenProspectWindow();
    UFUNCTION(BlueprintCallable) void ConfirmLoadoutClicked(FPlayerLoadoutData Loadout);  // parameters 0x3E0
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void EscapeKeyPressed();
    UFUNCTION() void ExecuteUbergraph_UMG_UserInterfaceServer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetConfirmationOverlay(UOverlay*& Overlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetConfirmationWindow(UUMG_ConfirmationPopup_C*& ConfirmationWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCursorWidget(UUMG_CursorWidget_C*& CursorWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFullscreenPopupSlot(UNamedSlot*& NamedPopupSlot);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UW_ProjectionInterface_C* GetProjectionInterface();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HasLaunchProspectPermission(bool& CanLaunch);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void HideCloseButton(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HideLoadingScreen();
    UFUNCTION(BlueprintCallable) void LoadoutBackClicked();
    UFUNCTION(BlueprintCallable) void OnLaunchPermissionChanged(bool bNewPermissionState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnLoadProspect(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable) void OnPrepareProspect(const FProspectInfo& PendingProspect);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) void OnResumeProspectNeedsLoadout();
    UFUNCTION(BlueprintCallable) void OpenWorldBackClicked();
    UFUNCTION(BlueprintCallable) void OpenWorldSelected(FProspectListRowHandle SelectedWorldType);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OutpostClosed();
    UFUNCTION(BlueprintCallable) void OutpostSelected(FProspectServerInfo Prospect, bool Active, bool AllowDropPointSelection);  // parameters 0x1B2
    UFUNCTION(BlueprintCallable) void ProspectClosed();
    UFUNCTION(BlueprintCallable) void ProspectSelected(FProspectServerInfo Prospect, bool Active);  // parameters 0x1B1
    UFUNCTION(BlueprintCallable) void RemoveCustomPopup(UUserWidget* PopupWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Reset();
    UFUNCTION(BlueprintCallable) void SetNewOptionsVisibility(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowCloseButton(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ShowCloseButton_Event_0();
    UFUNCTION(BlueprintCallable) void ShowCustomPopup(UUserWidget* PopupWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ShowLoadingScreen(FText Optional_Message, UWidget* OptionalWidget);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ShowOpenProspectWindow();
    UFUNCTION(BlueprintCallable) void ShowOpenWorldView();
    UFUNCTION(BlueprintCallable) void ShowOutpostCloseButton(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ShowOutpostView();
    UFUNCTION(BlueprintCallable) void ShowProspectView();
    UFUNCTION(BlueprintCallable) void TalentOutpostSelected(FProspectServerInfo ProspectInfo);  // parameters 0x1B0
    UFUNCTION(BlueprintCallable) void TalentProspectSelected(FProspectServerInfo ProspectInfo, FText Error);  // parameters 0x1C8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
