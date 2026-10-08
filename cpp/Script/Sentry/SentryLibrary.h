// /Script/Sentry.SentryLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/Sentry/Source/Sentry/Public/SentryLibrary.h

UCLASS()
class USentryLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static FString ByteArrayToString(const TArray<uint8>& Array);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static USentryAttachment* CreateSentryAttachmentWithData(const TArray<uint8>& Data, FString Filename, FString ContentType);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static USentryAttachment* CreateSentryAttachmentWithPath(FString Path, FString Filename, FString ContentType);  // parameters 0x38
    UFUNCTION(BlueprintCallable) static USentryBreadcrumb* CreateSentryBreadcrumb(FString Message, FString Type, FString Category, const TMap<FString, FString>& Data, ESentryLevel Level);  // parameters 0x90
    UFUNCTION(BlueprintCallable) static USentryEvent* CreateSentryEvent(FString Message, ESentryLevel Level);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static USentryUser* CreateSentryUser(FString Email, FString Id, FString Username, FString IpAddress, const TMap<FString, FString>& Data);  // parameters 0x98
    UFUNCTION(BlueprintCallable) static USentryUserFeedback* CreateSentryUserFeedback(USentryId* EventId, FString Name, FString Email, FString Comments);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static FString SaveStringToFile(FString InString, FString Filename);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TArray<uint8> StringToBytesArray(FString InString);  // parameters 0x20
};
