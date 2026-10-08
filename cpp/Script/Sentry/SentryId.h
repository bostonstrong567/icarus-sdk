// /Script/Sentry.SentryId
// Derives from: UObject
// size 0x38, declared in Icarus/Plugins/Sentry/Source/Sentry/Public/SentryId.h

UCLASS()
class USentryId : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<ISentryId,0> SentryIdNativeImpl;  // 0x0028, private
};
