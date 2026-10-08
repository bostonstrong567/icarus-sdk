// /Game/BP/AI/GOAP/EQS/Contexts/EnvQueryContext_SpawnAttractors.EnvQueryContext_SpawnAttractors_C
// Derives from: UEnvQueryContext_BlueprintBase > UEnvQueryContext > UObject
// size 0x30, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UEnvQueryContext_SpawnAttractors_C : public UEnvQueryContext_BlueprintBase
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet) const;  // parameters 0x20
};
