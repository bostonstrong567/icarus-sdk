// /Script/Engine.PooledCameraShakes
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h

USTRUCT()
struct FPooledCameraShakes
{
    UPROPERTY() TArray<UCameraShakeBase*> PooledShakes;  // 0x0000, size 0x10
};
