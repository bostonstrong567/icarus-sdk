// /Script/Engine.Channel
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Engine/Channel.h

UCLASS(Abstract, Transient)
class UChannel : public UObject
{
public:
    UPROPERTY() UNetConnection* Connection;  // 0x0028, size 0x8
    uint32 : 1 Broken;  // 0x0030, not reflected
    uint32 : 1 Closing;  // 0x0030, not reflected
    uint32 : 1 Dormant;  // 0x0030, not reflected
    uint32 : 1 OpenAcked;  // 0x0030, not reflected
    uint32 : 1 OpenTemporary;  // 0x0030, not reflected
    uint32 : 1 OpenedLocally;  // 0x0030, not reflected
    uint32 : 1 SentClosingBunch;  // 0x0030, not reflected
    uint32 : 1 bIsInDormancyHysteresis;  // 0x0030, not reflected
    uint32 : 1 bIsReplicationPaused;  // 0x0030, not reflected
    uint32 : 1 bOpenedForCheckpoint;  // 0x0030, not reflected
    uint32 : 1 bPausedUntilReliableACK;  // 0x0030, not reflected
    uint32 : 1 bPendingDormancy;  // 0x0030, not reflected
    uint32 : 1 bPooled;  // 0x0030, not reflected
    uint32 : 1 bTornOff;  // 0x0030, not reflected
    int32 ChIndex;  // 0x0034, not reflected
    FPacketIdRange OpenPacketId;  // 0x0038, not reflected
    FName ChName;  // 0x0040, not reflected
    int32 NumInRec;  // 0x0048, not reflected
    int32 NumOutRec;  // 0x004C, not reflected
    FInBunch * InRec;  // 0x0050, not reflected
    FOutBunch * OutRec;  // 0x0058, not reflected
    FInBunch * InPartialBunch;  // 0x0060, not reflected

    // Virtual functions that start here:
    //   AddedToChannelPool, AppendExportBunches, AppendMustBeMappedGuids, BecomeDormant, CanStopTicking
    //   CleanUp, Close, Describe, Init, IsReplicationPaused, ReadyForDormancy, ReceivedAck, ReceivedBunch
    //   ReceivedNak, SendBunch, SetClosingFlag, SetReplicationPaused, StartBecomingDormant, Tick
};
