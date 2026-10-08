// /Game/UI/Windows/UMG_SpaceMenus_TopLevel.UMG_SpaceMenus_TopLevel_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x56C, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SpaceMenus_TopLevel_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenNewOptions;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* InitialLoad;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* AccoladesButton;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* AccoladesIcon;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BackButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* BlueprintTalentSlot;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* Button_ReturnFromPlayerProgression;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* ButtonWidgetSwitcher;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProgressBar* CharacterLevelProgressBar;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* CharacterSelectIcon;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_C* ContractButton;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* ContractSpacer;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* ContractSpacer_1;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* ContractSpacer_4;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* ContractSpacer_5;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IconTextButton_C* CustomizeButton;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* CustomizeIcon;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* divider_1;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* FieldGuideButton;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* FieldGuideIcon;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* FieldGuideSlot;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_C* LeaveSessionButton;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_MainMenu_C* NewButton;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_NewGame_C* NewGame_Mission;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_NewGame_C* NewGame_OpenWorld;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_NewGame_C* NewGame_Outpost;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* NewGameButtonHorizontal;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* NewGameOverlay;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_MainMenu_C* OpenProspectButton;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_C* OpenWorldHostButton;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_C* OutpostButton;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ParentOverlay;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* PlayerTalentSlot;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* ProgressionBorder;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ProspectButtonsHorizontal;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_C* ProspectHostButton;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_MainMenu_C* ProspectJoinButton;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TopLevelButton_ResumeLast_C* ResumeLastProspectButton;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ReturnButton;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* SoloTalentSlot;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* TalentButtonIcon;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* Talents;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* TalentsButton;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* TechTreeButton;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ButtonIcon_C* TechTreeIcon;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TextBlock_CharacterLevel;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_AccoladeScreen_C* UMG_AccoladeScreen_C_3;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuide_C* UMG_FieldGuide;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_1;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_2;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_KeybindPrompt_C* UMG_KeybindPrompt_3;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MetaResourceDisplay_C* UMG_MetaResourceDisplay;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectHistoryList_C* UMG_ProspectHistoryList;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ProspectTracker_C* UMG_ProspectTracker;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SettledProspectTracker_C* UMG_SettledProspectTracker;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_PlayerProgression;  // 0x0438, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FOnlineProfileCharacter CachedActiveCharacter;  // 0x0440, size 0xF0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCurrencyConversionsRowHandle ConverstionRow;  // 0x0530, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ConfirmationPopup_C* ConfirmationPopup;  // 0x0548, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsShowingNewOptions;  // 0x0550, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccountFlagsRowHandle NewGameTutorialAccountFlag;  // 0x0554, size 0x18

    UFUNCTION() void BndEvt__Button_ReturnFromPlayerProgression_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__CustomizeButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__TalentsButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__TechTreeButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_SpaceMenus_TopLevel_AccoladesIcon_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_SpaceMenus_TopLevel_BackButton_K2Node_ComponentBoundEvent_15_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_SpaceMenus_TopLevel_CharacterSelectIcon_K2Node_ComponentBoundEvent_12_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_SpaceMenus_TopLevel_CustomizeIcon_K2Node_ComponentBoundEvent_16_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_SpaceMenus_TopLevel_FieldGuideButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_SpaceMenus_TopLevel_FieldGuideIcon_K2Node_ComponentBoundEvent_13_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_7_OnHovered__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_8_OnUnhovered__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_SpaceMenus_TopLevel_NewButton_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_SpaceMenus_TopLevel_TalentButtonIcon_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_SpaceMenus_TopLevel_TechTreeButton_1_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_SpaceMenus_TopLevel_TechTreeIcon_K2Node_ComponentBoundEvent_14_Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void ContractUpdated();
    UFUNCTION(BlueprintCallable) void CustomisationComplete(bool Success, FOnlineProfileCharacter NewCharacterInfo);  // parameters 0xF8
    UFUNCTION() void ExecuteUbergraph_UMG_SpaceMenus_TopLevel(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitCharacterData();
    UFUNCTION(BlueprintCallable) void OnClose();
    UFUNCTION(BlueprintCallable) void OnConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldShowNewGameTutorialPrompt(bool& ShouldShow) const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowFieldGuide();
    UFUNCTION(BlueprintCallable) void ShowFieldGuideItem(FFieldGuideCategoriesRowHandle Category, FItemsStaticRowHandle Item, bool ForceShowNone);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void SwitchTalents(bool Solo);  // parameters 0x1
};
