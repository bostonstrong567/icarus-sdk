// /Game/BP/Systems/BP_StatLibrary.BP_StatLibrary_C
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_StatLibrary_C : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void BoolStatCheck(AActor* Actor, FStatsEnum Stat, UObject* __WorldContext, bool& HasStat);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static void DualActorStatCheck(AActor* Actor1, FStatsEnum Stat1, AActor* Actor2, FStatsEnum Stat2, UObject* __WorldContext, bool& BothActors_have_Stats);  // parameters 0x39
    UFUNCTION(BlueprintCallable) static void HasAllBoolStatCheck(AActor* Actor, TArray<FItemsStaticEnum>& Stat, UObject* __WorldContext, bool& HasAllStats);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static void HasAnyBoolStatCheck(AActor* Actor, TArray<FStatsEnum>& Stat, UObject* __WorldContext, bool& HasSomeStats);  // parameters 0x21
};
