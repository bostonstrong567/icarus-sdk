// /Script/OnlineSubsystemIcarus.UpdateCosmeticsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0xC8, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/UpdateCosmeticsCallbackProxyGen.h

UCLASS()
class UUpdateCosmeticsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnUpdateCosmeticsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUpdateCosmeticsEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqUpdateCosmetics ReqUpdateCosmetics;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UUpdateCosmeticsCallbackProxyGen* UpdateCosmetics(const FReqUpdateCosmetics& Request);  // parameters 0x80
};
