// /Script/Sentry.SentryUserFeedback
// Derives from: UObject
// size 0x38, declared in Icarus/Plugins/Sentry/Source/Sentry/Public/SentryUserFeedback.h

UCLASS()
class USentryUserFeedback : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<ISentryUserFeedback,0> UserFeedbackNativeImpl;  // 0x0028, private

    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetComment() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetEmail() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Initialize(USentryId* EventId);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetComment(FString Comments);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetEmail(FString Email);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetName(FString Name);  // parameters 0x10
};
