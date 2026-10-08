// /Script/OnlineSubsystemIcarus.UpdateCharacterProgressCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x88, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/UpdateCharacterProgressCallbackProxyGen.h

UCLASS()
class UUpdateCharacterProgressCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnUpdateCharacterProgressEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUpdateCharacterProgressEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqUpdateCharacterProgress ReqUpdateCharacterProgress;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UUpdateCharacterProgressCallbackProxyGen* UpdateCharacterProgress(const FReqUpdateCharacterProgress& Request);  // parameters 0x40
};
