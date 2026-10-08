// /Game/UI/Components/FieldGuide/UMG_FieldGuide_List_Category_Items.UMG_FieldGuide_List_Category_Items_C
// Derives from: UUMG_FieldGuide_List_Category_C > UUserWidget > UWidget > UVisual > UObject
// size 0x318, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuide_List_Category_Items_C : public UUMG_FieldGuide_List_Category_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFilterItems FilterItems;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFieldGuideCategoriesRowHandle FieldGuideCategoryRow;  // 0x02D0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFieldGuideSubcategoriesRowHandle FieldGuideSubCategoryRow;  // 0x02E8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ItemRow;  // 0x0300, size 0x18

    UFUNCTION(BlueprintCallable) void ClickedInternal();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuide_List_Category_Items(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FilterItems__DelegateSignature(FFieldGuideCategoriesRowHandle Category, FFieldGuideSubcategoriesRowHandle Subcategory, FItemsStaticRowHandle Item);  // parameters 0x48
};
