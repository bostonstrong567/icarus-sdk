// /Script/NavigationSystem.NavGraphNode
// size 0x18, declared in Engine/Source/Runtime/NavigationSystem/Public/NavGraph/NavigationGraph.h

USTRUCT()
struct FNavGraphNode
{
public:
    UPROPERTY() UObject* Owner;  // 0x0000, size 0x8
    TArray<FNavGraphEdge,TSizedDefaultAllocator<32> > Edges;  // 0x0008, not reflected
};
