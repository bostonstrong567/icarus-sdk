// /Script/AdvancedSessions.UpdateSessionCallbackProxyAdvanced
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x98, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/UpdateSessionCallbackProxyAdvanced.h

UCLASS()
class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnlineErrorDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(FName,bool),FDefaultDelegateUserPolicy> OnUpdateSessionCompleteDelegate;  // 0x0050, private
    FDelegateHandle OnUpdateSessionCompleteDelegateHandle;  // 0x0060, private
    int32 NumPublicConnections;  // 0x0068, private
    int32 NumPrivateConnections;  // 0x006C, private
    bool bUseLAN;  // 0x0070, private
    bool bAllowInvites;  // 0x0071, private
    TArray<FSessionPropertyKeyPair,TSizedDefaultAllocator<32> > ExtraSettings;  // 0x0078, private
    bool bRefreshOnlineData;  // 0x0088, private
    bool bAllowJoinInProgress;  // 0x0089, private
    bool bDedicatedServer;  // 0x008A, private
    UObject * WorldContextObject;  // 0x0090, private

    UFUNCTION(BlueprintCallable) static UUpdateSessionCallbackProxyAdvanced* UpdateSession(UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);  // parameters 0x30
};
