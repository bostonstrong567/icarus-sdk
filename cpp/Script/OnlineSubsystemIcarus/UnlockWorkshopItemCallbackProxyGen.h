// /Script/OnlineSubsystemIcarus.UnlockWorkshopItemCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/UnlockWorkshopItemCallbackProxyGen.h

UCLASS()
class UUnlockWorkshopItemCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnUnlockWorkshopItemEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUnlockWorkshopItemEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqUnlockWorkshopItem ReqUnlockWorkshopItem;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UUnlockWorkshopItemCallbackProxyGen* UnlockWorkshopItem(const FReqUnlockWorkshopItem& Request);  // parameters 0x28
};
