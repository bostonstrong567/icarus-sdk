// /Script/Icarus.LoadingScreenSettings
// Derives from: UDeveloperSettings > UObject
// size 0xF0, declared in Icarus/Source/Icarus/Config/LoadingScreenSettings.h

UCLASS(Config=Game)
class ULoadingScreenSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) TSoftClassPtr<UUserWidget> DefaultLoadingScreenWidget;  // 0x0038, size 0x28
    UPROPERTY(EditAnywhere, Config) TSoftClassPtr<UUserWidget> InBetweenLoadingScreenWidget;  // 0x0060, size 0x28
    UPROPERTY(EditAnywhere, Config) TMap<FString, TSoftClassPtr<UUserWidget>> PerLevelLoadingScreens;  // 0x0088, size 0x50
    UPROPERTY(EditAnywhere, Config) float MinimumLoadingScreenDisplayTime;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, Config) float PostLoadFadeInDuration;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, Config) TArray<FString> InBetweenLoadingVideos;  // 0x00E0, size 0x10
};
