// /Script/Engine.PlatformGameInstance
// Derives from: UGameInstance > UObject
// size 0x278, declared in Engine/Source/Runtime/Engine/Classes/Kismet/BlueprintPlatformLibrary.h

UCLASS(Transient)
class UPlatformGameInstance : public UGameInstance
{
public:
    UPROPERTY(BlueprintAssignable) FPlatformDelegate ApplicationWillDeactivateDelegate;  // 0x01A8, size 0x10
    UPROPERTY(BlueprintAssignable) FPlatformDelegate ApplicationHasReactivatedDelegate;  // 0x01B8, size 0x10
    UPROPERTY(BlueprintAssignable) FPlatformDelegate ApplicationWillEnterBackgroundDelegate;  // 0x01C8, size 0x10
    UPROPERTY(BlueprintAssignable) FPlatformDelegate ApplicationHasEnteredForegroundDelegate;  // 0x01D8, size 0x10
    UPROPERTY(BlueprintAssignable) FPlatformDelegate ApplicationWillTerminateDelegate;  // 0x01E8, size 0x10
    UPROPERTY(BlueprintAssignable) FPlatformDelegate ApplicationShouldUnloadResourcesDelegate;  // 0x01F8, size 0x10
    UPROPERTY(BlueprintAssignable) FPlatformStartupArgumentsDelegate ApplicationReceivedStartupArgumentsDelegate;  // 0x0208, size 0x10
    UPROPERTY(BlueprintAssignable) FPlatformRegisteredForRemoteNotificationsDelegate ApplicationRegisteredForRemoteNotificationsDelegate;  // 0x0218, size 0x10
    UPROPERTY(BlueprintAssignable) FPlatformRegisteredForUserNotificationsDelegate ApplicationRegisteredForUserNotificationsDelegate;  // 0x0228, size 0x10
    UPROPERTY(BlueprintAssignable) FPlatformFailedToRegisterForRemoteNotificationsDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate;  // 0x0238, size 0x10
    UPROPERTY(BlueprintAssignable) FPlatformReceivedRemoteNotificationDelegate ApplicationReceivedRemoteNotificationDelegate;  // 0x0248, size 0x10
    UPROPERTY(BlueprintAssignable) FPlatformReceivedLocalNotificationDelegate ApplicationReceivedLocalNotificationDelegate;  // 0x0258, size 0x10
    UPROPERTY(BlueprintAssignable) FPlatformScreenOrientationChangedDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate;  // 0x0268, size 0x10
};
