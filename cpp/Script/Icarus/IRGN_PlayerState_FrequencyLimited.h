// /Script/Icarus.IRGN_PlayerState_FrequencyLimited
// Derives from: UReplicationGraphNode > UObject
// size 0x78, declared in Icarus/Source/Icarus/Online/IRGN_PlayerState_FrequencyLimited.h

UCLASS(Transient)
class UIRGN_PlayerState_FrequencyLimited : public UReplicationGraphNode
{
public:

    // Not reflected: the engine's scripting cannot see these.
    int32 TargetActorsPerFrame;  // 0x0050, protected
    TArray<FActorRepListRefView,TSizedDefaultAllocator<32> > ReplicationActorLists;  // 0x0058, protected
    FActorRepListRefView ForceNetUpdateReplicationActorList;  // 0x0068, protected
};
