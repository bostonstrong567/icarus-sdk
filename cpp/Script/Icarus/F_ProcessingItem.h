// /Script/Icarus.ProcessingItem
// size 0x24, declared in Icarus/Source/Icarus/Traits/Behaviours/Processing/ProcessingItem.h

USTRUCT()
struct FProcessingItem
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TWeakObjectPtr<AIcarusPlayerCharacter> CraftingPlayer;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProcessorRecipesRowHandle Recipe;  // 0x0008, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CraftCount;  // 0x0020, size 0x4
};
