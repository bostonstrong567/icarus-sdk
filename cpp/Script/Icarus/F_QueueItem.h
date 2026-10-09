// /Script/Icarus.QueueItem
// size 0x48, declared in Icarus/Source/Icarus/Traits/Behaviours/Processing/QueueItem.h

USTRUCT()
struct FQueueItem
{
public:
    FItemsStaticRowHandle Item;  // 0x0000, not reflected
    FCraftingTagsRowHandle Query;  // 0x0018, not reflected
    int32 Count;  // 0x0030, not reflected
    TArray<FFoundItemEntry,TSizedDefaultAllocator<32> > Items;  // 0x0038, not reflected
};
