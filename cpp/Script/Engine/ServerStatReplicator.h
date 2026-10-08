// /Script/Engine.ServerStatReplicator
// Derives from: AInfo > AActor > UObject
// size 0x2E8, declared in Engine/Source/Runtime/Engine/Classes/Engine/ServerStatReplicator.h

UCLASS(Config=Engine)
class AServerStatReplicator : public AInfo
{
public:
    UPROPERTY(EditAnywhere) bool bUpdateStatNet;  // 0x0220, size 0x1
    UPROPERTY(EditAnywhere) bool bOverwriteClientStats;  // 0x0221, size 0x1
    UPROPERTY(Replicated) uint32 Channels;  // 0x0224, size 0x4
    UPROPERTY(Replicated) uint32 InRate;  // 0x0228, size 0x4
    UPROPERTY(Replicated) uint32 OutRate;  // 0x022C, size 0x4
    UPROPERTY(Replicated) uint32 MaxPacketOverhead;  // 0x0234, size 0x4
    UPROPERTY(Replicated) uint32 InRateClientMax;  // 0x0238, size 0x4
    UPROPERTY(Replicated) uint32 InRateClientMin;  // 0x023C, size 0x4
    UPROPERTY(Replicated) uint32 InRateClientAvg;  // 0x0240, size 0x4
    UPROPERTY(Replicated) uint32 InPacketsClientMax;  // 0x0244, size 0x4
    UPROPERTY(Replicated) uint32 InPacketsClientMin;  // 0x0248, size 0x4
    UPROPERTY(Replicated) uint32 InPacketsClientAvg;  // 0x024C, size 0x4
    UPROPERTY(Replicated) uint32 OutRateClientMax;  // 0x0250, size 0x4
    UPROPERTY(Replicated) uint32 OutRateClientMin;  // 0x0254, size 0x4
    UPROPERTY(Replicated) uint32 OutRateClientAvg;  // 0x0258, size 0x4
    UPROPERTY(Replicated) uint32 OutPacketsClientMax;  // 0x025C, size 0x4
    UPROPERTY(Replicated) uint32 OutPacketsClientMin;  // 0x0260, size 0x4
    UPROPERTY(Replicated) uint32 OutPacketsClientAvg;  // 0x0264, size 0x4
    UPROPERTY(Replicated) uint32 NetNumClients;  // 0x0268, size 0x4
    UPROPERTY(Replicated) uint32 InPackets;  // 0x026C, size 0x4
    UPROPERTY(Replicated) uint32 OutPackets;  // 0x0270, size 0x4
    UPROPERTY(Replicated) uint32 InBunches;  // 0x0274, size 0x4
    UPROPERTY(Replicated) uint32 OutBunches;  // 0x0278, size 0x4
    UPROPERTY(Replicated) uint32 OutLoss;  // 0x027C, size 0x4
    UPROPERTY(Replicated) uint32 InLoss;  // 0x0280, size 0x4
    UPROPERTY(Replicated) uint32 VoiceBytesSent;  // 0x0284, size 0x4
    UPROPERTY(Replicated) uint32 VoiceBytesRecv;  // 0x0288, size 0x4
    UPROPERTY(Replicated) uint32 VoicePacketsSent;  // 0x028C, size 0x4
    UPROPERTY(Replicated) uint32 VoicePacketsRecv;  // 0x0290, size 0x4
    UPROPERTY(Replicated) uint32 PercentInVoice;  // 0x0294, size 0x4
    UPROPERTY(Replicated) uint32 PercentOutVoice;  // 0x0298, size 0x4
    UPROPERTY(Replicated) uint32 NumActorChannels;  // 0x029C, size 0x4
    UPROPERTY(Replicated) uint32 NumConsideredActors;  // 0x02A0, size 0x4
    UPROPERTY(Replicated) uint32 PrioritizedActors;  // 0x02A4, size 0x4
    UPROPERTY(Replicated) uint32 NumRelevantActors;  // 0x02A8, size 0x4
    UPROPERTY(Replicated) uint32 NumRelevantDeletedActors;  // 0x02AC, size 0x4
    UPROPERTY(Replicated) uint32 NumReplicatedActorAttempts;  // 0x02B0, size 0x4
    UPROPERTY(Replicated) uint32 NumReplicatedActors;  // 0x02B4, size 0x4
    UPROPERTY(Replicated) uint32 NumActors;  // 0x02B8, size 0x4
    UPROPERTY(Replicated) uint32 NumNetActors;  // 0x02BC, size 0x4
    UPROPERTY(Replicated) uint32 NumDormantActors;  // 0x02C0, size 0x4
    UPROPERTY(Replicated) uint32 NumInitiallyDormantActors;  // 0x02C4, size 0x4
    UPROPERTY(Replicated) uint32 NumNetGUIDsAckd;  // 0x02C8, size 0x4
    UPROPERTY(Replicated) uint32 NumNetGUIDsPending;  // 0x02CC, size 0x4
    UPROPERTY(Replicated) uint32 NumNetGUIDsUnAckd;  // 0x02D0, size 0x4
    UPROPERTY(Replicated) uint32 ObjPathBytes;  // 0x02D4, size 0x4
    UPROPERTY(Replicated) uint32 NetGUIDOutRate;  // 0x02D8, size 0x4
    UPROPERTY(Replicated) uint32 NetGUIDInRate;  // 0x02DC, size 0x4
    UPROPERTY(Replicated) uint32 NetSaturated;  // 0x02E0, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    uint32 OutSaturation;  // 0x0230
};
