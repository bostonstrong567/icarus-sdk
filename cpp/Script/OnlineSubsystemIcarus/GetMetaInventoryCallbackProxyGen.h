// /Script/OnlineSubsystemIcarus.GetMetaInventoryCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetMetaInventoryCallbackProxyGen.h

UCLASS()
class UGetMetaInventoryCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetMetaInventoryEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetMetaInventoryEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqGetMetaInventory ReqGetMetaInventory;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UGetMetaInventoryCallbackProxyGen* GetMetaInventory(const FReqGetMetaInventory& Request);  // parameters 0x20
};
