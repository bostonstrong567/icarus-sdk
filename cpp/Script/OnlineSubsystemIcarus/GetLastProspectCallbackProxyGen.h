// /Script/OnlineSubsystemIcarus.GetLastProspectCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetLastProspectCallbackProxyGen.h

UCLASS()
class UGetLastProspectCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetLastProspectEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetLastProspectEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqGetLastProspect ReqGetLastProspect;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UGetLastProspectCallbackProxyGen* GetLastProspect(const FReqGetLastProspect& Request);  // parameters 0x20
};
