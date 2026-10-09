// /Script/Sentry.SentryId
// Derives from: UObject
// size 0x38, declared in Icarus/Plugins/Sentry/Source/Sentry/Public/SentryId.h

UCLASS()
class USentryId : public UObject
{
private:
    TSharedPtr<ISentryId,0> SentryIdNativeImpl;  // 0x0028, not reflected
};
