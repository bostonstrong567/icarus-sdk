// /Script/Icarus.NotificationSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x58, declared in Icarus/Source/Icarus/Subsystems/GameInstance/NotificationSubsystem.h

UCLASS()
class UNotificationSubsystem : public UGameInstanceSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FNotificationsRefreshed OnNotificationsUpdated;  // 0x0030, size 0x10
    UPROPERTY() AIcarusPlayerController* PlayerController;  // 0x0040, size 0x8
    UPROPERTY() TArray<FNotification> Notifications;  // 0x0048, size 0x10

    UFUNCTION(BlueprintCallable) TArray<FNotification> GetNotifications();  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<FNotification> GetUnseenNotifications();  // parameters 0x10
    UFUNCTION() void NotificationsUpdated();
    UFUNCTION(BlueprintCallable) void RefreshNotifications();
};
