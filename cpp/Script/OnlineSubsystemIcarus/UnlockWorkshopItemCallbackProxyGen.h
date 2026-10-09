// /Script/OnlineSubsystemIcarus.UnlockWorkshopItemCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/UnlockWorkshopItemCallbackProxyGen.h

UCLASS()
class UUnlockWorkshopItemCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnUnlockWorkshopItemEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUnlockWorkshopItemEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqUnlockWorkshopItem ReqUnlockWorkshopItem;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UUnlockWorkshopItemCallbackProxyGen* UnlockWorkshopItem(const FReqUnlockWorkshopItem& Request);  // parameters 0x28
};
