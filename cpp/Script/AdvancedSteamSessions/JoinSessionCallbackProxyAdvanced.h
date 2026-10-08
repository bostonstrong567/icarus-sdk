// /Script/AdvancedSteamSessions.JoinSessionCallbackProxyAdvanced
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x198, declared in Icarus/Plugins/AdvancedSteamSessions/Source/AdvancedSteamSessions/Classes/JoinSessionCallbackProxyAdvanced.h

UCLASS()
class UJoinSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FName SessionName;  // 0x0050, private
    FString Options;  // 0x0058, private
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0068, private
    FOnlineSessionSearchResult OnlineSearchResult;  // 0x0070, private
    TDelegate<void __cdecl(FName,enum EOnJoinSessionCompleteResult::Type),FDefaultDelegateUserPolicy> Delegate;  // 0x0178, private
    FDelegateHandle DelegateHandle;  // 0x0188, private
    UObject * WorldContextObject;  // 0x0190, private

    UFUNCTION(BlueprintCallable) static UJoinSessionCallbackProxyAdvanced* JoinAdvancedSession(UObject* WorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult, FName SessionName, FString Options);  // parameters 0x138
};
