// /Script/OnlineSubsystemIcarus.DeleteNotificationCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/DeleteNotificationCallbackProxyGen.h

UCLASS()
class UDeleteNotificationCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnDeleteNotificationEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnDeleteNotificationEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqDeleteNotification ReqDeleteNotification;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UDeleteNotificationCallbackProxyGen* DeleteNotification(const FReqDeleteNotification& Request);  // parameters 0x28
};
