// /Game/BP/AI/GOAP/EQS/Contexts/EnvQueryContext_RecentlyBlockedPathLocations.EnvQueryContext_RecentlyBlockedPathLocations_C
// Derives from: UEnvQueryContext_BlueprintBase > UEnvQueryContext > UObject
// size 0x30, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UEnvQueryContext_RecentlyBlockedPathLocations_C : public UEnvQueryContext_BlueprintBase
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet) const;  // parameters 0x20
};
