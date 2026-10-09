// /Script/OnlineSubsystemIcarus.ProspectExpiredCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/ProspectExpiredCallbackProxyGen.h

UCLASS()
class UProspectExpiredCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnProspectExpiredEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnProspectExpiredEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqProspectExpired ReqProspectExpired;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UProspectExpiredCallbackProxyGen* ProspectExpired(const FReqProspectExpired& Request);  // parameters 0x20
};
