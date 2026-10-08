// /Game/UI/Windows/UMG_MainMenu_Space.UMG_MainMenu_Space_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MainMenu_Space_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CharacterFadeIn;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* MailNotification;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_Space_C* BioLab;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonBioLab;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonDropships;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonInventory;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonLeaveSession;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonLoadout;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonOpenWorld;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonOrbitalTree;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonOutposts;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonProspects;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonReadyUp;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Buttons;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ExitButton;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Glow;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Gradient;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Header_1;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* HomeButton;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SpaceMenu_Cargo_ViewOnly_C* Loadout;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* MailboxButton;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MailboxOverlay;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* MainBackground;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MainInventory_Space_C* MainInventory;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* Menus;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MetaItemShop_C* MetaShop;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* NewMail;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Notification;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* NotificationOverlay;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pattern;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ReadyUp_C* ReadyUp;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* SettingsButton;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_HabitatTerminal_C* Terminal;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SpaceMenus_TopLevel_C* TopLevel;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* UMG_CloseButton_2;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Mailbox_C* UMG_Mailbox;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SpacePlayerInfo_C* UMG_SpacePlayerInfo;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Vignette;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* WorkshopTreeSlot;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x03A8, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterfaceSpace_C* UserInterace_Space;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESpaceMainMenuOptions> CurrentMenu;  // 0x03B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESpaceMainMenuOptions> LastMenu;  // 0x03B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BackReturnsToLastMenu;  // 0x03BA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ChatKeyBind;  // 0x03C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_PlayerPreview_HAB_C* PlayerPreview;  // 0x03D8, size 0x8

    UFUNCTION() void BndEvt__ButtonDropships_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonLeaveSession_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonMetaShop_K2Node_ComponentBoundEvent_10_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonProspects_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonShop_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ExitButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__HomeButton_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_ButtonIcon_429_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_MainMenu_Space_ButtonLivingWeapons_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_MainMenu_Space_ButtonOpenWorld_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_MainMenu_Space_ButtonOutposts_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CancelLeaveToMainMenu();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void ContractUpdated();
    UFUNCTION(BlueprintCallable) void CreateDropship(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EscapePressed(bool& Handled);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_MainMenu_Space(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GoBackToHome();
    UFUNCTION(BlueprintCallable) void GoToContract(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GoToHost(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GoToJoin(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GoToOpenProspectScreen(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GoToOpenWorldScreen(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GoToOutpostScreen(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void InitCharacterData();
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void LeaveToMainMenu();
    UFUNCTION(BlueprintCallable) void NotificationsUpdated();
    UFUNCTION(BlueprintCallable) void OnConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void ResetContentSwitcher();
    UFUNCTION(BlueprintCallable) void ResumeLastProspectClicked(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ReturnToCharacterSelect(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ReturnToCharacterSelectIcon();
    UFUNCTION(BlueprintCallable) void SetBackReturnsToLastMenu(bool ShouldReturn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetContentState(TEnumAsByte<ESpaceMainMenuOptions> State);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowOption(TEnumAsByte<ESpaceMainMenuOptions> Option);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowTopMenu();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
