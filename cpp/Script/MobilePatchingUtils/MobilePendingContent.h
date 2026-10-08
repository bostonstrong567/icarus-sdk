// /Script/MobilePatchingUtils.MobilePendingContent
// Derives from: UMobileInstalledContent > UObject
// size 0x88, declared in Engine/Plugins/Runtime/MobilePatchingUtils/Source/MobilePatchingUtils/Private/MobilePatchingLibrary.h

UCLASS()
class UMobilePendingContent : public UMobileInstalledContent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FString RemoteManifestURL;  // 0x0048
    FString CloudURL;  // 0x0058
    TSharedPtr<IBuildInstaller,1> Installer;  // 0x0068
    TSharedPtr<IBuildManifest,1> RemoteManifest;  // 0x0078

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDownloadSize();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDownloadSpeed();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetDownloadStatusText();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInstallProgress();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRequiredDiskSpace();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTotalDownloadedSize();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void StartInstall(FOnContentInstallSucceeded OnSucceeded, FOnContentInstallFailed OnFailed);  // parameters 0x20
};
