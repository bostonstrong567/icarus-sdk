// /Script/AdvancedSessions.SendFriendInviteCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x90, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/SendFriendInviteCallbackProxy.h

UCLASS()
class USendFriendInviteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FBlueprintSendFriendInviteDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FBlueprintSendFriendInviteDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0050, private
    FBPUniqueNetId cUniqueNetId;  // 0x0058, private
    TDelegate<void __cdecl(int,bool,FUniqueNetId const &,FString const &,FString const &),FDefaultDelegateUserPolicy> OnSendInviteCompleteDelegate;  // 0x0078, private
    UObject * WorldContextObject;  // 0x0088, private

    UFUNCTION(BlueprintCallable) static USendFriendInviteCallbackProxy* SendFriendInvite(UObject* WorldContextObject, APlayerController* PlayerController, const FBPUniqueNetId& UniqueNetIDInvited);  // parameters 0x38
};
