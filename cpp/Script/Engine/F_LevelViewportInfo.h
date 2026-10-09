// /Script/Engine.LevelViewportInfo
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Engine/World.h

USTRUCT()
struct FLevelViewportInfo
{
public:
    UPROPERTY() FVector CamPosition;  // 0x0000, size 0xC
    UPROPERTY() FRotator CamRotation;  // 0x000C, size 0xC
    UPROPERTY() float CamOrthoZoom;  // 0x0018, size 0x4
    UPROPERTY() bool CamUpdated;  // 0x001C, size 0x1
};
