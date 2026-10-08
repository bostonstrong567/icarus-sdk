// /Script/Sentry.SentryEvent
// Derives from: UObject
// size 0x38, declared in Icarus/Plugins/Sentry/Source/Sentry/Public/SentryEvent.h

UCLASS()
class USentryEvent : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<ISentryEvent,0> EventNativeImpl;  // 0x0028, private

    UFUNCTION(BlueprintCallable, BlueprintPure) ESentryLevel GetLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetMessage() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetLevel(ESentryLevel Level);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMessage(FString Message);  // parameters 0x10
};
