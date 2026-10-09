// /Script/OnlineSubsystem.InAppPurchaseProductInfo
// size 0xA8, declared in Engine/Plugins/Online/OnlineSubsystem/Source/Public/Interfaces/OnlineStoreInterface.h

USTRUCT()
struct FInAppPurchaseProductInfo
{
public:
    UPROPERTY(BlueprintReadOnly) FString Identifier;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadOnly) FString TransactionIdentifier;  // 0x0010, size 0x10
    UPROPERTY(BlueprintReadOnly) FString DisplayName;  // 0x0020, size 0x10
    UPROPERTY(BlueprintReadOnly) FString DisplayDescription;  // 0x0030, size 0x10
    UPROPERTY(BlueprintReadOnly) FString DisplayPrice;  // 0x0040, size 0x10
    UPROPERTY(BlueprintReadOnly) float RawPrice;  // 0x0050, size 0x4
    UPROPERTY(BlueprintReadOnly) FString CurrencyCode;  // 0x0058, size 0x10
    UPROPERTY(BlueprintReadOnly) FString CurrencySymbol;  // 0x0068, size 0x10
    UPROPERTY(BlueprintReadOnly) FString DecimalSeparator;  // 0x0078, size 0x10
    UPROPERTY(BlueprintReadOnly) FString GroupingSeparator;  // 0x0088, size 0x10
    UPROPERTY(BlueprintReadOnly) FString ReceiptData;  // 0x0098, size 0x10
};
