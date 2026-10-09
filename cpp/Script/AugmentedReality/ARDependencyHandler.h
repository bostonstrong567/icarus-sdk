// /Script/AugmentedReality.ARDependencyHandler
// Derives from: UObject
// size 0x28, declared in Engine/Source/Runtime/AugmentedReality/Public/ARDependencyHandler.h

UCLASS(Abstract)
class UARDependencyHandler : public UObject
{
public:
    UFUNCTION(BlueprintCallable) void CheckARServiceAvailability(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static UARDependencyHandler* GetARDependencyHandler();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void InstallARService(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult);  // parameters 0x21
    UFUNCTION(BlueprintCallable) void RequestARSessionPermission(UObject* WorldContextObject, UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult);  // parameters 0x29
    UFUNCTION(BlueprintCallable) void StartARSessionLatent(UObject* WorldContextObject, UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo);  // parameters 0x28

    // Virtual functions that start here:
    //   CheckARServiceAvailability, InstallARService, RequestARSessionPermission, StartARSessionLatent
};
