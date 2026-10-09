// /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Derives from: UObject
// size 0xA8, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/InAppPurchaseCallbackProxy2.h

UCLASS(MinimalAPI)
class UInAppPurchaseCallbackProxy2 : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FInAppPurchaseResult2 OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FInAppPurchaseResult2 OnFailure;  // 0x0038, size 0x10
private:
    TDelegate<void __cdecl(FOnlineError const &,TSharedRef<FPurchaseReceipt,0> const &),FDefaultDelegateUserPolicy> InAppPurchaseCompleteDelegate;  // 0x0048, not reflected
    FDelegateHandle InAppPurchaseCompleteDelegateHandle;  // 0x0058, not reflected
    bool bFailedToEvenSubmit;  // 0x0060, not reflected
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x0064, not reflected
    bool bWasSuccessful;  // 0x006C, not reflected
    TArray<FInAppPurchaseReceiptInfo2,TSizedDefaultAllocator<32> > SavedReceipts;  // 0x0070, not reflected
    TSharedPtr<FUniqueNetId const ,0> PurchasingPlayer;  // 0x0080, not reflected
    TSharedPtr<IOnlinePurchase,1> PurchaseInterface;  // 0x0090, not reflected
    EInAppPurchaseStatus SavedPurchaseStatus;  // 0x00A0, not reflected
public:
    UFUNCTION(BlueprintCallable) static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, const FInAppPurchaseProductRequest2& ProductRequest);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(APlayerController* PlayerController);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(APlayerController* PlayerController);  // parameters 0x10
};
