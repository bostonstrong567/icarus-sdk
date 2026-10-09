// /Script/OnlineSubsystemIcarus.GetCharactersCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x58, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetCharactersCallbackProxyGen.h

UCLASS()
class UGetCharactersCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetCharactersEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetCharactersEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqGetCharacters ReqGetCharacters;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UGetCharactersCallbackProxyGen* GetCharacters(const FReqGetCharacters& Request);  // parameters 0x10
};
