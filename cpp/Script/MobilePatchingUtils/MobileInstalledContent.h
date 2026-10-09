// /Script/MobilePatchingUtils.MobileInstalledContent
// Derives from: UObject
// size 0x48, declared in Engine/Plugins/Runtime/MobilePatchingUtils/Source/MobilePatchingUtils/Private/MobilePatchingLibrary.h

UCLASS()
class UMobileInstalledContent : public UObject
{
public:
    FString InstallDir;  // 0x0028, not reflected
    TSharedPtr<IBuildManifest,1> InstalledManifest;  // 0x0038, not reflected

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDiskFreeSpace();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInstalledContentSize();  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool Mount(int32 PakOrder, FString MountPoint);  // parameters 0x19
};
