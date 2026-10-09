// /Script/OnlineSubsystemUtils.IpConnection
// Derives from: UNetConnection > UPlayer > UObject
// size 0x1C48, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/IpConnection.h

UCLASS(Transient, Config=Engine)
class UIpConnection : public UNetConnection
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    FSocket * Socket;  // 0x1BA8, not reflected
    FResolveInfo * ResolveInfo;  // 0x1BB0, not reflected
private:
    FWindowsCriticalSection SocketSendResultsCriticalSection;  // 0x1BB8, not reflected
    TArray<UIpConnection::FSocketSendResult,TSizedDefaultAllocator<32> > SocketSendResults;  // 0x1BE0, not reflected
    TRefCountPtr<FGraphEvent> LastSendTask;  // 0x1BF0, not reflected
    UPROPERTY(Config) float SocketErrorDisconnectDelay;  // 0x1BF8, size 0x4
    double SocketError_SendDelayStartTime;  // 0x1C00, not reflected
    double SocketError_RecvDelayStartTime;  // 0x1C08, not reflected
    TArray<TSharedPtr<FSocket,0>,TSizedDefaultAllocator<32> > BindSockets;  // 0x1C10, not reflected
    TSharedPtr<FSocket,0> ResolutionSocket;  // 0x1C20, not reflected
    TArray<TSharedRef<FInternetAddr,0>,TSizedDefaultAllocator<32> > ResolverResults;  // 0x1C30, not reflected
    int32 CurrentAddressIndex;  // 0x1C40, not reflected
    EAddressResolutionState ResolutionState;  // 0x1C44, not reflected
};
