// /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo
// size 0x30, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/InAppPurchaseCallbackProxy.h

USTRUCT()
struct FInAppPurchaseReceiptInfo
{
    UPROPERTY(BlueprintReadOnly) FString ItemName;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadOnly) FString ItemId;  // 0x0010, size 0x10
    UPROPERTY(BlueprintReadOnly) FString ValidationInfo;  // 0x0020, size 0x10
};
