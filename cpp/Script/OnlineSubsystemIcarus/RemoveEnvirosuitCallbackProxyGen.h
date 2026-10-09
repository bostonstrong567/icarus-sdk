// /Script/OnlineSubsystemIcarus.RemoveEnvirosuitCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/RemoveEnvirosuitCallbackProxyGen.h

UCLASS()
class URemoveEnvirosuitCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnRemoveEnvirosuitEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnRemoveEnvirosuitEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqRemoveEnvirosuit ReqRemoveEnvirosuit;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static URemoveEnvirosuitCallbackProxyGen* RemoveEnvirosuit(const FReqRemoveEnvirosuit& Request);  // parameters 0x20
};
