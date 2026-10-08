// /Script/OnlineSubsystemIcarus.SyncCharacterTalentsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/SyncCharacterTalentsCallbackProxyGen.h

UCLASS()
class USyncCharacterTalentsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnSyncCharacterTalentsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSyncCharacterTalentsEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqSyncCharacterTalents ReqSyncCharacterTalents;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static USyncCharacterTalentsCallbackProxyGen* SyncCharacterTalents(const FReqSyncCharacterTalents& Request);  // parameters 0x30
};
