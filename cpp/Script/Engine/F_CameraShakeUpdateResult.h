// /Script/Engine.CameraShakeUpdateResult
// size 0x590, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraShakeBase.h

USTRUCT()
struct FCameraShakeUpdateResult
{
public:
    FVector Location;  // 0x0000, not reflected
    FRotator Rotation;  // 0x000C, not reflected
    float FOV;  // 0x0018, not reflected
    FPostProcessSettings PostProcessSettings;  // 0x0020, not reflected
    float PostProcessBlendWeight;  // 0x0580, not reflected
    ECameraShakeUpdateResultFlags Flags;  // 0x0584, not reflected
};
