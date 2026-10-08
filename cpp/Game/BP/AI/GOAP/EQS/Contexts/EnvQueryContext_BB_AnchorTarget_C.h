// /Game/BP/AI/GOAP/EQS/Contexts/EnvQueryContext_BB_AnchorTarget.EnvQueryContext_BB_AnchorTarget_C
// Derives from: UEnvQueryContext_BlueprintBase > UEnvQueryContext > UObject
// size 0x38, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UEnvQueryContext_BB_AnchorTarget_C : public UEnvQueryContext_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BlackboardKeyName;  // 0x0030, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor) const;  // parameters 0x18
};
