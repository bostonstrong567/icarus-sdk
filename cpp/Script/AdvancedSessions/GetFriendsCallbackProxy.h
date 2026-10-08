// /Script/AdvancedSessions.GetFriendsCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/GetFriendsCallbackProxy.h

UCLASS()
class UGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FBlueprintGetFriendsListDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FBlueprintGetFriendsListDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    TDelegate<void __cdecl(int,bool,FString const &,FString const &),FDefaultDelegateUserPolicy> FriendListReadCompleteDelegate;  // 0x0058, private
    UObject * WorldContextObject;  // 0x0068, private

    UFUNCTION(BlueprintCallable) static UGetFriendsCallbackProxy* GetAndStoreFriendsList(UObject* WorldContextObject, APlayerController* PlayerController);  // parameters 0x18
};
