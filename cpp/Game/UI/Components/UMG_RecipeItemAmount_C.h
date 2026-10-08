// /Game/UI/Components/UMG_RecipeItemAmount.UMG_RecipeItemAmount_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeItemAmount_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_132;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Count;  // 0x0268, size 0x8

    UFUNCTION(BlueprintCallable) void SetRecipeAmount(FCraftingInput CraftingInput, int32 Multiplier, int32 Current, bool Output);  // parameters 0x25
    UFUNCTION(BlueprintCallable) void SetRecipeAmountQuery(int32 Multiplier, int32 Current, int32 Required, bool Output);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetRecipeAmountResource(int32 Units, int32 Multiplier, int32 Current, bool Output, FString Unit);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void UpdateColor(TEnumAsByte<ProcessorPreview> Selected);  // parameters 0x1
};
