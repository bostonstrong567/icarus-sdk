// /Script/OnlineSubsystemIcarus.ResetCharacterProspectStateCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/ResetCharacterProspectStateCallbackProxyGen.h

UCLASS()
class UResetCharacterProspectStateCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnResetCharacterProspectStateEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnResetCharacterProspectStateEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqResetCharacterProspectState ReqResetCharacterProspectState;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UResetCharacterProspectStateCallbackProxyGen* ResetCharacterProspectState(const FReqResetCharacterProspectState& Request);  // parameters 0x20
};
