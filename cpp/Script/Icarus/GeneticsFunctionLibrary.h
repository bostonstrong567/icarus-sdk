// /Script/Icarus.GeneticsFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/AI/Mounts/GeneticsFuctionLibrary.h

UCLASS()
class UGeneticsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static bool GenerateChildGenetics(AActor* Mother, AActor* Father);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static bool GenerateWildCreatureGenetics(AActor* Creature);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static int32 GetGeneticValue(UGeneticsComponent* Genetics, FGeneticValuesRowHandle Value);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static FAISetupRowHandle GetJuvenileSetup(AActor* Mother);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static bool GetMountsRowHandleFromAISetup(const FAISetupRowHandle& AISetup, FMountsRowHandle& MountsRowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static bool GetMountsRowHandleFromActor(AActor* Actor, FMountsRowHandle& MountsRowHandle);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static bool InheritGenetics(AActor* Mother, AActor* Child);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static bool RerollCreatureGenetics(AActor* Creature, bool bRerollStats, bool bRerollCosmetic, bool bRerollLineage);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static bool TransferGenetics(AActor* Source, AActor* Target);  // parameters 0x11
    UFUNCTION(BlueprintCallable) static bool ValidateGenetics(AActor* Creature);  // parameters 0x9
};
