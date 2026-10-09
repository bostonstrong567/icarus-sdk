// /Script/Engine.NodeItem
// size 0x40, declared in Engine/Source/Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h

USTRUCT()
struct FNodeItem
{
public:
    UPROPERTY() FName ParentName;  // 0x0000, size 0x8
    UPROPERTY() FTransform Transform;  // 0x0010, size 0x30
};
