// /Script/Engine.ReplicationDriver
// Derives from: UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/ReplicationDriver.h

UCLASS(Abstract, Transient, Config=Engine)
class UReplicationDriver : public UObject
{
public:

    // Virtual functions that start here:
    //   AddClientConnection, AddNetworkActor, FlushNetDormancy, ForceNetUpdate, InitForNetDriver
    //   InitializeActorsInWorld, NotifyActorDormancyChange, NotifyActorFullyDormantForConnection
    //   NotifyActorTearOff, NotifyDestructionInfoCreated, PostTickDispatch, ProcessRemoteFunction
    //   RemoveClientConnection, RemoveNetworkActor, ResetGameWorldState, ServerReplicateActors
    //   SetRepDriverWorld, SetRoleSwapOnReplicate, TearDown
};
