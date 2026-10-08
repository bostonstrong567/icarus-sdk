// /Script/OnlineSubsystemIcarus.SetResourceSplitCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x88, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/SetResourceSplitCallbackProxyGen.h

UCLASS()
class USetResourceSplitCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnSetResourceSplitEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSetResourceSplitEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqSetResourceSplit ReqSetResourceSplit;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static USetResourceSplitCallbackProxyGen* SetResourceSplit(const FReqSetResourceSplit& Request);  // parameters 0x40
};
