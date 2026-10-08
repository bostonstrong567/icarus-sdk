// /Script/Engine.BakedAnimationState
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h

USTRUCT()
struct FBakedAnimationState
{
    UPROPERTY() FName StateName;  // 0x0000, size 0x8
    UPROPERTY() TArray<FBakedStateExitTransition> Transitions;  // 0x0008, size 0x10
    UPROPERTY() int32 StateRootNodeIndex;  // 0x0018, size 0x4
    UPROPERTY() int32 StartNotify;  // 0x001C, size 0x4
    UPROPERTY() int32 EndNotify;  // 0x0020, size 0x4
    UPROPERTY() int32 FullyBlendedNotify;  // 0x0024, size 0x4
    UPROPERTY() bool bIsAConduit;  // 0x0028, size 0x1
    UPROPERTY() int32 EntryRuleNodeIndex;  // 0x002C, size 0x4
    UPROPERTY() TArray<int32> PlayerNodeIndices;  // 0x0030, size 0x10
    UPROPERTY() TArray<int32> LayerNodeIndices;  // 0x0040, size 0x10
    UPROPERTY() bool bAlwaysResetOnEntry;  // 0x0050, size 0x1
};
