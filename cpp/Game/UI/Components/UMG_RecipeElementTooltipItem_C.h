// /Game/UI/Components/UMG_RecipeElementTooltipItem.UMG_RecipeElementTooltipItem_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeElementTooltipItem_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CraftedFrom;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* CraftedFrom_1;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* CraftedFromContent;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* CraftedFromGrid;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_3;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* State;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RecipeInputItem_C* UMG_RecipeInput;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* WorkshopContent;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGridPanel* WorkshopGrid;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FFieldGuideRecipeInfo> Recipes_Out;  // 0x02D0, size 0x10, named "Recipes Out"

    UFUNCTION(BlueprintCallable) void InitCraftedFromSection(FItemsStaticRowHandle IngredientRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void InitWorkshopSection(FItemsStaticRowHandle IngredientRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Update(FCraftingInput CraftingInput, TEnumAsByte<ProcessorPreview> PreviewState, int32 CurrentAmount, int32 RecipeMultiplier, bool Output);  // parameters 0x29
};
