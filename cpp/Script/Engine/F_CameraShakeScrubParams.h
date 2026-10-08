// /Script/Engine.CameraShakeScrubParams
// size 0x600, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraShakeBase.h

USTRUCT()
struct FCameraShakeScrubParams
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AbsoluteTime;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ShakeScale;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DynamicScale;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BlendingWeight;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMinimalViewInfo POV;  // 0x0010, size 0x5F0
};
