// /Game/UI/Notifications/IOnProspectNotificationDisplay.IOnProspectNotificationDisplay_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UIOnProspectNotificationDisplay_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void QueueNotification(UUMG_OnProspectNotificationBase_C* NotificationToShow, float DurationToShowFor);  // parameters 0xC
};
