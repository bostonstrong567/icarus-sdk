// /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Derives from: UObject
// size 0x90, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/InAppPurchaseRestoreCallbackProxy.h

UCLASS(MinimalAPI)
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FInAppPurchaseRestoreResult OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FInAppPurchaseRestoreResult OnFailure;  // 0x0038, size 0x10
private:
    TDelegate<void __cdecl(enum EInAppPurchaseState::Type),FDefaultDelegateUserPolicy> InAppPurchaseRestoreCompleteDelegate;  // 0x0048, not reflected
    FDelegateHandle InAppPurchaseRestoreCompleteDelegateHandle;  // 0x0058, not reflected
    TSharedPtr<FOnlineInAppPurchaseRestoreRead,1> ReadObject;  // 0x0060, not reflected
    bool bFailedToEvenSubmit;  // 0x0070, not reflected
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x0074, not reflected
    EInAppPurchaseState::Type SavedPurchaseState;  // 0x007C, not reflected
    TArray<FInAppPurchaseRestoreInfo,TSizedDefaultAllocator<32> > SavedProductInformation;  // 0x0080, not reflected
public:
    UFUNCTION(BlueprintCallable) static UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, APlayerController* PlayerController);  // parameters 0x20
};
