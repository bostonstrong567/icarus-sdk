// /Script/NavigationSystem.NavGraphEdge
// size 0x18, declared in Engine/Source/Runtime/NavigationSystem/Public/NavGraph/NavigationGraph.h

USTRUCT()
struct FNavGraphEdge
{

    // Not reflected:
    FNavGraphNode * Start;  // 0x0000
    FNavGraphNode * End;  // 0x0008
    int32 : 7 Flags;  // 0x0010
    uint32 : 1 bEnabled;  // 0x0010
};
