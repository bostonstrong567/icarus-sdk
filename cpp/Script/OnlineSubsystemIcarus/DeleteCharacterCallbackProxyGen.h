// /Script/OnlineSubsystemIcarus.DeleteCharacterCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x58, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/DeleteCharacterCallbackProxyGen.h

UCLASS()
class UDeleteCharacterCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnDeleteCharacterEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnDeleteCharacterEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqDeleteCharacter ReqDeleteCharacter;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UDeleteCharacterCallbackProxyGen* DeleteCharacter(const FReqDeleteCharacter& Request);  // parameters 0x10
};
