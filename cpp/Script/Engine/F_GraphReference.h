// /Script/Engine.GraphReference
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraph.h

USTRUCT()
struct FGraphReference
{
    UPROPERTY() UEdGraph* MacroGraph;  // 0x0000, size 0x8
    UPROPERTY() UBlueprint* GraphBlueprint;  // 0x0008, size 0x8
    UPROPERTY() FGuid GraphGuid;  // 0x0010, size 0x10
};
