// /Script/AdvancedSessions.UpdateSessionCallbackProxyAdvanced
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x98, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/UpdateSessionCallbackProxyAdvanced.h

UCLASS()
class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnlineErrorDelegate OnFailure;  // 0x0040, size 0x10
private:
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> OnUpdateSessionCompleteDelegate;  // 0x0050, not reflected
    FDelegateHandle OnUpdateSessionCompleteDelegateHandle;  // 0x0060, not reflected
    int32 NumPublicConnections;  // 0x0068, not reflected
    int32 NumPrivateConnections;  // 0x006C, not reflected
    bool bUseLAN;  // 0x0070, not reflected
    bool bAllowInvites;  // 0x0071, not reflected
    TArray<FSessionPropertyKeyPair,TSizedDefaultAllocator<32> > ExtraSettings;  // 0x0078, not reflected
    bool bRefreshOnlineData;  // 0x0088, not reflected
    bool bAllowJoinInProgress;  // 0x0089, not reflected
    bool bDedicatedServer;  // 0x008A, not reflected
    UObject * WorldContextObject;  // 0x0090, not reflected
public:
    UFUNCTION(BlueprintCallable) static UUpdateSessionCallbackProxyAdvanced* UpdateSession(UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);  // parameters 0x30
};
