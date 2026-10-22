// /Game/UI/Components/UMG_RecipeInputItem_Settlement.UMG_RecipeInputItem_Settlement_C
// Derives from: UUMG_RecipeInputItem_C > UUMG_RecipeElementBase_C > UUserWidget > UWidget > UVisual > UObject
// size 0x2D8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeInputItem_Settlement_C : public UUMG_RecipeInputItem_C
{
public:
    UFUNCTION(BlueprintCallable) void CheckElement(bool& bCanSatisfy);  // parameters 0x1
};
