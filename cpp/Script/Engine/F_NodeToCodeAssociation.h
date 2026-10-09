// /Script/Engine.NodeToCodeAssociation
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h

USTRUCT()
struct FNodeToCodeAssociation
{
public:
    TWeakObjectPtr<UEdGraphNode,FWeakObjectPtr> Node;  // 0x0000, not reflected
    TWeakObjectPtr<UFunction,FWeakObjectPtr> Scope;  // 0x0008, not reflected
    int32 Offset;  // 0x0010, not reflected
};
