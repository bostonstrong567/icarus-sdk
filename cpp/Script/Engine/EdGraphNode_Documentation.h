// /Script/Engine.EdGraphNode_Documentation
// Derives from: UEdGraphNode > UObject
// size 0xB8, declared in Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraphNode_Documentation.h

UCLASS(MinimalAPI)
class UEdGraphNode_Documentation : public UEdGraphNode
{
public:
    UPROPERTY() FString Link;  // 0x0098, size 0x10
    UPROPERTY() FString Excerpt;  // 0x00A8, size 0x10
};
