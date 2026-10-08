// /Script/OnlineSubsystemIcarus.UnlockCharacterFlagsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/UnlockCharacterFlagsCallbackProxyGen.h

UCLASS()
class UUnlockCharacterFlagsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnUnlockCharacterFlagsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUnlockCharacterFlagsEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqUnlockCharacterFlags ReqUnlockCharacterFlags;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UUnlockCharacterFlagsCallbackProxyGen* UnlockCharacterFlags(const FReqUnlockCharacterFlags& Request);  // parameters 0x30
};
