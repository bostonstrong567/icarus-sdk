// /Script/Icarus.CraftingSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x50, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/CraftingSubsystem.h

UCLASS()
class UCraftingSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FCraftedRecipeNotifySignature OnCraftedRecipeNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FCraftedItemNotifySignature OnCraftedItemNotify;  // 0x0040, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastCraftedItemDelegate(AActor* Player, AActor* Device, FItemData Item);  // parameters 0x200
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastCraftedRecipeDelegate(AActor* Player, AActor* Device, FProcessorRecipesRowHandle Recipe);  // parameters 0x28
};
