// /Game/UI/Components/FieldGuide/UMG_FieldGuideItem_LegendaryWeapon_Slots.UMG_FieldGuideItem_LegendaryWeapon_Slots_C
// Derives from: UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x360, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItem_LegendaryWeapon_Slots_C : public UFieldGuideItemWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _1_1;  // 0x02D0, size 0x8, named "1_1"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _1_2;  // 0x02D8, size 0x8, named "1_2"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _1_3;  // 0x02E0, size 0x8, named "1_3"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _2_1;  // 0x02E8, size 0x8, named "2_1"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _2_2;  // 0x02F0, size 0x8, named "2_2"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _2_3;  // 0x02F8, size 0x8, named "2_3"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _3_1;  // 0x0300, size 0x8, named "3_1"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _3_2;  // 0x0308, size 0x8, named "3_2"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _3_3;  // 0x0310, size 0x8, named "3_3"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _4_1;  // 0x0318, size 0x8, named "4_1"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _4_2;  // 0x0320, size 0x8, named "4_2"
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BioLab_UpgradeSlotChoice_C* _4_3;  // 0x0328, size 0x8, named "4_3"
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_95;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PIN_1;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PIN_2;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PIN_3;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* PIN_4;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_NA;  // 0x0358, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItem_LegendaryWeapon_Slots(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void PopulateUpgradesView();
    UFUNCTION(BlueprintCallable) void SubItemClicked(FFieldGuideCategoriesRowHandle Category, FItemsStaticRowHandle Item);  // parameters 0x30
};
