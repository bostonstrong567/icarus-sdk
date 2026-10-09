// /Script/OnlineSubsystemIcarus.RemoveMetaItemCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/RemoveMetaItemCallbackProxyGen.h

UCLASS()
class URemoveMetaItemCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnRemoveMetaItemEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnRemoveMetaItemEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqRemoveMetaInventoryItem ReqRemoveMetaInventoryItem;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static URemoveMetaItemCallbackProxyGen* RemoveMetaItem(const FReqRemoveMetaInventoryItem& Request);  // parameters 0x28
};
