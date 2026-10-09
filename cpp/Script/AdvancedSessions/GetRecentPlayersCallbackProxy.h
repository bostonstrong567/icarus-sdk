// /Script/AdvancedSessions.GetRecentPlayersCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x90, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/GetRecentPlayersCallbackProxy.h

UCLASS()
class UGetRecentPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FBlueprintGetRecentPlayersDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FBlueprintGetRecentPlayersDelegate OnFailure;  // 0x0040, size 0x10
private:
    FDelegateHandle DelegateHandle;  // 0x0050, not reflected
    FBPUniqueNetId cUniqueNetId;  // 0x0058, not reflected
    TDelegate<void __cdecl(FUniqueNetId const &,FString const &,bool,FString const &),FDefaultDelegateUserPolicy> QueryRecentPlayersCompleteDelegate;  // 0x0078, not reflected
    UObject * WorldContextObject;  // 0x0088, not reflected
public:
    UFUNCTION(BlueprintCallable) static UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId);  // parameters 0x30
};
