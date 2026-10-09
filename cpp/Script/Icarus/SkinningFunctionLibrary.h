// /Script/Icarus.SkinningFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Bestiary/SkinningFunctionLibrary.h

UCLASS()
class USkinningFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void AwardSkinningBestiaryProgress(const FProcessingItem& Item);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static void AwardTrophyBestiaryProgress(const FProcessingItem& Item);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static FBestiaryDataRowHandle GetBestiaryFromItemsStaticCorpse(const FItemsStaticRowHandle& CorpseRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FBestiaryDataRowHandle GetBestiaryFromItemsStaticTrophy(const FItemsStaticRowHandle& TrophyRow);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static UBestiaryManagerComponent* GetBestiaryManagerForPlayer(AIcarusPlayerCharacter* Character);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static UPlayerDataComponent* GetPlayerDataComponentFromCraftingPlayer(AIcarusPlayerCharacter* CraftingPlayer);  // parameters 0x10
};
