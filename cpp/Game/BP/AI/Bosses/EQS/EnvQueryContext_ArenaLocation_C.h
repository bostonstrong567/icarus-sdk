// /Game/BP/AI/Bosses/EQS/EnvQueryContext_ArenaLocation.EnvQueryContext_ArenaLocation_C
// Derives from: UEnvQueryContext_BlueprintBase > UEnvQueryContext > UObject
// size 0x30, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UEnvQueryContext_ArenaLocation_C : public UEnvQueryContext_BlueprintBase
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation) const;  // parameters 0x1C
};
