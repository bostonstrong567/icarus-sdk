// /Script/AdvancedSessions.FindFriendSessionCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x98, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/FindFriendSessionCallbackProxy.h

UCLASS()
class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FBlueprintFindFriendSessionDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FBlueprintFindFriendSessionDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    FBPUniqueNetId cUniqueNetId;  // 0x0058, private
    TDelegate<void __cdecl(int,bool,TArray<FOnlineSessionSearchResult,TSizedDefaultAllocator<32> > const &),FDefaultDelegateUserPolicy> OnFindFriendSessionCompleteDelegate;  // 0x0078, private
    FDelegateHandle FindFriendSessionCompleteDelegateHandle;  // 0x0088, private
    UObject * WorldContextObject;  // 0x0090, private

    UFUNCTION(BlueprintCallable) static UFindFriendSessionCallbackProxy* FindFriendSession(UObject* WorldContextObject, APlayerController* PlayerController, const FBPUniqueNetId& FriendUniqueNetId);  // parameters 0x38
};
