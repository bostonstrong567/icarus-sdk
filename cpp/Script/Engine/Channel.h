// /Script/Engine.Channel
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Engine/Channel.h

UCLASS(Abstract, Transient)
class UChannel : public UObject
{
public:
    UPROPERTY() UNetConnection* Connection;  // 0x0028, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 OpenAcked;  // 0x0030
    uint32 : 1 Closing;  // 0x0030
    uint32 : 1 Dormant;  // 0x0030
    uint32 : 1 bIsReplicationPaused;  // 0x0030
    uint32 : 1 OpenTemporary;  // 0x0030
    uint32 : 1 Broken;  // 0x0030
    uint32 : 1 bTornOff;  // 0x0030
    uint32 : 1 bPendingDormancy;  // 0x0030
    uint32 : 1 bIsInDormancyHysteresis;  // 0x0030
    uint32 : 1 bPausedUntilReliableACK;  // 0x0030
    uint32 : 1 SentClosingBunch;  // 0x0030
    uint32 : 1 bPooled;  // 0x0030
    uint32 : 1 OpenedLocally;  // 0x0030
    uint32 : 1 bOpenedForCheckpoint;  // 0x0030
    int32 ChIndex;  // 0x0034
    FPacketIdRange OpenPacketId;  // 0x0038
    FName ChName;  // 0x0040
    int32 NumInRec;  // 0x0048
    int32 NumOutRec;  // 0x004C
    FInBunch * InRec;  // 0x0050
    FOutBunch * OutRec;  // 0x0058
    FInBunch * InPartialBunch;  // 0x0060

    // Virtual functions that start here:
    //   AddedToChannelPool, AppendExportBunches, AppendMustBeMappedGuids, BecomeDormant, CanStopTicking
    //   CleanUp, Close, Describe, Init, IsReplicationPaused, ReadyForDormancy, ReceivedAck, ReceivedBunch
    //   ReceivedNak, SendBunch, SetClosingFlag, SetReplicationPaused, StartBecomingDormant, Tick
};
