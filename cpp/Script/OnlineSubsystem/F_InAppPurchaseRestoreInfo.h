// /Script/OnlineSubsystem.InAppPurchaseRestoreInfo
// size 0x30, declared in Engine/Plugins/Online/OnlineSubsystem/Source/Public/Interfaces/OnlineStoreInterface.h

USTRUCT()
struct FInAppPurchaseRestoreInfo
{
    UPROPERTY(BlueprintReadOnly) FString Identifier;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadOnly) FString ReceiptData;  // 0x0010, size 0x10
    UPROPERTY(BlueprintReadOnly) FString TransactionIdentifier;  // 0x0020, size 0x10
};
