// /Script/Sentry.SentrySettings
// Derives from: UObject
// size 0x60, declared in Icarus/Plugins/Sentry/Source/Sentry/Public/SentrySettings.h

UCLASS(Config=Engine)
class USentrySettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FString DsnUrl;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FString Release;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, Config) bool InitAutomatically;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FAutomaticBreadcrumbs AutomaticBreadcrumbs;  // 0x0049, size 0x5
    UPROPERTY(EditAnywhere, Config) bool UploadSymbolsAutomatically;  // 0x004E, size 0x1
    UPROPERTY(EditAnywhere, Config) FString PropertiesFilePath;  // 0x0050, size 0x10
};
