// /Script/NavigationSystem.NavGraphEdge
// size 0x18, declared in Engine/Source/Runtime/NavigationSystem/Public/NavGraph/NavigationGraph.h

USTRUCT()
struct FNavGraphEdge
{
public:
    FNavGraphNode * Start;  // 0x0000, not reflected
    FNavGraphNode * End;  // 0x0008, not reflected
    int32 : 7 Flags;  // 0x0010, not reflected
    uint32 : 1 bEnabled;  // 0x0010, not reflected
};
