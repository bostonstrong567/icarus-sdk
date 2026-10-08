// /Script/Sentry.SentrySubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x68, declared in Icarus/Plugins/Sentry/Source/Sentry/Public/SentrySubsystem.h

UCLASS()
class USentrySubsystem : public UGameInstanceSubsystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<ISentrySubsystem,0> SubsystemNativeImpl;  // 0x0030, private
    FDelegateHandle PreLoadMapDelegate;  // 0x0040, private
    FDelegateHandle PostLoadMapDelegate;  // 0x0048, private
    FDelegateHandle GameStateChangedDelegate;  // 0x0050, private
    FDelegateHandle UserActivityChangedDelegate;  // 0x0058, private
    FDelegateHandle GameSessionIDChangedDelegate;  // 0x0060, private

    UFUNCTION(BlueprintCallable) void AddBreadcrumb(USentryBreadcrumb* Breadcrumb);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddBreadcrumbWithParams(FString Message, FString Category, FString Type, const TMap<FString, FString>& Data, ESentryLevel Level);  // parameters 0x81
    UFUNCTION(BlueprintCallable) USentryId* CaptureEvent(USentryEvent* Event);  // parameters 0x10
    UFUNCTION(BlueprintCallable) USentryId* CaptureEventWithScope(USentryEvent* Event, const FConfigureScopeDelegate& OnConfigureScope);  // parameters 0x20
    UFUNCTION(BlueprintCallable) USentryId* CaptureMessage(FString Message, ESentryLevel Level);  // parameters 0x20
    UFUNCTION(BlueprintCallable) USentryId* CaptureMessageWithScope(FString Message, const FConfigureScopeDelegate& OnConfigureScope, ESentryLevel Level);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void CaptureUserFeedback(USentryUserFeedback* UserFeedback);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CaptureUserFeedbackWithParams(USentryId* EventId, FString Email, FString Comments, FString Name);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void ClearBreadcrumbs();
    UFUNCTION(BlueprintCallable) void Close();
    UFUNCTION(BlueprintCallable) void ConfigureScope(const FConfigureScopeDelegate& OnConfigureScope);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Initialize();
    UFUNCTION(BlueprintCallable) void InitializeWithSettings(const FConfigureSettingsDelegate& OnConfigureSettings);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveTag(FString Key);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveUser();
    UFUNCTION(BlueprintCallable) void SetContext(FString Key, const TMap<FString, FString>& Values);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void SetLevel(ESentryLevel Level);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTag(FString Key, FString Value);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetUser(USentryUser* User);  // parameters 0x8
};
