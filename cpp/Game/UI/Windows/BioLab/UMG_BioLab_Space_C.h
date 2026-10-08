// /Game/UI/Windows/BioLab/UMG_BioLab_Space.UMG_BioLab_Space_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x394, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_Space_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* ShopAnimation;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* CurrencySideBar;  // 0x0270, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* NorexSideBar;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Background;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BuyButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* BuyWeaponsPanel;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* CurrencyBoxes;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BiolabResourceDisplay_C* CurrencyDisplay;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_290;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_446;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_560;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_763;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* InfoButton;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* InfoOverlay;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UListView* InventoryListView;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* LeftPanelContents;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* Norex_Titlebar;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* PlayerInventoryVBox;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichTextBlock_215;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) URichTextBlock* RichTextBlock_582;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* SideBar;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* SideBarOverlay;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* Switcher;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* UMG_BasicButton_2;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_ShopPanel_C* UMG_BioLab_ShopPanel;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_CustomisationPanel_C* UMG_BioLab_WeaponCustomisationPanel;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_WeaponInfo_C* UMG_BioLab_WeaponInfo;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_CurrencyExchangeRenToLicence_C* UMG_CurrencyExchangeRenToLicence;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* WeaponCustomisationPanel;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* WeaponInventoryTitle;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x0360, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EventsRegistered;  // 0x0368, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumValidItems;  // 0x036C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UObject* LastItemSelected;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAccountFlagsRowHandle GreatHuntsPromptAccountFlag;  // 0x0378, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumSelected;  // 0x0390, size 0x4

    UFUNCTION() void BndEvt__UMG_BioLab_Space_BuyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BioLab_Space_InfoButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BioLab_Space_InventoryListView_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature(UObject* Item);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BioLab_Space_InventoryListView_K2Node_ComponentBoundEvent_6_OnListEntryReleasedDynamic__DelegateSignature(UUserWidget* Widget);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BioLab_Space_InventoryListView_K2Node_ComponentBoundEvent_7_OnListEntryGeneratedDynamic__DelegateSignature(UUserWidget* Widget);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BioLab_Space_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BioLab_Space_UMG_BioLab_ShopPanel_K2Node_ComponentBoundEvent_4_ShowItem__DelegateSignature(FLivingItemShopItemsRowHandle Weapon);  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_Space(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void HandleListItemSelected(UObject* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Initialise(UInventory* Main, UInventory* Loadout);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnMetaInventoryChanged();
    UFUNCTION(BlueprintCallable) void Play_Animation();  // named "Play Animation"
    UFUNCTION(BlueprintCallable) void RegisterEvents();
    UFUNCTION(BlueprintCallable) void SetupGreatHuntsPrompt();
    UFUNCTION(BlueprintCallable) void ShowWeaponCustomisation();
    UFUNCTION(BlueprintCallable) void ShowWeaponShop();
    UFUNCTION(BlueprintCallable) void UnregisterEvents();
};
