// /Script/Icarus.QueueItem
// size 0x48, declared in Icarus/Source/Icarus/Traits/Behaviours/Processing/QueueItem.h

USTRUCT()
struct FQueueItem
{

    // Not reflected:
    FItemsStaticRowHandle Item;  // 0x0000
    FCraftingTagsRowHandle Query;  // 0x0018
    int32 Count;  // 0x0030
    TArray<FFoundItemEntry,TSizedDefaultAllocator<32> > Items;  // 0x0038
};
