// /Script/OnlineSubsystemIcarus.SyncAccountTalentsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/SyncAccountTalentsCallbackProxyGen.h

UCLASS()
class USyncAccountTalentsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnSyncAccountTalentsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSyncAccountTalentsEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqSyncAccountTalents ReqSyncAccountTalents;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static USyncAccountTalentsCallbackProxyGen* SyncAccountTalents(const FReqSyncAccountTalents& Request);  // parameters 0x28
};
