// /Script/InteractiveToolsFramework.BehaviorInfo
// size 0x20, declared in Engine/Source/Runtime/Experimental/InteractiveToolsFramework/Public/InputBehaviorSet.h

USTRUCT()
struct FBehaviorInfo
{
    UPROPERTY() UInputBehavior* Behavior;  // 0x0000, size 0x8

    // Not reflected:
    void * Source;  // 0x0008
    FString Group;  // 0x0010
};
