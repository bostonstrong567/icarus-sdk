// /Script/OnlineSubsystemIcarus.UpdateProspectCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0xB8, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/UpdateProspectCallbackProxyGen.h

UCLASS()
class UUpdateProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnUpdateProspectEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUpdateProspectEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqUpdateProspect ReqUpdateProspect;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UUpdateProspectCallbackProxyGen* UpdateProspect(const FReqUpdateProspect& Request);  // parameters 0x70
};
