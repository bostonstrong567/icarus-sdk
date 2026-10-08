// /Script/OnlineSubsystemIcarus.GetMetaResourceCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x60, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetMetaResourceCallbackProxyGen.h

UCLASS()
class UGetMetaResourceCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetMetaResourceEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetMetaResourceEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqGetMetaResources ReqGetMetaResources;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UGetMetaResourceCallbackProxyGen* GetMetaResource(const FReqGetMetaResources& Request);  // parameters 0x18
};
