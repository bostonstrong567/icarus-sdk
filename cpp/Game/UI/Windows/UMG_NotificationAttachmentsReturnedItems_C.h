// /Game/UI/Windows/UMG_NotificationAttachmentsReturnedItems.UMG_NotificationAttachmentsReturnedItems_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_NotificationAttachmentsReturnedItems_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CurrencyList;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ItemList;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem_1;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_InventoryItem_C* UMG_InventoryItem_3;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MetaResourceDisplay_C* UMG_MetaResourceDisplay;  // 0x02A0, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateAttachments(const FNotification& Notification);  // parameters 0x78
};
