// /Script/AnimationCore.NodeHierarchyData
// size 0x70, declared in Engine/Source/Runtime/AnimationCore/Public/NodeHierarchy.h

USTRUCT()
struct FNodeHierarchyData
{
    UPROPERTY() TArray<FNodeObject> Nodes;  // 0x0000, size 0x10
    UPROPERTY() TArray<FTransform> Transforms;  // 0x0010, size 0x10
    UPROPERTY() TMap<FName, int32> NodeNameToIndexMapping;  // 0x0020, size 0x50
};
