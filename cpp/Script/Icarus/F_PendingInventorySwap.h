// /Script/Icarus.PendingInventorySwap
// size 0x20, declared in Icarus/Source/Icarus/Backend/BackendProxyComponent.h

USTRUCT()
struct FPendingInventorySwap
{
public:
    UInventory * FromInventory;  // 0x0000, not reflected
    int32 FromIndex;  // 0x0008, not reflected
    UInventory * ToInventory;  // 0x0010, not reflected
    int32 ToIndex;  // 0x0018, not reflected
};
