// /Script/OnlineSubsystemIcarus.GetProspectCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x80, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetProspectCallbackProxyGen.h

UCLASS()
class UGetProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetProspectEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetProspectEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqGetProspect ReqGetProspect;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UGetProspectCallbackProxyGen* GetProspect(const FReqGetProspect& Request);  // parameters 0x38
};
