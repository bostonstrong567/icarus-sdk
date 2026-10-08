// /Script/AIModule.EnvQueryInstanceBlueprintWrapper
// Derives from: UObject
// size 0x78, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h

UCLASS()
class UEnvQueryInstanceBlueprintWrapper : public UObject, public IEQSQueryResultSourceInterface
{
public:
    UPROPERTY(BlueprintReadOnly) int32 QueryID;  // 0x0030, size 0x4
    UPROPERTY(BlueprintReadOnly) TSubclassOf<UEnvQueryItemType> ItemType;  // 0x0058, size 0x8
    UPROPERTY(BlueprintReadOnly) int32 OptionIndex;  // 0x0060, size 0x4
    UPROPERTY(BlueprintAssignable) FEQSQueryDoneSignature OnQueryFinishedEvent;  // 0x0068, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    EEnvQueryRunMode::Type RunMode;  // 0x0034, protected
    TSharedPtr<FEnvQueryResult,0> QueryResult;  // 0x0038, protected
    TSharedPtr<FEnvQueryInstance,0> QueryInstance;  // 0x0048, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetItemScore(int32 ItemIndex) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool GetQueryResultsAsActors(TArray<AActor*>& ResultActors) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<AActor*> GetResultsAsActors() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FVector> GetResultsAsLocations() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetNamedParam(FName ParamName, float Value);  // parameters 0xC
};
