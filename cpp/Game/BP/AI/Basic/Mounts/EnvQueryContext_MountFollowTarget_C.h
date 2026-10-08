// /Game/BP/AI/Basic/Mounts/EnvQueryContext_MountFollowTarget.EnvQueryContext_MountFollowTarget_C
// Derives from: UEnvQueryContext_BlueprintBase > UEnvQueryContext > UObject
// size 0x30, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UEnvQueryContext_MountFollowTarget_C : public UEnvQueryContext_BlueprintBase
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor) const;  // parameters 0x18
};
