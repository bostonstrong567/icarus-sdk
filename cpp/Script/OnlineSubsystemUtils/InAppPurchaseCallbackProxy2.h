// /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Derives from: UObject
// size 0xA8, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/InAppPurchaseCallbackProxy2.h

UCLASS(MinimalAPI)
class UInAppPurchaseCallbackProxy2 : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FInAppPurchaseResult2 OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FInAppPurchaseResult2 OnFailure;  // 0x0038, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(FOnlineError const &,TSharedRef<FPurchaseReceipt,0> const &),FDefaultDelegateUserPolicy> InAppPurchaseCompleteDelegate;  // 0x0048, private
    FDelegateHandle InAppPurchaseCompleteDelegateHandle;  // 0x0058, private
    bool bFailedToEvenSubmit;  // 0x0060, private
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x0064, private
    bool bWasSuccessful;  // 0x006C, private
    TArray<FInAppPurchaseReceiptInfo2,TSizedDefaultAllocator<32> > SavedReceipts;  // 0x0070, private
    TSharedPtr<FUniqueNetId const ,0> PurchasingPlayer;  // 0x0080, private
    TSharedPtr<IOnlinePurchase,1> PurchaseInterface;  // 0x0090, private
    EInAppPurchaseStatus SavedPurchaseStatus;  // 0x00A0, private

    UFUNCTION(BlueprintCallable) static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, const FInAppPurchaseProductRequest2& ProductRequest);  // parameters 0x28
    UFUNCTION(BlueprintCallable) static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(APlayerController* PlayerController);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(APlayerController* PlayerController);  // parameters 0x10
};
