// /Script/OnlineSubsystemIcarus.UpdateCharacterProspectLocationCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/UpdateCharacterProspectLocationCallbackProxyGen.h

UCLASS()
class UUpdateCharacterProspectLocationCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnUpdateCharacterProspectLocationEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUpdateCharacterProspectLocationEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqUpdateCharacterProspectLocation ReqUpdateCharacterProspectLocation;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UUpdateCharacterProspectLocationCallbackProxyGen* UpdateCharacterProspectLocation(const FReqUpdateCharacterProspectLocation& Request);  // parameters 0x30
};
