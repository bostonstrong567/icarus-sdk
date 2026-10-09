// /Script/OnlineSubsystemIcarus.SelectEnvirosuitCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/SelectEnvirosuitCallbackProxyGen.h

UCLASS()
class USelectEnvirosuitCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnSelectEnvirosuitEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSelectEnvirosuitEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqSelectEnvirosuit ReqSelectEnvirosuit;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static USelectEnvirosuitCallbackProxyGen* SelectEnvirosuit(const FReqSelectEnvirosuit& Request);  // parameters 0x30
};
