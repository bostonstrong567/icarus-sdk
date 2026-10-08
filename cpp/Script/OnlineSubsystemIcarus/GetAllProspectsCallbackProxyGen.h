// /Script/OnlineSubsystemIcarus.GetAllProspectsCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x60, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetAllProspectsCallbackProxyGen.h

UCLASS()
class UGetAllProspectsCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetAllProspectsEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetAllProspectsEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqGetAllProspects ReqGetAllProspects;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UGetAllProspectsCallbackProxyGen* GetAllProspects(const FReqGetAllProspects& Request);  // parameters 0x18
};
