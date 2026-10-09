// /Script/Sentry.SentryScope
// Derives from: UObject
// size 0x38, declared in Icarus/Plugins/Sentry/Source/Sentry/Public/SentryScope.h

UCLASS()
class USentryScope : public UObject
{
private:
    TSharedPtr<ISentryScope,0> ScopeNativeImpl;  // 0x0028, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddAttachment(USentryAttachment* Attachment);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddBreadcrumb(USentryBreadcrumb* Breadcrumb);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Clear();
    UFUNCTION(BlueprintCallable) void ClearAttachments();
    UFUNCTION(BlueprintCallable) void ClearBreadcrumbs();
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetDist() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetEnvironment() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetExtraValue(FString Key) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) TMap<FString, FString> GetExtras() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FString> GetFingerprint() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) ESentryLevel GetLevel() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetTagValue(FString Key) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) TMap<FString, FString> GetTags() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable) void RemoveContext(FString Key);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveExtra(FString Key);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RemoveTag(FString Key);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetContext(FString Key, const TMap<FString, FString>& Values);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void SetDist(FString Dist);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetEnvironment(FString Environment);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetExtraValue(FString Key, FString Value);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetExtras(const TMap<FString, FString>& Extras);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void SetFingerprint(const TArray<FString>& Fingerprint);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetLevel(ESentryLevel Level);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTagValue(FString Key, FString Value);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetTags(const TMap<FString, FString>& Tags);  // parameters 0x50
};
