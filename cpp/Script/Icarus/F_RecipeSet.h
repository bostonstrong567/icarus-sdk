// /Script/Icarus.RecipeSet
// size 0x78, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/IcarusFunctionLibrary.generated.h

USTRUCT()
struct FRecipeSet : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText RecipeSetName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayText;  // 0x0030, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> RecipeSetIcon;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExperienceMultiplier;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAllowRefundOfRecipesOnDestroy;  // 0x0074, size 0x1
};
