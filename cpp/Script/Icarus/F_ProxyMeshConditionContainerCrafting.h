// /Script/Icarus.ProxyMeshConditionContainerCrafting
// size 0x50, declared in Icarus/Source/Icarus/Objects/ProxyMeshComponent.h

USTRUCT()
struct FProxyMeshConditionContainerCrafting
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ECraftingContainerType Type;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FProcessorRecipesRowHandle> Recipes;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FRecipeSetsRowHandle> RecipeSets;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FTagQueriesRowHandle Query;  // 0x0028, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FComponentPicker Component;  // 0x0040, size 0x10
};
