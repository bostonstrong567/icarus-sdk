// /Game/BP/Systems/BP_IcarusGameModeFunctionLibrary.BP_IcarusGameModeFunctionLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusGameModeFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void Cheat_Exhaust_ARandom_ExoticDeposit(UObject* __WorldContext);  // parameters 0x8, named "Cheat Exhaust ARandom ExoticDeposit"
    UFUNCTION(BlueprintCallable) static void FindMetaSpawnByBiomeAndDistance(TArray<ABP_IcarusMetaSpawn_C*>& MetaSpawns, FMetaSpawn MetaSpawnDescription, FVector AveragePlayerStartLocation, UObject* __WorldContext, TArray<ABP_IcarusMetaSpawn_C*>& ValidCandidates);  // parameters 0x50
    UFUNCTION(BlueprintCallable) static void FindMetaSpawnByName(TArray<ABP_IcarusMetaSpawn_C*>& MetaSpawns, FMetaSpawn MetaSpawnDescription, UObject* __WorldContext, ABP_IcarusMetaSpawn_C*& MetaSpawn);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void GetAvailableMetaSpawns(const FIcarusProspect& Prospect, FVector AveragePlayerStartLocation, bool AllowDuplicateSelections, UObject* __WorldContext, TMap<int32, ABP_IcarusMetaSpawn_C*>& OutMetaSpawns, TArray<ABP_IcarusMetaSpawn_C*>& OutValidCandidates, TArray<int32>& OutNewCandidateStartIndexs);  // parameters 0x358
    UFUNCTION(BlueprintCallable) static void Remove_Any_Spawns_in_Same_LocationAsDeposits(TArray<ABP_IcarusMetaSpawn_C*>& PotentialSpawns, TArray<ABP_MetaDeposit_C*>& ExistingSpawns, UObject* __WorldContext, TArray<ABP_IcarusMetaSpawn_C*>& OutSpawns);  // parameters 0x38, named "Remove Any Spawns in Same LocationAsDeposits"
    UFUNCTION(BlueprintCallable) static void RemoveAnyMindedSpawns(TArray<ABP_MetaDeposit_C*>& ExistingSpawns, TArray<ABP_IcarusMetaSpawn_C*>& WorldSpawnPoints, UObject* __WorldContext, TArray<ABP_MetaDeposit_C*>& LiveSpawns, TArray<ABP_IcarusMetaSpawn_C*>& RecentlyUsed, TArray<ABP_MetaDeposit_C*>& ExtractorSpawns);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static void RemoveInvalidMetaSpawns(TArray<FMetaSpawn>& InMetaSpawns, TArray<ABP_IcarusMetaSpawn_C*>& PotentialSpawns, UObject* __WorldContext, TArray<FMetaSpawn>& OutMetaSpawns);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static void SelectRandomMetaSpawnsForProspect(const FIcarusProspect& Prospect, FVector AroundLocation, int32 MinCount, int32 MaxCount, bool RemoveMined, FRandomStream InRandomStream, UObject* __WorldContext, TMap<ABP_IcarusMetaSpawn_C*, int32>& OutMetaSpawnsAndResourceCount);  // parameters 0x348
    UFUNCTION(BlueprintCallable) static void WorldHasAvailableRedMetaDeposits(UObject* __WorldContext, bool& RedFound);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void WorldHasAvailableYellowMetaDeposits(UObject* __WorldContext, int32& YellowFound);  // parameters 0xC
};
