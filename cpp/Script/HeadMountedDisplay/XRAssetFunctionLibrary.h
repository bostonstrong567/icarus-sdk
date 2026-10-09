// /Script/HeadMountedDisplay.XRAssetFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/HeadMountedDisplay/Public/XRAssetFunctionLibrary.h

UCLASS()
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(AActor* Target, const FXRDeviceId& XRDeviceId, bool bManualAttachment, const FTransform& RelativeTransform);  // parameters 0x58
    UFUNCTION(BlueprintCallable) static UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(AActor* Target, FName SystemName, FName DeviceName, bool bManualAttachment, const FTransform& RelativeTransform, FXRDeviceId& XRDeviceId);  // parameters 0x68
};
