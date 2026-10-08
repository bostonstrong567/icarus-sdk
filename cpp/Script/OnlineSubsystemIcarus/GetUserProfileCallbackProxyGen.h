// /Script/OnlineSubsystemIcarus.GetUserProfileCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x60, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetUserProfileCallbackProxyGen.h

UCLASS()
class UGetUserProfileCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetUserProfileEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetUserProfileEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqGetUserProfile ReqGetUserProfile;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UGetUserProfileCallbackProxyGen* GetUserProfile(const FReqGetUserProfile& Request);  // parameters 0x18
};
