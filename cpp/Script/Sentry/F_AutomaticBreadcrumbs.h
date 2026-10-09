// /Script/Sentry.AutomaticBreadcrumbs
// size 0x5, declared in Icarus/Plugins/Sentry/Source/Sentry/Public/SentrySettings.h

USTRUCT()
struct FAutomaticBreadcrumbs
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bOnMapLoadingStarted;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bOnMapLoaded;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bOnGameStateClassChanged;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bOnGameSessionIDChanged;  // 0x0003, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bOnUserActivityStringChanged;  // 0x0004, size 0x1
};
