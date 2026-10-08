// /Script/OnlineSubsystemIcarus.CreateCharacterCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0xC0, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/CreateCharacterCallbackProxyGen.h

UCLASS()
class UCreateCharacterCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnCreateCharacterEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnCreateCharacterEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqCreateCharacter ReqCreateCharacter;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UCreateCharacterCallbackProxyGen* CreateCharacter(const FReqCreateCharacter& Request);  // parameters 0x78
};
