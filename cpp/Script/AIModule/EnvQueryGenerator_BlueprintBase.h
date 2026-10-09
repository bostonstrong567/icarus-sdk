// /Script/AIModule.EnvQueryGenerator_BlueprintBase
// Derives from: UEnvQueryGenerator > UEnvQueryNode > UObject
// size 0x80, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Generators/EnvQueryGenerator_BlueprintBase.h

UCLASS(Abstract, EditInlineNew)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
public:
    UPROPERTY(EditAnywhere) FText GeneratorsActionDescription;  // 0x0050, size 0x18
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> Context;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryItemType> GeneratedItemType;  // 0x0070, size 0x8
private:
    FEnvQueryInstance * CachedQueryInstance;  // 0x0078, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddGeneratedActor(AActor* GeneratedActor) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddGeneratedVector(FVector GeneratedVector) const;  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void DoItemGeneration(const TArray<FVector>& ContextLocations) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UObject* GetQuerier() const;  // parameters 0x8
};
