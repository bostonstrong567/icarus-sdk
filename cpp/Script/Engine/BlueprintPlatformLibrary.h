// /Script/Engine.BlueprintPlatformLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Kismet/BlueprintPlatformLibrary.h

UCLASS()
class UBlueprintPlatformLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void CancelLocalNotification(FString ActivationEvent);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void CancelLocalNotificationById(int32 NotificationId);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void ClearAllLocalNotifications();
    UFUNCTION(BlueprintCallable, BlueprintPure) static TEnumAsByte<EScreenOrientation> GetDeviceOrientation();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void GetLaunchNotification(bool& NotificationLaunchedApp, FString& ActivationEvent, int32& FireDate);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static int32 ScheduleLocalNotificationAtTime(const FDateTime& FireDateTime, bool LocalTime, const FText& Title, const FText& Body, const FText& Action, FString ActivationEvent);  // parameters 0x6C
    UFUNCTION(BlueprintCallable) static int32 ScheduleLocalNotificationBadgeAtTime(const FDateTime& FireDateTime, bool LocalTime, FString ActivationEvent);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static void ScheduleLocalNotificationBadgeFromNow(int32 inSecondsFromNow, FString ActivationEvent);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static int32 ScheduleLocalNotificationFromNow(int32 inSecondsFromNow, const FText& Title, const FText& Body, const FText& Action, FString ActivationEvent);  // parameters 0x64
};
