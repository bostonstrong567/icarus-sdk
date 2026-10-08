// /Game/UI/Windows/UMG_ArmourStand.UMG_ArmourStand_C
// Derives from: UUMG_IcarusLinkedActorPanel_C > UIcarusLinkedActorPanelBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2DA, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ArmourStand_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0280, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* OpenMenu;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* InventoryVertBox;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MainBorder;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* SwapButton;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CharacterSetting_TextBase_C* UMG_CharacterSetting_TextBase;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryPaperDoll_C* UMG_InventoryPaperDoll;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_PlayerInventory_C* UMG_PlayerInventory;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ToggleButton_TextSettingOption_C* UMG_ToggleButton_TextSettingOption_BackpackSwap;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowStoreAll;  // 0x02D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowTakeAll;  // 0x02D9, size 0x1

    UFUNCTION() void BndEvt__UMG_ArmourStand_SwapButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_ArmourStand_UMG_ToggleButton_TextSettingOption_BackpackSwap_K2Node_ComponentBoundEvent_7_Toggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_ArmourStand_UMG_ToggleButton_TextSettingOption_BackpackSwap_K2Node_ComponentBoundEvent_8_Untoggled__DelegateSignature(UUMG_ToggleButtonBase_C* ToggleButton);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_ArmourStand_UMG_ToggleButton_TextSettingOption_BackpackSwap_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ArmourStand(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitialisePoseSelector();
    UFUNCTION(BlueprintCallable) void LinkedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnPoseSelectionUpdated(int32 Index, FPreviewCameraSettingsEnum NewFocus);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void QuickShiftInventoryHandler(int32 CurrentLocation, UInventory* Inventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetupObjectInventory(UInventory* ContainerInventory);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
