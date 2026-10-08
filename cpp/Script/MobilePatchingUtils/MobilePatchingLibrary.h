// /Script/MobilePatchingUtils.MobilePatchingLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Runtime/MobilePatchingUtils/Source/MobilePatchingUtils/Private/MobilePatchingLibrary.h

UCLASS()
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static FString GetActiveDeviceProfileName();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static UMobileInstalledContent* GetInstalledContent(FString InstallDirectory);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static TArray<FString> GetSupportedPlatformNames();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool HasActiveWiFiConnection();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void RequestContent(FString RemoteManifestURL, FString CloudURL, FString InstallDirectory, FOnRequestContentSucceeded OnSucceeded, FOnRequestContentFailed OnFailed);  // parameters 0x50
};
