// /Game/UI/UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C
// Derives from: UUMG_UserInterface_Base_C > UUserInterfaceBase > UUserWidget > UWidget > UVisual > UObject
// size 0x650, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_UserInterfaceSpace_C : public UUMG_UserInterface_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ConfirmationOverlay;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* ConfirmationSizeBox;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* CursorItemSize;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* CursorScaleBox;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* CustomPopupLayer;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCanvasPanel* Debug;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ErrorCodeBox;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* ErrorCodeScaleBox;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* FullScreenPopupScaleBox;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* FullScreenPopupSlot;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* GameVersionNumber;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* HUDUnreadNotificationIcon;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* JoiningGameScaleBox;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* LoadingScreenScaleBox;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Loadout;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* LoadoutConfirmationBox;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* LoadoutOverlay;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* MainDisplayScaleBox;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* MenuNotificationButton;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Menus;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* ProspectSumarySwitcher;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ProspectSummary;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* RadialScaleBox;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URetainerBox* RetainerBox_0;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* TABhint;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Target;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* TemporaryMouseWidget;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterInitialization_C* UMG_CharacterInitialization;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Chatbox_C* UMG_Chatbox;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ClientLogging_C* UMG_ClientLogging;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ConfirmationPopup_C* UMG_ConfirmationPopup;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CursorWidget_C* UMG_CursorWidget;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ErrorCodeDisplay_C* UMG_ErrorCodeDisplay;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_EscapeMenu_C* UMG_EscapeMenu;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InteractionPrompt_C* UMG_InteractionPrompt;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IntroTips_Space_C* UMG_IntroTips_Space;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Inventory_C* UMG_Inventory;  // 0x04E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_JoiningGame_C* UMG_JoiningGame;  // 0x04F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadingScreen_C* UMG_LoadingScreen;  // 0x04F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_LoadoutSelection_C* UMG_LoadoutSelection;  // 0x0500, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MainMenu_Space_C* UMG_MainMenu_Space;  // 0x0508, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Party_C* UMG_Party;  // 0x0510, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Target_C* UMG_Target;  // 0x0518, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UW_ProjectionInterface_C* W_ProjectionInterface;  // 0x0520, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerControllerSpace_C* PlayerController;  // 0x0528, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUserWidget* CurrentDynamicWidget;  // 0x0530, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool VerboseStatDebugging;  // 0x0538, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* CurvedHudDynMat;  // 0x0540, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator LastViewRot;  // 0x0548, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector DeltaRotation;  // 0x0554, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScreenWarpAmount;  // 0x0560, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* SwayHudDynMat;  // 0x0568, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ScreenSwayAmount;  // 0x0570, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CADistance;  // 0x0574, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CASteps;  // 0x0578, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PendingProspectReward;  // 0x057C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FResGetLastProspect ProspectReward;  // 0x0580, size 0xB0
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_PasswordInput_C* PasswordInput;  // 0x0630, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString InviteServerPassword;  // 0x0638, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUserWidget* CurrentPopup;  // 0x0648, size 0x8

    UFUNCTION() void BndEvt__UMG_UserInterfaceSpace_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_0_ConfirmLoadout__DelegateSignature(FPlayerLoadoutData Loadout);  // parameters 0x3E0
    UFUNCTION() void BndEvt__UMG_UserInterfaceSpace_UMG_LoadoutSelection_K2Node_ComponentBoundEvent_1_Back__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CancelPassword();
    UFUNCTION(BlueprintCallable) void CheckForProspectRewards();
    UFUNCTION(BlueprintCallable) void ClearPendingLoadout();
    UFUNCTION(BlueprintCallable) void ConfirmPassword();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DoNothing_Confirmation();
    UFUNCTION(BlueprintCallable) void EscapeKeyPressed();
    UFUNCTION() void ExecuteUbergraph_UMG_UserInterfaceSpace(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusDynamicWidget(UUserWidget* DynamicWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void FocusStaticWidget(TEnumAsByte<EStaticUIWidgets> Panel);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetCheatContext(TEnumAsByte<ECheatContext>& Context);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetConfirmationOverlay(UOverlay*& Overlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetConfirmationWindow(UUMG_ConfirmationPopup_C*& ConfirmationWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCursorWidget(UUMG_CursorWidget_C*& CursorWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFullscreenPopupSlot(UNamedSlot*& NamedPopupSlot);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetIcarusLogWindow(UUMG_ClientLogging_C*& LogWindow);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UW_ProjectionInterface_C* GetProjectionInterface();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HideErrorCode();
    UFUNCTION(BlueprintCallable) void HideLoadingScreen();
    UFUNCTION(BlueprintCallable) void HidePanelDisplay();
    UFUNCTION(BlueprintCallable) void HideProspectSummary();
    UFUNCTION(BlueprintCallable) void HideStaticWidgets();
    UFUNCTION(BlueprintCallable) void Initialise(ABP_IcarusPlayerControllerSpace_C* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void InitialiseHandInventory();
    UFUNCTION(BlueprintCallable) void IsMenuVisible_0(bool& Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsSpace_(bool& InSpace);  // parameters 0x1, named "IsSpace?"
    UFUNCTION(BlueprintCallable) void JoinSessionInvitedSession();
    UFUNCTION(BlueprintCallable) void OnCharacterSelected();
    UFUNCTION(BlueprintCallable) void OnConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void OnItemAdded_Event_0(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnItemRemoved_Event_0(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable) void OnSessionInviteAccepted(FIcarusSession IcarusSession);  // parameters 0x1C0
    UFUNCTION(BlueprintCallable) void PasswordCheck();
    UFUNCTION(BlueprintCallable) void RemoveCustomPopup(UUserWidget* PopupWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Reset();
    UFUNCTION(BlueprintCallable) void SetHUDVisibility(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPendingLoadout(FPlayerLoadoutData Loadout);  // parameters 0x3E0
    UFUNCTION(BlueprintCallable) void ShowCustomPopup(UUserWidget* PopupWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ShowErrorCode(FErrorCodesEnum ErrorCode, FString ErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ShowEscapeMenu();
    UFUNCTION(BlueprintCallable) void ShowLoadingScreen(FText Optional_Message, UWidget* OptionalWidget);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ShowMailbox();
    UFUNCTION(BlueprintCallable) void ShowMainMenu(TEnumAsByte<ESpaceMainMenuOptions> Option, bool& Success);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void ShowMissionSummary(FNotification Notification, bool ShowCloseButton);  // parameters 0x79
    UFUNCTION(BlueprintCallable) void ShowTipsMenu();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Toggle_Inventory();  // named "Toggle Inventory"
    UFUNCTION(BlueprintCallable) void ToggleEscapeMenu();
    UFUNCTION(BlueprintCallable) void UpdateFrameGeneration();
    UFUNCTION(BlueprintCallable) void UpdateMissionSummaryVisibility();
    UFUNCTION(BlueprintCallable) void UpdatePlayerHighlighting(bool Active);  // parameters 0x1
};
