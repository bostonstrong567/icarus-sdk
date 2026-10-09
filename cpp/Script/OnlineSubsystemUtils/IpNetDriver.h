// /Script/OnlineSubsystemUtils.IpNetDriver
// Derives from: UNetDriver > UObject
// size 0x7D0, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/IpNetDriver.h

UCLASS(Transient, Config=Engine)
class UIpNetDriver : public UNetDriver
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Config) uint8 LogPortUnreach : 1;  // 0x0760, mask 0x01
    UPROPERTY(Config) uint8 AllowPlayerPortUnreach : 1;  // 0x0760, mask 0x02
    UPROPERTY(Config) uint32 MaxPortCountToTry;  // 0x0764, size 0x4
    FSocket * Socket;  // 0x0768, not reflected
    float PauseReceiveEnd;  // 0x0770, not reflected
private:
    UPROPERTY(Config) uint32 ServerDesiredSocketReceiveBufferBytes;  // 0x0774, size 0x4
    UPROPERTY(Config) uint32 ServerDesiredSocketSendBufferBytes;  // 0x0778, size 0x4
    UPROPERTY(Config) uint32 ClientDesiredSocketReceiveBufferBytes;  // 0x077C, size 0x4
    UPROPERTY(Config) uint32 ClientDesiredSocketSendBufferBytes;  // 0x0780, size 0x4
    UPROPERTY(Config) double MaxSecondsInReceive;  // 0x0788, size 0x8
    UPROPERTY(Config) int32 NbPacketsBetweenReceiveTimeTest;  // 0x0790, size 0x4
    UPROPERTY(Config) float ResolutionConnectionTimeout;  // 0x0794, size 0x4
    TUniquePtr<UIpNetDriver::FReceiveThreadRunnable,TDefaultDelete<UIpNetDriver::FReceiveThreadRunnable> > SocketReceiveThreadRunnable;  // 0x0798, not reflected
    TUniquePtr<FRunnableThread,TDefaultDelete<FRunnableThread> > SocketReceiveThread;  // 0x07A0, not reflected
    TUniquePtr<FRecvMulti,TDefaultDelete<FRecvMulti> > RecvMultiState;  // 0x07A8, not reflected
    TArray<TSharedPtr<FSocket,0>,TSizedDefaultAllocator<32> > BoundSockets;  // 0x07B0, not reflected
    TSharedPtr<FSocket,0> SocketPrivate;  // 0x07C0, not reflected

    // Virtual functions that start here:
    //   CreateAndBindSocket, CreateSocket, CreateSocketForProtocol, GetClientPort, GetSocket
};
