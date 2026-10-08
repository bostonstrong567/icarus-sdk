// /Script/OnlineSubsystemIcarus.GetLoadoutInventoryCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x68, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/GetLoadoutInventoryCallbackProxyGen.h

UCLASS()
class UGetLoadoutInventoryCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnGetLoadoutInventoryEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnGetLoadoutInventoryEventSignature OnFail;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FReqLoadoutInventory ReqLoadoutInventory;  // 0x0050, private

    UFUNCTION(BlueprintCallable) static UGetLoadoutInventoryCallbackProxyGen* GetLoadoutInventory(const FReqLoadoutInventory& Request);  // parameters 0x20
};
