// /Script/HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0x60, declared in Engine/Source/Runtime/HeadMountedDisplay/Public/XRAssetFunctionLibrary.h

UCLASS()
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FDeviceModelLoadedDelegate OnModelLoaded;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FDeviceModelLoadedDelegate OnLoadFailure;  // 0x0040, size 0x10
private:
    UAsyncTask_LoadXRDeviceVisComponent::ELoadStatus LoadStatus;  // 0x0050, not reflected
    UPROPERTY(Instanced) UPrimitiveComponent* SpawnedComponent;  // 0x0058, size 0x8
public:
    UFUNCTION(BlueprintCallable) static UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform, UPrimitiveComponent*& NewComponent);  // parameters 0x60
    UFUNCTION(BlueprintCallable) static UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId, UPrimitiveComponent*& NewComponent);  // parameters 0x70
};
