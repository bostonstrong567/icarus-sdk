// /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
// size 0x110, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/InAppPurchaseQueryCallbackProxy2.h

USTRUCT()
struct FOnlineProxyStoreOffer
{
public:
    UPROPERTY(BlueprintReadOnly) FString OfferId;  // 0x0000, size 0x10
    UPROPERTY(BlueprintReadOnly) FText Title;  // 0x0010, size 0x18
    UPROPERTY(BlueprintReadOnly) FText Description;  // 0x0028, size 0x18
    UPROPERTY(BlueprintReadOnly) FText LongDescription;  // 0x0040, size 0x18
    UPROPERTY(BlueprintReadOnly) FText RegularPriceText;  // 0x0058, size 0x18
    UPROPERTY(BlueprintReadOnly) int32 RegularPrice;  // 0x0070, size 0x4
    UPROPERTY(BlueprintReadOnly) FText PriceText;  // 0x0078, size 0x18
    UPROPERTY(BlueprintReadOnly) int32 NumericPrice;  // 0x0090, size 0x4
    UPROPERTY(BlueprintReadOnly) FString CurrencyCode;  // 0x0098, size 0x10
    UPROPERTY(BlueprintReadOnly) FDateTime ReleaseDate;  // 0x00A8, size 0x8
    UPROPERTY(BlueprintReadOnly) FDateTime ExpirationDate;  // 0x00B0, size 0x8
    UPROPERTY(BlueprintReadOnly) EOnlineProxyStoreOfferDiscountType DiscountType;  // 0x00B8, size 0x1
    UPROPERTY(BlueprintReadOnly) TMap<FString, FString> DynamicFields;  // 0x00C0, size 0x50
};
