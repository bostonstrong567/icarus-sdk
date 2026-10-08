// /Game/UI/Components/FieldGuide/UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C
// Derives from: UFieldGuidePageWidgetBase > UFieldGuideItemWidgetBase > UUserWidget > UWidget > UVisual > UObject
// size 0x348, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItemFishPage_C : public UFieldGuidePageWidgetBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* FilletAt_L;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* FilletAt_R;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* FishingGrid;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_95;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_254;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ImageFishing;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_FieldGuideItem_Itemable_C* Itemable;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* TearingApartGrid;  // 0x0340, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCallable) void DoFishLinkClickedByRef(FFishDataRowHandle Creature, bool Discovered);  // parameters 0x19
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItemFishPage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitFieldGuideView(FItemsStaticRowHandle ItemIn, FFieldGuideCategoriesRowHandle CategoryIn, FFieldGuideSubcategoriesRowHandle SubcategoryIn);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void PopulateFishDetail(FItemsStaticRowHandle ItemRow, FFieldGuideCategoriesRowHandle CategoryRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SubItemClicked(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SubItemClickedByRef(const FFieldGuideCategoriesRowHandle& CategoryRow, const FItemsStaticRowHandle& ItemRow);  // parameters 0x30
};
