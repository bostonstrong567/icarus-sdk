// /Script/OnlineSubsystemIcarus.SyncAccountFlagsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/SyncAccountFlagsCallbackProxyGen.h

UCLASS()
class USyncAccountFlagsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnSyncAccountFlagsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSyncAccountFlagsEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqSyncAccountFlags ReqSyncAccountFlags;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static USyncAccountFlagsCallbackProxyGen* SyncAccountFlags(const FReqSyncAccountFlags& Request);  // parameters 0x28
};
