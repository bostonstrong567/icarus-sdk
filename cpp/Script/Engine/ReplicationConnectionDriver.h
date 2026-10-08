// /Script/Engine.ReplicationConnectionDriver
// Derives from: UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/ReplicationDriver.h

UCLASS(Abstract, Transient)
class UReplicationConnectionDriver : public UObject
{
public:

    // Virtual functions that start here:
    //   NotifyActorChannelAdded, NotifyActorChannelCleanedUp, NotifyActorChannelRemoved
    //   NotifyAddDestructionInfo, NotifyAddDormantDestructionInfo, NotifyClientVisibleLevelNamesAdd
    //   NotifyClientVisibleLevelNamesRemove, NotifyRemoveDestructionInfo, NotifyResetDestructionInfo
    //   TearDown
};
