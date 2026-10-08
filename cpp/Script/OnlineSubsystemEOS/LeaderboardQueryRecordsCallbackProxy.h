// /Script/OnlineSubsystemEOS.LeaderboardQueryRecordsCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x88, declared in Icarus/Plugins/OnlineSubsystemEOS/Source/OnlineSubsystemEOS/Private/Async/LeaderboardQueryRecordsCallbackProxy.h

UCLASS(MinimalAPI)
class ULeaderboardQueryRecordsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FLeaderboardQueryRecordsResult OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FLeaderboardQueryRecordsResult OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(bool,TArray<FLeaderboardsRecordData,TSizedDefaultAllocator<32> > const &),FDefaultDelegateUserPolicy> LeaderboardQueryRecordsCompleteDelegate;  // 0x0050, private
    FDelegateHandle LeaderboardQueryRecordsCompleteDelegateHandle;  // 0x0060, private
    TSharedPtr<FOnlineLeaderboardRead,1> ReadObject;  // 0x0068, private
    FName StatName;  // 0x0078, private
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x0080, private

    UFUNCTION(BlueprintCallable) static ULeaderboardQueryRecordsCallbackProxy* QueryLeaderboardRecords(FName LeaderboarId);  // parameters 0x10
};
