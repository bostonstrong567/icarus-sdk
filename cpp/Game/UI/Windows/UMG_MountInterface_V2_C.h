// /Game/UI/Windows/UMG_MountInterface_V2.UMG_MountInterface_V2_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x3D7, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MountInterface_V2_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenExtraStats;  // 0x0288, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* APPointBox;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* AttributeGlow;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Backglow;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ButtonText;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UEditableTextBox* CreateCharacterName;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Dropshadow;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* FoodBuffs;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* Inventory_Button;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Overlay_TalentTree;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ShowMoreButton;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ShowMoreText;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* StatsWindow;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* SuitImage;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* Switcher;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNamedSlot* TalentMenuSlot;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TalentPoints;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_MenuHeader_C* Talents_Button;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_Close;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_Unclaim;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterInfo_C* UMG_CharacterInfo;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUmg_GeneticsDisplay_C* Umg_GeneticsDisplay;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryStatusBox_C* UMG_InventoryStatusBox;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MountCommands_C* UMG_MountCommands;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MountInventory_C* UMG_MountInventory;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MountInventory_C* UMG_MountInventory_Cargo;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SaddleInventory_C* UMG_MountInventory_Saddle;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_SaddleInventory_C* UMG_MountInventory_Saddle_Attachment;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MountInventoryWidgets_C* UMG_MountInventoryWidgets;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_NameMountPopup_C* UMG_NameMountPopup_Window;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerInventory_C* UMG_PlayerInventory;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ScaleableFrame_C* UMG_ScaleableFrame_49;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatDisplayMount_C* UMG_StatDisplayMount;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_StatsWindow_C* UMG_StatsWindow;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_TameParent_C* UMG_TameParent;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Titlebar_C* UMG_Titlebar;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x03B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowStoreAll;  // 0x03C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowTakeAll;  // 0x03C1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusMountCharacter* LinkedMount;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaximumMountNameLength;  // 0x03D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PromptForNameOnEntry;  // 0x03D4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisableCreatureGenetics;  // 0x03D5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisableMountCommands;  // 0x03D6, size 0x1

    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_MountInterface_CreateCharacterName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit> CommitMethod);  // parameters 0x19
    UFUNCTION() void BndEvt__UMG_MountInterface_CreateCharacterName_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_MountInterface_V2_Inventory_Button_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_MountInterface_V2_Talents_Button_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_MountInterface_V2_UMG_BasicButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClosePopup();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_MountInterface_V2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitMountWidgets(AActor* LinkedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void LinkedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void MountTalentModelUpdated(UTalentModelInterface_Const* Model);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Nothing();
    UFUNCTION(BlueprintCallable) void OnMountModifiersUpdated(UModifierStateComponent* ModifiedComponent, bool Removed);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void PopulateModifierList();
    UFUNCTION(BlueprintCallable) void PromptForName();
    UFUNCTION(BlueprintCallable) void SelectNewName();
    UFUNCTION(BlueprintCallable) void SetCharacterName(FString Name);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetupObjectInventory(UInventory* ContainerInventory);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ToggleExtraStatsVisibility();
    UFUNCTION(BlueprintCallable) void TryEnableOwnerFunctions();
    UFUNCTION(BlueprintCallable) void Unclaim();
};
