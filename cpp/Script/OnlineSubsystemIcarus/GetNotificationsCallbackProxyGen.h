// /Script/OnlineSubsystemIcarus.GetNotificationsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetNotificationsCallbackProxyGen.h

UCLASS()
class UGetNotificationsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetNotificationsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetNotificationsEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqGetNotifications ReqGetNotifications;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UGetNotificationsCallbackProxyGen* GetNotifications(const FReqGetNotifications& Request);  // parameters 0x20
};
