// /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x90, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h

UCLASS(MinimalAPI)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FBlueprintFindSessionsResultDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FBlueprintFindSessionsResultDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    TDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> Delegate;  // 0x0058, private
    FDelegateHandle DelegateHandle;  // 0x0068, private
    TSharedPtr<FOnlineSessionSearch,0> SearchObject;  // 0x0070, private
    bool bUseLAN;  // 0x0080, private
    int32 MaxResults;  // 0x0084, private
    UObject * WorldContextObject;  // 0x0088, private

    UFUNCTION(BlueprintCallable) static UFindSessionsCallbackProxy* FindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bUseLAN);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetCurrentPlayers(const FBlueprintSessionResult& Result);  // parameters 0x10C
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetMaxPlayers(const FBlueprintSessionResult& Result);  // parameters 0x10C
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 GetPingInMs(const FBlueprintSessionResult& Result);  // parameters 0x10C
    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetServerName(const FBlueprintSessionResult& Result);  // parameters 0x118
};
