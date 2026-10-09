// /Script/OnlineSubsystemIcarus.CreateDropshipCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x88, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/CreateDropshipCallbackProxyGen.h

UCLASS()
class UCreateDropshipCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnCreateDropshipEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnCreateDropshipEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqCreateDropship ReqCreateDropship;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UCreateDropshipCallbackProxyGen* CreateDropship(const FReqCreateDropship& Request);  // parameters 0x40
};
