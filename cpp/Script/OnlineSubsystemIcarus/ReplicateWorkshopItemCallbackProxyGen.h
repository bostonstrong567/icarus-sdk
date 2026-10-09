// /Script/OnlineSubsystemIcarus.ReplicateWorkshopItemCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/ReplicateWorkshopItemCallbackProxyGen.h

UCLASS()
class UReplicateWorkshopItemCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnReplicateWorkshopItemEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnReplicateWorkshopItemEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqReplicateWorkshopItem ReqReplicateWorkshopItem;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UReplicateWorkshopItemCallbackProxyGen* ReplicateWorkshopItem(const FReqReplicateWorkshopItem& Request);  // parameters 0x28
};
