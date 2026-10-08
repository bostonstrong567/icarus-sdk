// /Script/Icarus.FieldGuideRecipeInfo
// size 0x48, declared in Icarus/Source/Icarus/FieldGuide/FieldGuideFunctionLibrary.h

USTRUCT()
struct FFieldGuideRecipeInfo
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FCraftingInput> CraftingInputsOut;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FQueryInput> QueryInputsOut;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FItemsStaticRowHandle> CraftedAtOut;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 OutputCount;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FResourceItem> CraftingResourcesRequired;  // 0x0038, size 0x10
};
