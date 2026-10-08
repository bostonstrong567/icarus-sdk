// /Script/PropertyAccess.PropertyAccessLibrary
// size 0xC8, declared in Engine/Source/Runtime/PropertyAccess/Public/PropertyAccess.h

USTRUCT()
struct FPropertyAccessLibrary
{
    UPROPERTY() TArray<FPropertyAccessSegment> PathSegments;  // 0x0000, size 0x10
    UPROPERTY() TArray<FPropertyAccessPath> SrcPaths;  // 0x0010, size 0x10
    UPROPERTY() TArray<FPropertyAccessPath> DestPaths;  // 0x0020, size 0x10
    UPROPERTY() FPropertyAccessCopyBatch CopyBatches;  // 0x0030, size 0x10
    UPROPERTY(Transient) TArray<FPropertyAccessIndirectionChain> SrcAccesses;  // 0x0070, size 0x10
    UPROPERTY(Transient) TArray<FPropertyAccessIndirectionChain> DestAccesses;  // 0x0080, size 0x10
    UPROPERTY(Transient) TArray<FPropertyAccessIndirection> Indirections;  // 0x0090, size 0x10
    UPROPERTY() TArray<int32> EventAccessIndices;  // 0x00A0, size 0x10

    // Not reflected:
    bool bHasBeenPostLoaded;  // 0x00B0
    TArray<FPropertyAccessLibrary::FEventMapping,TSizedDefaultAllocator<32> > EventMappings;  // 0x00B8
};
