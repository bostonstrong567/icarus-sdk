// /Script/OnlineSubsystemIcarus.GetCharacterLoadoutCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetCharacterLoadoutCallbackProxyGen.h

UCLASS()
class UGetCharacterLoadoutCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetCharacterLoadoutEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetCharacterLoadoutEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqGetCharacterLoadout ReqGetCharacterLoadout;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UGetCharacterLoadoutCallbackProxyGen* GetCharacterLoadout(const FReqGetCharacterLoadout& Request);  // parameters 0x20
};
