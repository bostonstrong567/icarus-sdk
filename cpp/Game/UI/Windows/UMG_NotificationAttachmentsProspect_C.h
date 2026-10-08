// /Game/UI/Windows/UMG_NotificationAttachmentsProspect.UMG_NotificationAttachmentsProspect_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x288, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_NotificationAttachmentsProspect_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* CurrencyList;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_1;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* ItemList;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_MetaResourceDisplay_C* UMG_MetaResourceDisplay;  // 0x0280, size 0x8

    UFUNCTION(BlueprintCallable) void UpdateAttachments(const FNotification& Notification);  // parameters 0x78
};
