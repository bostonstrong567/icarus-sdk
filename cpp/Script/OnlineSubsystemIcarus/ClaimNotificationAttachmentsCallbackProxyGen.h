// /Script/OnlineSubsystemIcarus.ClaimNotificationAttachmentsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/ClaimNotificationAttachmentsCallbackProxyGen.h

UCLASS()
class UClaimNotificationAttachmentsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnClaimNotificationAttachmentsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnClaimNotificationAttachmentsEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqClaimNotificationAttachments ReqClaimNotificationAttachments;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UClaimNotificationAttachmentsCallbackProxyGen* ClaimNotificationAttachments(const FReqClaimNotificationAttachments& Request);  // parameters 0x28
};
