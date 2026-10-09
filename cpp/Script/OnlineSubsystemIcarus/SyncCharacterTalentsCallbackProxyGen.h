// /Script/OnlineSubsystemIcarus.SyncCharacterTalentsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/SyncCharacterTalentsCallbackProxyGen.h

UCLASS()
class USyncCharacterTalentsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnSyncCharacterTalentsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSyncCharacterTalentsEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqSyncCharacterTalents ReqSyncCharacterTalents;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static USyncCharacterTalentsCallbackProxyGen* SyncCharacterTalents(const FReqSyncCharacterTalents& Request);  // parameters 0x30
};
