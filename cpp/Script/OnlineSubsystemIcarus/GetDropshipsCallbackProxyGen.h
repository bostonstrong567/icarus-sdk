// /Script/OnlineSubsystemIcarus.GetDropshipsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x60, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetDropshipsCallbackProxyGen.h

UCLASS()
class UGetDropshipsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetDropshipsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetDropshipsEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqGetDropships ReqGetDropships;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UGetDropshipsCallbackProxyGen* GetDropships(const FReqGetDropships& Request);  // parameters 0x18
};
