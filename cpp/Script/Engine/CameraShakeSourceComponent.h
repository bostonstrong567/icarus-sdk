// /Script/Engine.CameraShakeSourceComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x220, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h

UCLASS(Config=Engine)
class UCameraShakeSourceComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ECameraShakeAttenuation Attenuation;  // 0x01F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InnerAttenuationRadius;  // 0x01FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OuterAttenuationRadius;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UCameraShakeBase> CameraShake;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAutoStart;  // 0x0210, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAttenuationFactor(const FVector& Location) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Start();
    UFUNCTION(BlueprintCallable) void StartCameraShake(TSubclassOf<UCameraShakeBase> InCameraShake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void StopAllCameraShakes(bool bImmediately);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StopAllCameraShakesOfType(TSubclassOf<UCameraShakeBase> InCameraShake, bool bImmediately);  // parameters 0x9
};
