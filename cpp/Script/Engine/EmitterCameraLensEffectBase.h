// /Script/Engine.EmitterCameraLensEffectBase
// Derives from: AEmitter > AActor > UObject
// size 0x2E0, declared in Engine/Source/Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h

UCLASS(Abstract, Config=Engine)
class AEmitterCameraLensEffectBase : public AEmitter
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) float BaseFOV;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere) uint8 bAllowMultipleInstances : 1;  // 0x02C4, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bResetWhenRetriggered : 1;  // 0x02C4, mask 0x02
    UPROPERTY(EditAnywhere) TArray<TSubclassOf<AEmitterCameraLensEffectBase>> EmittersToTreatAsSame;  // 0x02C8, size 0x10
protected:
    UPROPERTY(EditAnywhere) UParticleSystem* PS_CameraEffect;  // 0x0270, size 0x8
    UPROPERTY(Deprecated) UParticleSystem* PS_CameraEffectNonExtremeContent;  // 0x0278, size 0x8
    UPROPERTY(Transient) APlayerCameraManager* BaseCamera;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere) FTransform RelativeTransform;  // 0x0290, size 0x30
private:
    UPROPERTY(Deprecated) float DistFromCamera;  // 0x02D8, size 0x4

    // Virtual functions that start here:
    //   ActivateLensEffect, DeactivateLensEffect, NotifyRetriggered, RegisterCamera, UpdateLocation
};
