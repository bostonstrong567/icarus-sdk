// /Script/OnlineSubsystemIcarus.ModifyDropshipCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x90, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/ModifyDropshipCallbackProxyGen.h

UCLASS()
class UModifyDropshipCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnModifyDropshipEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnModifyDropshipEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqModifyDropship ReqModifyDropship;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UModifyDropshipCallbackProxyGen* ModifyDropship(const FReqModifyDropship& Request);  // parameters 0x48
};
