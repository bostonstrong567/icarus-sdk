// /Script/OnlineSubsystemIcarus.PackageLoadoutCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/PackageLoadoutCallbackProxyGen.h

UCLASS()
class UPackageLoadoutCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnPackageLoadoutEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnPackageLoadoutEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqPackageLoadout ReqPackageLoadout;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UPackageLoadoutCallbackProxyGen* PackageLoadout(const FReqPackageLoadout& Request);  // parameters 0x20
};
