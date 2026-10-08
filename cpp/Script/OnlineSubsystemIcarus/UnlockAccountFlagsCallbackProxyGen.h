// /Script/OnlineSubsystemIcarus.UnlockAccountFlagsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x70, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/UnlockAccountFlagsCallbackProxyGen.h

UCLASS()
class UUnlockAccountFlagsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnUnlockAccountFlagsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUnlockAccountFlagsEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqUnlockAccountFlags ReqUnlockAccountFlags;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UUnlockAccountFlagsCallbackProxyGen* UnlockAccountFlags(const FReqUnlockAccountFlags& Request);  // parameters 0x28
};
