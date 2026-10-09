// /Script/OnlineSubsystemIcarus.RepairWorkshopItemCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/RepairWorkshopItemCallbackProxyGen.h

UCLASS()
class URepairWorkshopItemCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnRepairWorkshopItemEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnRepairWorkshopItemEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqRepairWorkshopItem ReqRepairWorkshopItem;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static URepairWorkshopItemCallbackProxyGen* RepairWorkshopItem(const FReqRepairWorkshopItem& Request);  // parameters 0x28
};
