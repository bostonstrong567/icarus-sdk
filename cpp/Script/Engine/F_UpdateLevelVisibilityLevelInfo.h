// /Script/Engine.UpdateLevelVisibilityLevelInfo
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h

USTRUCT()
struct FUpdateLevelVisibilityLevelInfo
{
public:
    UPROPERTY() FName PackageName;  // 0x0000, size 0x8
    UPROPERTY() FName FileName;  // 0x0008, size 0x8
    uint32 : 1 bSkipCloseOnError;  // 0x0010, not reflected
    UPROPERTY() uint8 bIsVisible : 1;  // 0x0010, mask 0x01
};
