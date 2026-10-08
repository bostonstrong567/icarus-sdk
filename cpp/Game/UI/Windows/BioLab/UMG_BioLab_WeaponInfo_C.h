// /Game/UI/Windows/BioLab/UMG_BioLab_WeaponInfo.UMG_BioLab_WeaponInfo_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3D0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BioLab_WeaponInfo_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _1_1;  // 0x0268, size 0x8, named "1_1"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _1_2;  // 0x0270, size 0x8, named "1_2"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _1_3;  // 0x0278, size 0x8, named "1_3"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _2_1;  // 0x0280, size 0x8, named "2_1"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _2_2;  // 0x0288, size 0x8, named "2_2"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _2_3;  // 0x0290, size 0x8, named "2_3"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _3_1;  // 0x0298, size 0x8, named "3_1"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _3_2;  // 0x02A0, size 0x8, named "3_2"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _3_3;  // 0x02A8, size 0x8, named "3_3"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _4_1;  // 0x02B0, size 0x8, named "4_1"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _4_2;  // 0x02B8, size 0x8, named "4_2"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _4_3;  // 0x02C0, size 0x8, named "4_3"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BackButton;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BossIcon;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* Cost;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Desciption;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Desciption_2;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Desciption_3;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Desciption_4;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Flavour;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NameBG;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PIN_1;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PIN_2;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PIN_3;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PIN_4;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ProcurementDescription;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_BioLab_Buy_C* UMG_BasicButton_BioLab_Buy_C_285;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ItemStats_C* UMG_ItemStats;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RequiresDLCButton_C* UMG_RequiresDLCButton;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeaponBackground;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* WeaponImage;  // 0x0368, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLivingItemShopItemsRowHandle LivingItem;  // 0x0370, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBackClicked BackClicked;  // 0x0388, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_BioLab_PurchaseItemDetails_C* DetailsWidget;  // 0x0398, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_BioLab_UpgradeSlotChoice_C*> Upgrades;  // 0x03A0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* ConfirmationPurchase;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDLCPackageDataRowHandle DLC_Data;  // 0x03B8, size 0x18, named "DLC Data"

    UFUNCTION(BlueprintCallable) void BackClicked__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_BioLab_WeaponInfo_BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION() void BndEvt__UMG_BioLab_WeaponInfo_UMG_BasicButton_BioLab_Buy_C_285_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CancelBuy();
    UFUNCTION(BlueprintCallable) void ConfirmBuy();
    UFUNCTION() void ExecuteUbergraph_UMG_BioLab_WeaponInfo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Nothing();
    UFUNCTION(BlueprintCallable) void Nothing2();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowForItem(FLivingItemShopItemsRowHandle Weapon, bool CanPurchase);  // parameters 0x19
};
