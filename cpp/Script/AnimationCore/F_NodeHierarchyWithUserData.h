// /Script/AnimationCore.NodeHierarchyWithUserData
// size 0x78, declared in Engine/Source/Runtime/AnimationCore/Public/NodeHierarchy.h

USTRUCT()
struct FNodeHierarchyWithUserData
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() FNodeHierarchyData Hierarchy;  // 0x0008, size 0x70
};
