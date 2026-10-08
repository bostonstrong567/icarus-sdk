// /Game/UI/Notifications/UMG_OnProspectNotification_ItemsReturned.UMG_OnProspectNotification_ItemsReturned_C
// Derives from: UUMG_OnProspectNotificationBase_C > UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_OnProspectNotification_ItemsReturned_C : public UUMG_OnProspectNotificationBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ItemBox;  // 0x0270, size 0x8

    UFUNCTION(BlueprintCallable) void SetItems(TArray<FItemData>& Items);  // parameters 0x10
};
