// /Game/UI/Components/FieldGuide/UMG_FieldGuideItemDeployablePage.UMG_FieldGuideItemDeployablePage_C
// Derives from: UFieldGuidePageWidgetBase > UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x350, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItemDeployablePage_C : public UFieldGuidePageWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Itemable_C* Itemable;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* ItemRecipes;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Uses_C* ItemUses;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USizeBox* recipecost;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_RecipeOrCost_C* RecipeOrCost;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* RelatedDevices;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* RelatedDevicesBox;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_ResourceNetwork_C* ResourceNetwork;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItems_Sets_C* Sets;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Stats_C* Stats;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Storage_C* Storage;  // 0x0348, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItemDeployablePage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void PopulateDeployableDetail(FItemsStaticRowHandle ItemRow, FFieldGuideCategoriesRowHandle CategoryRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void PopulateResourceDetail();
    UFUNCTION(BlueprintCallable) void SubItemClicked(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SubItemClickedByRef(const FFieldGuideCategoriesRowHandle& CategoryRow, const FItemsStaticRowHandle& ItemRow);  // parameters 0x30
};
