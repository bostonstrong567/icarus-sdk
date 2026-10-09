// /Script/AdvancedSteamSessions.JoinSessionCallbackProxyAdvanced
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x198, declared in Icarus/Plugins/AdvancedSteamSessions/Source/AdvancedSteamSessions/Classes/JoinSessionCallbackProxyAdvanced.h

UCLASS()
class UJoinSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10
private:
    FName SessionName;  // 0x0050, not reflected
    FString Options;  // 0x0058, not reflected
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0068, not reflected
    FOnlineSessionSearchResult OnlineSearchResult;  // 0x0070, not reflected
    TDelegate<void __cdecl(FName,enum EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy> Delegate;  // 0x0178, not reflected
    FDelegateHandle DelegateHandle;  // 0x0188, not reflected
    UObject * WorldContextObject;  // 0x0190, not reflected
public:
    UFUNCTION(BlueprintCallable) static UJoinSessionCallbackProxyAdvanced* JoinAdvancedSession(UObject* WorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult, FName SessionName, FString Options);  // parameters 0x138
};
