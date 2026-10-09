// /Script/Engine.DemoNetConnection
// Derives from: UNetConnection > UPlayer > UObject
// size 0x1C18, declared in Engine/Source/Runtime/Engine/Classes/Engine/DemoNetConnection.h

UCLASS(Transient, Config=Engine)
class UDemoNetConnection : public UNetConnection
{
public:
    TArray<FQueuedDemoPacket,TSizedDefaultAllocator<32> > QueuedDemoPackets;  // 0x1BA8, not reflected
    TArray<FQueuedDemoPacket,TSizedDefaultAllocator<32> > QueuedCheckpointPackets;  // 0x1BB8, not reflected
private:
    TMap<FNetworkGUID,UActorChannel *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,UActorChannel *,0> > OpenChannelMap;  // 0x1BC8, not reflected
};
