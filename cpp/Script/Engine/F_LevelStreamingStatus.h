// /Script/Engine.LevelStreamingStatus
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/Engine.h

USTRUCT()
struct FLevelStreamingStatus
{
    UPROPERTY() FName PackageName;  // 0x0000, size 0x8
    UPROPERTY() uint8 bShouldBeLoaded : 1;  // 0x0008, mask 0x01
    UPROPERTY() uint8 bShouldBeVisible : 1;  // 0x0008, mask 0x02
    UPROPERTY() uint32 LODIndex;  // 0x000C, size 0x4
};
