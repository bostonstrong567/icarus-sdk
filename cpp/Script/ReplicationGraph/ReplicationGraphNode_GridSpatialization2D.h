// /Script/ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
// Derives from: UReplicationGraphNode > UObject
// size 0x230, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{
public:

    // Not reflected: the engine's scripting cannot see these.
    float CellSize;  // 0x0050
    FVector2D SpatialBias;  // 0x0054
    float ConnectionMaxZ;  // 0x005C
    TFunction<UReplicationGraphNode_GridCell * __cdecl(UReplicationGraphNode_GridSpatialization2D *)> CreateCellNodeOverride;  // 0x0060
    bool bDestroyDormantDynamicActors;  // 0x00A0
    FBox GridBounds;  // 0x00A4, private
    TClassMap<bool> RebuildSpatialBlacklistMap;  // 0x00C0, private
    TMap<AActor *,UReplicationGraphNode_GridSpatialization2D::FCachedDynamicActorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor *,UReplicationGraphNode_GridSpatialization2D::FCachedDynamicActorInfo,0> > DynamicSpatializedActors;  // 0x0150, private
    TMap<AActor *,UReplicationGraphNode_GridSpatialization2D::FCachedStaticActorInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor *,UReplicationGraphNode_GridSpatialization2D::FCachedStaticActorInfo,0> > StaticSpatializedActors;  // 0x01A0, private
    TArray<UReplicationGraphNode_GridSpatialization2D::FPendingStaticActors,TSizedDefaultAllocator<32> > PendingStaticSpatializedActors;  // 0x01F0, private
    TArray<TArray<UReplicationGraphNode_GridCell *,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > Grid;  // 0x0200, private
    bool bNeedsRebuild;  // 0x0210, private
    TArray<UReplicationGraphNode_GridCell *,TSizedDefaultAllocator<32> > GatheredNodes;  // 0x0218, private

    // Virtual functions that start here:
    //   AddActorInternal_Dynamic, AddActorInternal_Static, AddActorInternal_Static_Implementation
    //   RemoveActorInternal_Dynamic, RemoveActorInternal_Static
};
