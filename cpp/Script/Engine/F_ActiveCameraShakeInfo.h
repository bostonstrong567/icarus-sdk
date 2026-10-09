// /Script/Engine.ActiveCameraShakeInfo
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h

USTRUCT()
struct FActiveCameraShakeInfo
{
public:
    UPROPERTY() UCameraShakeBase* ShakeInstance;  // 0x0000, size 0x8
    UPROPERTY(Instanced) TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource;  // 0x0008, size 0x8
    UPROPERTY() bool bIsCustomInitialized;  // 0x0010, size 0x1
};
