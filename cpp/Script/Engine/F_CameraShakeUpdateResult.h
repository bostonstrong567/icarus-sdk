// /Script/Engine.CameraShakeUpdateResult
// size 0x590, declared in Engine/Source/Runtime/Engine/Classes/Camera/CameraShakeBase.h

USTRUCT()
struct FCameraShakeUpdateResult
{

    // Not reflected:
    FVector Location;  // 0x0000
    FRotator Rotation;  // 0x000C
    float FOV;  // 0x0018
    FPostProcessSettings PostProcessSettings;  // 0x0020
    float PostProcessBlendWeight;  // 0x0580
    ECameraShakeUpdateResultFlags Flags;  // 0x0584
};
