// /Game/UI/Components/FieldGuide/UMG_FieldGuideItem_RecipeRow.UMG_FieldGuideItem_RecipeRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x328, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FieldGuideItem_RecipeRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ArrowToOut;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* CreatedAt;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ItemCreated;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_IcarusGrid_C* RecipeInputs;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Ingredient;  // 0x0288, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFieldGuideCategoriesRowHandle CategoryRow;  // 0x02A0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FResourceClicked ResourceClicked;  // 0x02B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFieldGuideRecipeInfo FieldGuideRecipeInfo;  // 0x02C8, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProcessorRecipesRowHandle RecipeRowHandle;  // 0x0310, size 0x18

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FieldGuideItem_RecipeRow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetRecipeOfResource();
    UFUNCTION(BlueprintCallable) void InitRecipe();
    UFUNCTION(BlueprintCallable) void RecipeClicked(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void ResourceClicked__DelegateSignature(FFieldGuideCategoriesRowHandle CategoryRow, FItemsStaticRowHandle ItemRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SetupResourceInputs(FIcarusResourcesEnum Resource);  // parameters 0x10
};
