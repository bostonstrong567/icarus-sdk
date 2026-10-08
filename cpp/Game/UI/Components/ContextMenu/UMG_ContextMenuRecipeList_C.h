// /Game/UI/Components/ContextMenu/UMG_ContextMenuRecipeList.UMG_ContextMenuRecipeList_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ContextMenuRecipeList_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RecipeInputItem_C* UMG_RecipeInputItem;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RecipeInputItem_C* UMG_RecipeInputItem_1;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RecipeInputItem_C* UMG_RecipeInputItem_2;  // 0x0270, size 0x8
};
