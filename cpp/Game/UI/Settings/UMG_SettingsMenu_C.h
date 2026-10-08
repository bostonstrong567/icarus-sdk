// /Game/UI/Settings/UMG_SettingsMenu.UMG_SettingsMenu_C
// Derives from: USettingsMenu > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2F5, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettingsMenu_C : public USettingsMenu
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BackButton;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CategoryBox;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* ConfirmationSlot;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ResetButton;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* SettingOptionDescription;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* Switcher;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* TuneButton;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FSettingsBack SettingsBack;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDirty;  // 0x02F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RestartRequested;  // 0x02F1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowRestartPopup;  // 0x02F2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasInited;  // 0x02F3, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowRTXWarning;  // 0x02F4, size 0x1

    UFUNCTION() void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__ResetButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_SettingsMenu_TuneButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Category_Toggled(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8, named "Category Toggled"
    UFUNCTION(BlueprintCallable) void ConfirmRTXEnabled();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void Dirty();
    UFUNCTION(BlueprintCallable) void DisableRTX();
    UFUNCTION() void ExecuteUbergraph_UMG_SettingsMenu(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void Nothing();
    UFUNCTION(BlueprintCallable) void On_Restart_Requested(FName SettingName);  // parameters 0x8, named "On Restart Requested"
    UFUNCTION(BlueprintCallable) void On_View_Refresh(UUMG_SettingsView_C* View);  // parameters 0x8, named "On View Refresh"
    UFUNCTION(BlueprintCallable) void On_Visibility_Changed(ESlateVisibility InVisibility);  // parameters 0x1, named "On Visibility Changed"
    UFUNCTION(BlueprintCallable) void OnCancelReset();
    UFUNCTION(BlueprintCallable) void OnCancelTune();
    UFUNCTION(BlueprintCallable) void OnConfirmReset();
    UFUNCTION(BlueprintCallable) void OnConfirmTune();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable) void OnRTXEnabledStateUpdated(bool Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ResetSwitcherContent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Save(bool bForce);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetContentState(ESettingsCategory State);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setting_Hovered(UUMG_SettingRowBorder_C* Setting_Object);  // parameters 0x8, named "Setting Hovered"
    UFUNCTION(BlueprintCallable) void Setting_Unhovered(UUMG_SettingRowBorder_C* Setting_Object);  // parameters 0x8, named "Setting Unhovered"
    UFUNCTION(BlueprintCallable) void SettingsBack__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Setup();
    UFUNCTION(BlueprintCallable) void ShowHideTuneButton(ESettingsCategory Category);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
