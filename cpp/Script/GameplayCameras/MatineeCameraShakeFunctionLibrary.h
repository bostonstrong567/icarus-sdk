// /Script/GameplayCameras.MatineeCameraShakeFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Public/MatineeCameraShake.h

UCLASS()
class UMatineeCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static UMatineeCameraShake* Conv_MatineeCameraShake(UCameraShakeBase* CameraShake);  // parameters 0x10
};
