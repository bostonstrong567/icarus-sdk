// /Script/Engine.StreamingSettings
// Derives from: UDeveloperSettings > UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Engine/CoreSettings.h

UCLASS(Config=Engine)
class UStreamingSettings : public UDeveloperSettings
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, Config) uint8 AsyncLoadingThreadEnabled : 1;  // 0x0038, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 WarnIfTimeLimitExceeded : 1;  // 0x0038, mask 0x02
    UPROPERTY(EditAnywhere, Config) float TimeLimitExceededMultiplier;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, Config) float TimeLimitExceededMinTime;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MinBulkDataSizeForAsyncLoading;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 UseBackgroundLevelStreaming : 1;  // 0x0048, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 AsyncLoadingUseFullTimeLimit : 1;  // 0x0048, mask 0x02
    UPROPERTY(EditAnywhere, Config) float AsyncLoadingTimeLimit;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, Config) float PriorityAsyncLoadingExtraTime;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, Config) float LevelStreamingActorsUpdateTimeLimit;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere, Config) float PriorityLevelStreamingActorsUpdateExtraTime;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 LevelStreamingComponentsRegistrationGranularity;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, Config) float LevelStreamingUnregisterComponentsTimeLimit;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 LevelStreamingComponentsUnregistrationGranularity;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 FlushStreamingOnExit : 1;  // 0x0068, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 EventDrivenLoaderEnabled : 1;  // 0x0068, mask 0x02
};
