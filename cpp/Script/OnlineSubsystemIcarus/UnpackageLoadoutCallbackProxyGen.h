// /Script/OnlineSubsystemIcarus.UnpackageLoadoutCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/UnpackageLoadoutCallbackProxyGen.h

UCLASS()
class UUnpackageLoadoutCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnUnpackageLoadoutEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUnpackageLoadoutEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqUnpackageLoadout ReqUnpackageLoadout;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UUnpackageLoadoutCallbackProxyGen* UnpackageLoadout(const FReqUnpackageLoadout& Request);  // parameters 0x20
};
