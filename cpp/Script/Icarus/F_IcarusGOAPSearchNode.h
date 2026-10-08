// /Script/Icarus.IcarusGOAPSearchNode
// size 0x30, declared in Icarus/Source/Icarus/AI/IcarusGOAPSearchNode.h

USTRUCT()
struct FIcarusGOAPSearchNode
{

    // Not reflected:
    TSharedPtr<FIcarusGOAPSearchNode,0> parent;  // 0x0000
    UIcarusGOAPAction * action;  // 0x0010
    FGOAPState state;  // 0x0018
    int32 path_cost;  // 0x0028
    int32 heuristic_cost;  // 0x002C
};
