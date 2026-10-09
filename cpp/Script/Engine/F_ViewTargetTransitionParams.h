// /Script/Engine.ViewTargetTransitionParams
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Camera/PlayerCameraManager.h

USTRUCT()
struct FViewTargetTransitionParams
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BlendTime;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EViewTargetBlendFunction> BlendFunction;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BlendExp;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bLockOutgoing : 1;  // 0x000C, mask 0x01
};
