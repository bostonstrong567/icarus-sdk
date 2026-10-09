// /Script/Icarus.IRGN_PlayerState_FrequencyLimited
// Derives from: UReplicationGraphNode > UObject
// size 0x78, declared in Icarus/Source/Icarus/Online/IRGN_PlayerState_FrequencyLimited.h

UCLASS(Transient)
class UIRGN_PlayerState_FrequencyLimited : public UReplicationGraphNode
{
protected:
    int32 TargetActorsPerFrame;  // 0x0050, not reflected
    TArray<FActorRepListRefView,TSizedDefaultAllocator<32> > ReplicationActorLists;  // 0x0058, not reflected
    FActorRepListRefView ForceNetUpdateReplicationActorList;  // 0x0068, not reflected
};
