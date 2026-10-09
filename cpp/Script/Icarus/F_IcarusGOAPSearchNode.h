// /Script/Icarus.IcarusGOAPSearchNode
// size 0x30, declared in Icarus/Source/Icarus/AI/IcarusGOAPSearchNode.h

USTRUCT()
struct FIcarusGOAPSearchNode
{
public:
    TSharedPtr<FIcarusGOAPSearchNode,0> parent;  // 0x0000, not reflected
    UIcarusGOAPAction * action;  // 0x0010, not reflected
    FGOAPState state;  // 0x0018, not reflected
    int32 path_cost;  // 0x0028, not reflected
    int32 heuristic_cost;  // 0x002C, not reflected
};
