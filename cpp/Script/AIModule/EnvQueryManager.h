// /Script/AIModule.EnvQueryManager
// Derives from: UAISubsystem > UObject
// size 0x140, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h

UCLASS(Transient, Config=Game)
class UEnvQueryManager : public UAISubsystem
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    TArray<TSharedPtr<FEnvQueryInstance,0>,TSizedDefaultAllocator<32> > RunningQueries;  // 0x0040, not reflected
    int32 NumRunningQueriesAbortedSinceLastUpdate;  // 0x0050, not reflected
    TMap<int,TWeakPtr<FEnvQueryInstance,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakPtr<FEnvQueryInstance,0>,0> > ExternalQueries;  // 0x0058, not reflected
    UPROPERTY(Transient) TArray<FEnvQueryInstanceCache> InstanceCache;  // 0x00A8, size 0x10
    UPROPERTY(Transient) TArray<UEnvQueryContext*> LocalContexts;  // 0x00B8, size 0x10
    UPROPERTY() TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;  // 0x00C8, size 0x10
    TMap<FName,UEnvQueryContext *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UEnvQueryContext *,0> > LocalContextMap;  // 0x00D8, not reflected
    int32 NextQueryID;  // 0x0128, not reflected
    UPROPERTY(Config) float MaxAllowedTestingTime;  // 0x012C, size 0x4
    UPROPERTY(Config) bool bTestQueriesUsingBreadth;  // 0x0130, size 0x1
    UPROPERTY(Config) int32 QueryCountWarningThreshold;  // 0x0134, size 0x4
    UPROPERTY(Config) double QueryCountWarningInterval;  // 0x0138, size 0x8
public:
    UFUNCTION(BlueprintCallable) static UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, TSubclassOf<UEnvQueryInstanceBlueprintWrapper> WrapperClass);  // parameters 0x30

    // Virtual functions that start here:
    //   OnWorldCleanup
};
