// /Game/UI/Components/FieldGuide/UMG_FieldGuideItem_ResourceNetwork.UMG_FieldGuideItem_ResourceNetwork_C
// Derives from: UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x2F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItem_ResourceNetwork_C : public UFieldGuideItemWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* FuelGrid;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_58;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ProvidesBox;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* RequiresBox;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetSwitcher* WidgetSwitcher_NA;  // 0x02F0, size 0x8

    UFUNCTION(BlueprintCallable) void AddFieldGuideItem(FIcarusResourcesEnum ResourceType, EResourceNetworkFlowType FlowType, int32 Amount);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void AddFieldGuideItem_SpecialResources();
    UFUNCTION(BlueprintCallable) void AddFieldGuideItem_Storage(FIcarusResourcesEnum ResourceType, EResourceNetworkFlowType FlowType, int32 Amount);  // parameters 0x18
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItem_ResourceNetwork(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void PopulateResourceNetworkDetail(FItemsStaticRowHandle ItemRow, FFieldGuideCategoriesRowHandle CategoryRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SubItemClicked(FFieldGuideCategoriesRowHandle Category, FItemsStaticRowHandle Item);  // parameters 0x30
};
