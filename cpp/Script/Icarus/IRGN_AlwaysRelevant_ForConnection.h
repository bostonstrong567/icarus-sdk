// /Script/Icarus.IRGN_AlwaysRelevant_ForConnection
// Derives from: UReplicationGraphNode > UObject
// size 0x80, declared in Icarus/Source/Icarus/Online/IRGN_AlwaysRelevant_ForConnection.h

UCLASS(Transient)
class UIRGN_AlwaysRelevant_ForConnection : public UReplicationGraphNode
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    FActorRepListRefView ReplicationActorList;  // 0x0050, not reflected
    UPROPERTY() TArray<FAlwaysRelevantActorInfo> PastRelevantActors;  // 0x0060, size 0x10
    UPROPERTY() AActor* LastPawn;  // 0x0070, size 0x8
    bool bInitializedPlayerState;  // 0x0078, not reflected
};
