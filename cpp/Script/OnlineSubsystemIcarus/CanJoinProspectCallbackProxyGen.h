// /Script/OnlineSubsystemIcarus.CanJoinProspectCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/CanJoinProspectCallbackProxyGen.h

UCLASS()
class UCanJoinProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnCanJoinProspectEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnCanJoinProspectEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqCanJoinProspect ReqCanJoinProspect;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UCanJoinProspectCallbackProxyGen* CanJoinProspect(const FReqCanJoinProspect& Request);  // parameters 0x30
};
