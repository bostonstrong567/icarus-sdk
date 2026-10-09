// /Script/Sentry.SentryAttachment
// Derives from: UObject
// size 0x38, declared in Icarus/Plugins/Sentry/Source/Sentry/Public/SentryAttachment.h

UCLASS()
class USentryAttachment : public UObject
{
private:
    TSharedPtr<ISentryAttachment,0> AttachmentNativeImpl;  // 0x0028, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetContentType() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<uint8> GetData() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetFilename() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetPath() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void InitializeWithData(const TArray<uint8>& Data, FString Filename, FString ContentType);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void InitializeWithPath(FString Path, FString Filename, FString ContentType);  // parameters 0x30
};
