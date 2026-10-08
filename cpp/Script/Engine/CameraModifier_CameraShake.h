// /Script/Engine.CameraModifier_CameraShake
// Derives from: UCameraModifier > UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h

UCLASS(Config=Camera)
class UCameraModifier_CameraShake : public UCameraModifier
{
public:
    UPROPERTY() TArray<FActiveCameraShakeInfo> ActiveShakes;  // 0x0048, size 0x10
    UPROPERTY() TMap<TSubclassOf<UCameraShakeBase>, FPooledCameraShakes> ExpiredPooledShakesMap;  // 0x0058, size 0x50
    UPROPERTY(EditAnywhere) float SplitScreenShakeScale;  // 0x00A8, size 0x4

    // Virtual functions that start here:
    //   AddCameraShake, GetActiveCameraShakes, RemoveAllCameraShakes, RemoveAllCameraShakesFromSource
    //   RemoveAllCameraShakesOfClass, RemoveAllCameraShakesOfClassFromSource, RemoveCameraShake
};
