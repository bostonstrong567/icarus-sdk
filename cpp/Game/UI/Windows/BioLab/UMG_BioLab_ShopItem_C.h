// /Game/UI/Windows/BioLab/UMG_BioLab_ShopItem.UMG_BioLab_ShopItem_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x318, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_ShopItem_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Hover;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BackgroundImage;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* ComingSoonBox;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CostBox;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* ItemButton;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_BioLab_Buy_C* UMG_BasicButton_BioLab_Buy_C_3;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RequiresDLCButton_C* UMG_RequiresDLCButton;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Talent_ComingSoon_C* UMG_Talent_ComingSoon;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ViewButton;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* WeaponBox;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeaponIcon;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* WeaponName;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemShopItemsRowHandle ShopItemRow;  // 0x02C8, size 0x18
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_BioLab_PurchaseItemDetails_C* DetailsWidget;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FViewClicked ViewClicked;  // 0x02E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* ConfirmationPurchase;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDLCPackageDataRowHandle DLC_Data;  // 0x0300, size 0x18, named "DLC Data"

    UFUNCTION() void BndEvt__UMG_BioLab_ShopItem_ItemButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_BioLab_ShopItem_ItemButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_BioLab_ShopItem_ItemButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_BioLab_ShopItem_UMG_BasicButton_BioLab_Buy_C_3_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BioLab_ShopItem_ViewButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanAffordItem(bool& CanAfford);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CancelBuy();
    UFUNCTION(BlueprintCallable) void ConfirmBuy();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_ShopItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Nothing();
    UFUNCTION(BlueprintCallable) void Nothing2();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ViewClicked__DelegateSignature(FLivingItemShopItemsRowHandle Weapon);  // parameters 0x18
};
