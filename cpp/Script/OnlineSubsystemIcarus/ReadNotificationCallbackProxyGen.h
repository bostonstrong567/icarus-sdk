// /Script/OnlineSubsystemIcarus.ReadNotificationCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/ReadNotificationCallbackProxyGen.h

UCLASS()
class UReadNotificationCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnReadNotificationEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnReadNotificationEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqReadNotification ReqReadNotification;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UReadNotificationCallbackProxyGen* ReadNotification(const FReqReadNotification& Request);  // parameters 0x28
};
