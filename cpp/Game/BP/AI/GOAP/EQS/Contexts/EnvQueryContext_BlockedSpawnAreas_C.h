// /Game/BP/AI/GOAP/EQS/Contexts/EnvQueryContext_BlockedSpawnAreas.EnvQueryContext_BlockedSpawnAreas_C
// Derives from: UEnvQueryContext_BlueprintBase > UEnvQueryContext > UObject
// size 0x30, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UEnvQueryContext_BlockedSpawnAreas_C : public UEnvQueryContext_BlueprintBase
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet) const;  // parameters 0x20
};
