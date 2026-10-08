// /Game/UI/Components/UMG_CraftingPreview.UMG_CraftingPreview_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CraftingPreview_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_54;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* NoRecipeSelected;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RecipeName;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RecipeElement_C* UMG_RecipeElement;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClicked Clicked;  // 0x0288, size 0x10

    UFUNCTION(BlueprintCallable) void Clicked__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_CraftingPreview(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetRecipe(FProcessorRecipesRowHandle& Recipe);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void Recipe(FProcessorRecipesRowHandle& Recipe);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void RecipeClicked(FProcessorRecipesRowHandle Recipe);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Set_Recipe(FProcessorRecipesRowHandle Recipe);  // parameters 0x18, named "Set Recipe"
};
