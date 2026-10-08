// /Game/UI/Windows/UMG_MainMenu.UMG_MainMenu_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x388, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MainMenu_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* AttributePointsGlow;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BlueprintPointGlow;  // 0x0278, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* MenuGlowPulse;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* AccoladeSlot;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* APPointBox;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AttributeGlow;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Backglow;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* BlueprintMenuSlot;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BlueprintPoints;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BlueprintPoints_1;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BPGlow;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* BPPointBox;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonAccolades;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonCrafting;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonInventory;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonMap;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonTalents;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* ButtonTechtree;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CloseButton_2_C* CloseButton;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* EdgeLights;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainContentBorder;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* MenuSwitcher;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Noise;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* PointNotifiers;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* SoloMenuSlot;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* TalentMenuSlot;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* TalentSwitcher;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterInfo_C* UMG_CharacterInfo;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Crafting_C* UMG_Crafting;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MainInventory_C* UMG_MainInventory;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MainMap_C* UMG_MainMap;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterface_C* UserInterface;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TalentsInitialized;  // 0x0378, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle TimerHandle;  // 0x0380, size 0x8

    UFUNCTION(BlueprintCallable) void BlueprintModelViewChanged(UTalentControllerComponent* Controller);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonCrafting_K2Node_ComponentBoundEvent_5_Untoggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_4_Untoggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonMap_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonMap_K2Node_ComponentBoundEvent_7_Untoggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonTalents_K2Node_ComponentBoundEvent_13_Untoggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__ButtonTechtree_K2Node_ComponentBoundEvent_6_Untoggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_8_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_MainMenu_ButtonAccolades_K2Node_ComponentBoundEvent_9_Untoggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CleanupTabs();
    UFUNCTION(BlueprintCallable) void ConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MainMenu(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void Get_Shown_Menu(TEnumAsByte<EMainMenuOptions>& Menu);  // parameters 0x1, named "Get Shown Menu"
    UFUNCTION(BlueprintCallable) void Initialise();
    UFUNCTION(BlueprintCallable) void OnAliveStateChanged(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent) FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);  // parameters 0x160
    UFUNCTION(BlueprintCallable) void OnSoloModelViewChanged(UTalentControllerComponent* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PlayerModelViewChanged(UTalentControllerComponent* Controller);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ResetContentSwitcher();
    UFUNCTION(BlueprintCallable) void SetContentState(TEnumAsByte<EMainMenuOptions> State);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Setup_Main_Inventory(UInventory* Bound_Inventory, UInventory* Envirosuit_Inventory, UInventory* Equipment_Inventory, UInventory* UpgradeInventory, UInventory* VisionInventory, UUMG_UserInterface_C* Parent);  // parameters 0x30, named "Setup Main Inventory"
    UFUNCTION(BlueprintCallable) void Setup_Player_Crafting(UInventory* Inventory, UProcessingComponent* Processing);  // parameters 0x10, named "Setup Player Crafting"
    UFUNCTION(BlueprintCallable) void ShowOption(TEnumAsByte<EMainMenuOptions> Option);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SwitchTalentView(bool Solo);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SwitchTalents(bool Solo);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Toggle_Menu(TEnumAsByte<EMainMenuOptions> MenuOption);  // parameters 0x1, named "Toggle Menu"
    UFUNCTION(BlueprintCallable) void UpdateBlueprintIndicator(UTalentModelInterface_Const* Model);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateDLSSMode(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateTalentIndicator(UTalentModelInterface_Const* Model);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Visbility_Changed(ESlateVisibility InVisibility);  // parameters 0x1
};
