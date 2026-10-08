// /Script/Sentry.SentryBreadcrumb
// Derives from: UObject
// size 0x38, declared in Icarus/Plugins/Sentry/Source/Sentry/Public/SentryBreadcrumb.h

UCLASS()
class USentryBreadcrumb : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<ISentryBreadcrumb,0> BreadcrumbNativeImpl;  // 0x0028, private

    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetCategory() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TMap<FString, FString> GetData() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) ESentryLevel GetLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetMessage() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetType() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetCategory(FString Category);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetData(const TMap<FString, FString>& Data);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void SetLevel(ESentryLevel Level);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMessage(FString Message);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetType(FString Type);  // parameters 0x10
};
