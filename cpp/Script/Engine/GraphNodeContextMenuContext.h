// /Script/Engine.GraphNodeContextMenuContext
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraphNode.h

UCLASS()
class UGraphNodeContextMenuContext : public UObject
{
public:
    UPROPERTY() UBlueprint* Blueprint;  // 0x0028, size 0x8
    UPROPERTY() UEdGraph* Graph;  // 0x0030, size 0x8
    UPROPERTY() UEdGraphNode* Node;  // 0x0038, size 0x8
    const UEdGraphPin * Pin;  // 0x0040, not reflected
    UPROPERTY() bool bIsDebugging;  // 0x0048, size 0x1
};
