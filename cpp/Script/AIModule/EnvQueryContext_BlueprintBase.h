// /Script/AIModule.EnvQueryContext_BlueprintBase
// Derives from: UEnvQueryContext > UObject
// size 0x30, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h

UCLASS(Abstract, EditInlineNew, MinimalAPI)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{
public:
    UEnvQueryContext_BlueprintBase::ECallMode CallMode;  // 0x0028, not reflected

    UFUNCTION(BlueprintImplementableEvent) void ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet) const;  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet) const;  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor) const;  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation) const;  // parameters 0x1C
};
