// /Script/OnlineSubsystemUtils.IpConnection
// Derives from: UNetConnection > UPlayer > UObject
// size 0x1C48, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/IpConnection.h

UCLASS(Transient, Config=Engine)
class UIpConnection : public UNetConnection
{
public:
    UPROPERTY(Config) float SocketErrorDisconnectDelay;  // 0x1BF8, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FSocket * Socket;  // 0x1BA8
    FResolveInfo * ResolveInfo;  // 0x1BB0
    FWindowsCriticalSection SocketSendResultsCriticalSection;  // 0x1BB8, private
    TArray<UIpConnection::FSocketSendResult,TSizedDefaultAllocator<32> > SocketSendResults;  // 0x1BE0, private
    TRefCountPtr<FGraphEvent> LastSendTask;  // 0x1BF0, private
    double SocketError_SendDelayStartTime;  // 0x1C00, private
    double SocketError_RecvDelayStartTime;  // 0x1C08, private
    TArray<TSharedPtr<FSocket,0>,TSizedDefaultAllocator<32> > BindSockets;  // 0x1C10, private
    TSharedPtr<FSocket,0> ResolutionSocket;  // 0x1C20, private
    TArray<TSharedRef<FInternetAddr,0>,TSizedDefaultAllocator<32> > ResolverResults;  // 0x1C30, private
    int32 CurrentAddressIndex;  // 0x1C40, private
    EAddressResolutionState ResolutionState;  // 0x1C44, private
};
