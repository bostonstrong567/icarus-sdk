// /Game/UI/UMG_EscapeMenu.UMG_EscapeMenu_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x388, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_EscapeMenu_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* EscapeButtons;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* PartyMembers;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Recommendations;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_Continue;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_CorpseUnstuck;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_Mission_Resupply;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_ProspectSettings;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_Quit;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_ReportIssue;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_ReturnToMM;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_Settings;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_Unstuck;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* UMG_ButtonIcon;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ConnectionLost_C* UMG_ConnectionLost;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_DisconnectionPopup_C* UMG_DisconnectionPopup;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MissionTimer_C* UMG_MissionTimer;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_NetworkDebugInfo_C* UMG_NetworkDebugInfo;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Party_C* UMG_Party;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectInfoDebug_C* UMG_ProspectInfoDebug;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RecommendedObjects_C* UMG_RecommendedObjects;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RevisionNumber_C* UMG_RevisionNumber;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SettingsMenu_C* UMG_SettingsMenu;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SpaceMenuHeader_C* UMG_SpaceMenuHeader;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSessionFlagsRowHandle ResupplyAvailable;  // 0x0360, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ResupplyTime;  // 0x0378, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ResupplyCooldown;  // 0x037C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ResupplyTimer;  // 0x0380, size 0x8

    UFUNCTION(BlueprintCallable) void AddExtraInfoForSentry(TMap<FString, FString> InTags, TMap<FString, FString>& OutTags);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) void BackSettingsMenu(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_Exit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_ReturnToMM_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_Unstuck_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_EscapeMenu_UMG_BasicButton_CorpseUnstuck_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_EscapeMenu_UMG_BasicButton_Mission_Resupply_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_EscapeMenu_UMG_BasicButton_ReportIssue_1_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_EscapeMenu_UMG_BasicButton_ReportIssue_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_EscapeMenu_UMG_ButtonIcon_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CloseDialog();
    UFUNCTION(BlueprintCallable) void CloseEscapeMenu();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DoNothing();
    UFUNCTION() void ExecuteUbergraph_UMG_EscapeMenu(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFocusWidget(bool& bValid, UWidget*& Widget, bool& bThis);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void Initialize();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsHostWithClients(bool& Result);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LeaveToMainMenu();
    UFUNCTION(BlueprintCallable) void On_Visibility_Changed(ESlateVisibility InVisibility);  // parameters 0x1, named "On Visibility Changed"
    UFUNCTION(BlueprintCallable) void OnCustomSettingsChanged(TArray<FCustomGameSetting>& NewSettingValues);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnFailure_E44064B942B297EF26C3B1A920D3D5C3();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);  // parameters 0x128
    UFUNCTION(BlueprintCallable) void OnSessionFlagsUpdated();
    UFUNCTION(BlueprintCallable) void OnSuccess_E44064B942B297EF26C3B1A920D3D5C3();
    UFUNCTION(BlueprintCallable) void OpenCustomSettingsWindow(ECustomGameStatChangeability CurrentContext, TArray<FCustomGameSetting>& CurrentSettings);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void QuitGame();
    UFUNCTION(BlueprintCallable) void SendSentryReport();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void Timer();
    UFUNCTION(BlueprintCallable) void UpdateDLSSMode(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateProspectSettingsButton();
};
