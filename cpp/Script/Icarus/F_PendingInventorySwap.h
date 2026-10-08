// /Script/Icarus.PendingInventorySwap
// size 0x20, declared in Icarus/Source/Icarus/Backend/BackendProxyComponent.h

USTRUCT()
struct FPendingInventorySwap
{

    // Not reflected:
    UInventory * FromInventory;  // 0x0000
    int32 FromIndex;  // 0x0008
    UInventory * ToInventory;  // 0x0010
    int32 ToIndex;  // 0x0018
};
