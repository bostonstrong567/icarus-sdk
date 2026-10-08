// /Script/OnlineSubsystemIcarus.UpdateCharacterLoadoutCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x1A0, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/UpdateCharacterLoadoutCallbackProxyGen.h

UCLASS()
class UUpdateCharacterLoadoutCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnUpdateCharacterLoadoutEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUpdateCharacterLoadoutEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqUpdateCharacterLoadout ReqUpdateCharacterLoadout;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UUpdateCharacterLoadoutCallbackProxyGen* UpdateCharacterLoadout(const FReqUpdateCharacterLoadout& Request);  // parameters 0x158
};
