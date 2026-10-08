// /Script/AdvancedSessions.GetRecentPlayersCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x90, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/GetRecentPlayersCallbackProxy.h

UCLASS()
class UGetRecentPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FBlueprintGetRecentPlayersDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FBlueprintGetRecentPlayersDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FDelegateHandle DelegateHandle;  // 0x0050, private
    FBPUniqueNetId cUniqueNetId;  // 0x0058, private
    TDelegate<void __cdecl(FUniqueNetId const &,FString const &,bool,FString const &),FDefaultDelegateUserPolicy> QueryRecentPlayersCompleteDelegate;  // 0x0078, private
    UObject * WorldContextObject;  // 0x0088, private

    UFUNCTION(BlueprintCallable) static UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId);  // parameters 0x30
};
