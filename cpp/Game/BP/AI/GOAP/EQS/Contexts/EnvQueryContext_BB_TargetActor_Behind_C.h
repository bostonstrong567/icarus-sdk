// /Game/BP/AI/GOAP/EQS/Contexts/EnvQueryContext_BB_TargetActor_Behind.EnvQueryContext_BB_TargetActor_Behind_C
// Derives from: UEnvQueryContext_BlueprintBase > UEnvQueryContext > UObject
// size 0x40, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UEnvQueryContext_BB_TargetActor_Behind_C : public UEnvQueryContext_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BlackboardKeyName;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName FallbackKeyName;  // 0x0038, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation) const;  // parameters 0x1C
};
