// /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Derives from: UObject
// size 0xA8, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/InAppPurchaseRestoreCallbackProxy2.h

UCLASS(MinimalAPI)
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FInAppPurchaseRestoreResult2 OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FInAppPurchaseRestoreResult2 OnFailure;  // 0x0038, size 0x10
private:
    bool bWasSuccessful;  // 0x0048, not reflected
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x004C, not reflected
    TArray<FInAppPurchaseRestoreInfo2,TSizedDefaultAllocator<32> > SavedReceipts;  // 0x0058, not reflected
    TSharedPtr<IOnlinePurchase,1> PurchaseInterface;  // 0x0068, not reflected
    FUniqueNetIdRepl PurchasingPlayer;  // 0x0078, not reflected
    EInAppPurchaseStatus SavedPurchaseStatus;  // 0x00A0, not reflected
public:
    UFUNCTION(BlueprintCallable) static UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, APlayerController* PlayerController);  // parameters 0x20
};
