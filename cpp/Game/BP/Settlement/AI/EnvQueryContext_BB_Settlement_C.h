// /Game/BP/Settlement/AI/EnvQueryContext_BB_Settlement.EnvQueryContext_BB_Settlement_C
// Derives from: UEnvQueryContext_BB_TargetActor_C > UEnvQueryContext_BlueprintBase > UEnvQueryContext > UObject
// size 0x38, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UEnvQueryContext_BB_Settlement_C : public UEnvQueryContext_BB_TargetActor_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor) const;  // parameters 0x18
};
