// /Script/ReplicationGraph.ReplicationGraphNode_DynamicSpatialFrequency
// Derives from: UReplicationGraphNode_ActorList > UReplicationGraphNode > UObject
// size 0x100, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient)
class UReplicationGraphNode_DynamicSpatialFrequency : public UReplicationGraphNode_ActorList
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UReplicationGraphNode_DynamicSpatialFrequency::FSettings * Settings;  // 0x00D0
    const char * CSVStatName;  // 0x00D8
    TArray<UReplicationGraphNode_DynamicSpatialFrequency::FDynamicSpatialFrequency_SortedItem,TSizedDefaultAllocator<32> > SortedReplicationList;  // 0x00E0, protected
    int32 NumExpectedReplicationsThisFrame;  // 0x00F0, protected
    int32 NumExpectedReplicationsNextFrame;  // 0x00F4, protected
    bool IgnoreCullDistance;  // 0x00F8, protected

    // Virtual functions that start here:
    //   GatherActors, GatherActors_DistanceOnly
};
