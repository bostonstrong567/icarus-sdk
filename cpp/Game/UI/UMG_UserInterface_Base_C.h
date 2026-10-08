// /Game/UI/UMG_UserInterface_Base.UMG_UserInterface_Base_C
// Derives from: UUserInterfaceBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3C0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_UserInterface_Base_C : public UUserInterfaceBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FKey, StaticWidget> StaticWidgets;  // 0x0268, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FKey, bool> ImportantKeys;  // 0x02B8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<EModifierKeys>, FModifierKeyValues> ModifierKeys;  // 0x0308, size 0x50
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UWidget* FocusedWidget;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusWidget* OldFocusedWidget;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_CheatOverlay_C* CheatOverlay;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CreatedCheatOverlay;  // 0x0370, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnHidePanelDisplay OnHidePanelDisplay;  // 0x0378, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnMenuOpened OnMenuOpened;  // 0x0388, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HiddenByUser;  // 0x0398, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnDynamicWidgetDisplayed OnDynamicWidgetDisplayed;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnEscapeMenuOpened OnEscapeMenuOpened;  // 0x03B0, size 0x10

    UFUNCTION(BlueprintCallable) void AddRadialMenu(UUserWidget* RadialMenu);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClearModifierKeys();
    UFUNCTION(BlueprintCallable) void CollapseIcarusLogVisibilty();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void CreateCheatOverlay();
    UFUNCTION(BlueprintImplementableEvent) void DisplayIcarusError(FErrorCodesEnum OutgoingError, FString ErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ErrorRequested(FErrorCodesEnum ErrorCode);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void EscapeKeyPressed();
    UFUNCTION() void ExecuteUbergraph_UMG_UserInterface_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FixFocus();
    UFUNCTION(BlueprintCallable) void FocusStaticWidget(TEnumAsByte<EStaticUIWidgets> Panel);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetCheatContext(TEnumAsByte<ECheatContext>& Context);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCheatOverlay(UUMG_CheatOverlay_C*& Overlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetConfirmationOverlay(UOverlay*& Overlay);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UConfirmationPopupBase* GetConfirmationPopup();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetConfirmationWindow(UUMG_ConfirmationPopup_C*& ConfirmationWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCursorWidget(UUMG_CursorWidget_C*& CursorWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetDialogue(UUMG_Dialogue_C*& Dialogue);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFullscreenPopupSlot(UNamedSlot*& NamedPopupSlot);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetIcarusLogWindow(UUMG_ClientLogging_C*& LogWindow);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetMap(UIcarusMapScreenBase*& Radar);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetMaxProjectionWidgets(int32& MaxProjectionWidgetCount);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UW_ProjectionInterface_C* GetProjectionInterface();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetSize(FVector2D& Size);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HideErrorCode();
    UFUNCTION(BlueprintCallable) void HideLoadingScreen();
    UFUNCTION(BlueprintCallable) void HidePanelDisplay();
    UFUNCTION(BlueprintCallable) void InputTypeApplied(EInputTypeSetting Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void IsKeyDown(TEnumAsByte<EModifierKeys> Key, bool& KeyHeld);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void IsMenuVisible(bool& Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsShowingRadialMenu(bool& ShowingRadialMenu);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsSpace_(bool& InSpace);  // parameters 0x1, named "IsSpace?"
    UFUNCTION(BlueprintCallable) void OnDynamicWidgetDisplayed__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnEscapeMenuOpened__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnHidePanelDisplay__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable) void OnMenuOpened__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnPlayerPostLogin(APlayerController* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnWindowReceivedFocus();
    UFUNCTION(BlueprintCallable) void OpenEscapeMenu();
    UFUNCTION(BlueprintCallable) void RemoveCustomPopup(UUserWidget* PopupWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveRadialMenu(UUserWidget* RadialMenu);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Reset();
    UFUNCTION(BlueprintCallable) void SetFocusWidget();
    UFUNCTION(BlueprintCallable) void SetForceShowCrosshair(bool ForceShowCrosshair);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetHiddenByUser(bool NewHiddenByUser);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMaxProjectionWidgets(int32 NewMaxWidgetCount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Show_Game_Message(bool Error, FText Message, float LifeTimeOverride);  // parameters 0x24, named "Show Game Message"
    UFUNCTION(BlueprintCallable) void ShowCustomPopup(UUserWidget* PopupWidget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ShowErrorCode(FErrorCodesEnum ErrorCode, FString ErrorInfo);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ShowLoadingScreen(FText Optional_Message, UWidget* OptionalWidget);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ToggleCheatMenu();
    UFUNCTION(BlueprintCallable) void ToggleEscapeMenu();
    UFUNCTION(BlueprintCallable) void ToggleIcarusLogVisibility();
    UFUNCTION(BlueprintCallable) void ToggleStatDebugger();
    UFUNCTION(BlueprintCallable) void UpdateGamePauseState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void WidgetFocusGained(UIcarusWidget* Widget);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void WidgetFocusLost(UIcarusWidget* Widget);  // parameters 0x8
};
