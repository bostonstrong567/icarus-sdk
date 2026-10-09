// /Script/Engine.LevelNameAndTime
// size 0x18, declared in Engine/Source/Runtime/Engine/Public/ReplayTypes.h

USTRUCT()
struct FLevelNameAndTime
{
public:
    UPROPERTY() FString LevelName;  // 0x0000, size 0x10
    UPROPERTY() uint32 LevelChangeTimeInMS;  // 0x0010, size 0x4
};
