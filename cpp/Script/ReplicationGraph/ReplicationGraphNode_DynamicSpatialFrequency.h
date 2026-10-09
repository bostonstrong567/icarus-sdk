// /Script/ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// Derives from: UReplicationGraphNode_ActorList > UReplicationGraphNode > UObject
// size 0x100, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
public:
    UReplicationGraphNode_DynamicSpatialFrequency::FSettings * Settings;  // 0x00D0, not reflected
    const char * CSVStatName;  // 0x00D8, not reflected
protected:
    TArray<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,TSizedDefaultAllocator<32> > SortedReplicationList;  // 0x00E0, not reflected
    int32 NumExpectedReplicationsThisFrame;  // 0x00F0, not reflected
    int32 NumExpectedReplicationsNextFrame;  // 0x00F4, not reflected
    bool IgnoreCullDistance;  // 0x00F8, not reflected

    // Virtual functions that start here:
    //   GatherActors, GatherActors_DistanceOnly
};
