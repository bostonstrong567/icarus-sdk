// /Script/ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
// Derives from: UReplicationGraphNode > UObject
// size 0x108, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{
public:
    TSharedPtr<UReplicationGraphNode_ActorListFrequencyBuckets::FSettings,0> Settings;  // 0x0050, not reflected
protected:
    int32 TotalNumNonStreamingActors;  // 0x0060, not reflected
    TArray<FActorRepListRefView,TInlineAllocator<2,TSizedDefaultAllocator<32> > > NonStreamingCollection;  // 0x0068, not reflected
    FStreamingLevelActorListCollection StreamingLevelCollection;  // 0x0098, not reflected
};
