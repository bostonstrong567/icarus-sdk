// /Script/OnlineSubsystemIcarus.GetCharacterProfileCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetCharacterProfileCallbackProxyGen.h

UCLASS()
class UGetCharacterProfileCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetCharacterProfileEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetCharacterProfileEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqGetCharacterProfile ReqGetCharacterProfile;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UGetCharacterProfileCallbackProxyGen* GetCharacterProfile(const FReqGetCharacterProfile& Request);  // parameters 0x20
};
