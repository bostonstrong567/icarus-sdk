// /Game/BP/AI/GOAP/EQS/Contexts/EnvQueryContext_NearbyNavCheckpoints.EnvQueryContext_NearbyNavCheckpoints_C
// Derives from: UEnvQueryContext_BlueprintBase > UEnvQueryContext > UObject
// size 0x30, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UEnvQueryContext_NearbyNavCheckpoints_C : public UEnvQueryContext_BlueprintBase
{
public:

    UFUNCTION(BlueprintCallable) void IsTileAdjacent(int32 A, int32 B, bool& A_AdjacentToB) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet) const;  // parameters 0x20
};
