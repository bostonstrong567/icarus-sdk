// /Script/Engine.FastArraySerializer
// size 0x108, declared in Engine/Source/Runtime/Engine/Classes/Engine/NetSerialization.h

USTRUCT()
struct FFastArraySerializer
{
    UPROPERTY() int32 ArrayReplicationKey;  // 0x0054, size 0x4
    UPROPERTY(Transient) EFastArraySerializerDeltaFlags DeltaFlags;  // 0x0100, size 0x1

    // Not reflected:
    TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0> > ItemMap;  // 0x0000
    int32 IDCounter;  // 0x0050
    TMap<int,FFastArraySerializerGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFastArraySerializerGuidReferences,0> > GuidReferencesMap;  // 0x0058
    TMap<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0> >,0> > GuidReferencesMap_StructDelta;  // 0x00A8
    int32 CachedNumItems;  // 0x00F8
    int32 CachedNumItemsToConsiderForWriting;  // 0x00FC
};
