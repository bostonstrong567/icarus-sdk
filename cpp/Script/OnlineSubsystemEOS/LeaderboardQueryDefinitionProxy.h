// /Script/OnlineSubsystemEOS.LeaderboardQueryDefinitionProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemEOS/Source/OnlineSubsystemEOS/Private/Async/LeaderboardQueryDefinitionProxy.h

UCLASS(MinimalAPI)
class ULeaderboardQueryDefinitionProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnQueryLeaderboardDefinitionsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnQueryLeaderboardDefinitionsEventSignature OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(bool,TArray<FLeaderboardDef,TSizedDefaultAllocator<32> > const &),FDefaultDelegateUserPolicy> LeaderboardQueryDefinitionsCompleteDelegate;  // 0x0050, private
    FDelegateHandle LeaderboardQueryDefinitionsCompleteDelegateHandle;  // 0x0060, private

    UFUNCTION(BlueprintCallable) static ULeaderboardQueryDefinitionProxy* QueryLeaderboardDefinitions();  // parameters 0x8
};
