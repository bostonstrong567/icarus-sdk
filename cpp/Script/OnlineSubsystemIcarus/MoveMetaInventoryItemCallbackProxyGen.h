// /Script/OnlineSubsystemIcarus.MoveMetaInventoryItemCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x90, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/MoveMetaInventoryItemCallbackProxyGen.h

UCLASS()
class UMoveMetaInventoryItemCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnMoveMetaInventoryItemEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMoveMetaInventoryItemEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqMoveMetaInventoryItem ReqMoveMetaInventoryItem;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UMoveMetaInventoryItemCallbackProxyGen* MoveMetaInventoryItem(const FReqMoveMetaInventoryItem& Request);  // parameters 0x48
};
