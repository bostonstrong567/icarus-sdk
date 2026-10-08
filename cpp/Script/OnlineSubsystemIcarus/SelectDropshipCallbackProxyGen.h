// /Script/OnlineSubsystemIcarus.SelectDropshipCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/SelectDropshipCallbackProxyGen.h

UCLASS()
class USelectDropshipCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnSelectDropshipEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnSelectDropshipEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqSelectDropship ReqSelectDropship;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static USelectDropshipCallbackProxyGen* SelectDropship(const FReqSelectDropship& Request);  // parameters 0x20
};
