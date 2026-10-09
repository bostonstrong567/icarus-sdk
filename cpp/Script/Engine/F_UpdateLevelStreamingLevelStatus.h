// /Script/Engine.UpdateLevelStreamingLevelStatus
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerController.h

USTRUCT()
struct FUpdateLevelStreamingLevelStatus
{
public:
    UPROPERTY() FName PackageName;  // 0x0000, size 0x8
    UPROPERTY() int32 LODIndex;  // 0x0008, size 0x4
    UPROPERTY() bool bNewShouldBeLoaded;  // 0x000C, size 0x1
    UPROPERTY() bool bNewShouldBeVisible;  // 0x000D, size 0x1
    UPROPERTY() bool bNewShouldBlockOnLoad;  // 0x000E, size 0x1
};
