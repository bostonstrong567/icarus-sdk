// /Script/OnlineSubsystemIcarus.ResetCharacterCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/ResetCharacterCallbackProxyGen.h

UCLASS()
class UResetCharacterCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnResetCharacterEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnResetCharacterEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqResetCharacter ReqResetCharacter;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UResetCharacterCallbackProxyGen* ResetCharacter(const FReqResetCharacter& Request);  // parameters 0x20
};
