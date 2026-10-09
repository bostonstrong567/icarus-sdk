// /Script/OnlineSubsystemIcarus.JoinProspectCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/JoinProspectCallbackProxyGen.h

UCLASS()
class UJoinProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnJoinProspectEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnJoinProspectEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqJoinProspect ReqJoinProspect;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UJoinProspectCallbackProxyGen* JoinProspect(const FReqJoinProspect& Request);  // parameters 0x20
};
