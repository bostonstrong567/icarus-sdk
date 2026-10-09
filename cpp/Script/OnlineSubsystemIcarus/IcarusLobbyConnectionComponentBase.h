// /Script/OnlineSubsystemIcarus.IcarusLobbyConnectionComponentBase
// Derives from: UObject
// size 0x1C0, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/Lobby/IcarusLobbyConnectionComponentBase.h

UCLASS()
class UIcarusLobbyConnectionComponentBase : public UObject
{
public:
    UPROPERTY(EditAnywhere) FString AddressAndPort;  // 0x0028, size 0x10
    TMulticastDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> OnLobbyConnect;  // 0x0038, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnResPongDelegate;  // 0x0050, not reflected
    TMulticastDelegate<void __cdecl(FString const &,FString const &,FString const &),FDefaultDelegateUserPolicy> OnConnected;  // 0x0068, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnLobbyHasValidToken;  // 0x0080, not reflected
    TMulticastDelegate<void __cdecl(FString const &),FDefaultDelegateUserPolicy> OnConnectionError;  // 0x0098, not reflected
    TMulticastDelegate<void __cdecl(FString const &),FDefaultDelegateUserPolicy> OnError;  // 0x00B0, not reflected
    TMulticastDelegate<void __cdecl(FString const &),FDefaultDelegateUserPolicy> OnClosed;  // 0x00C8, not reflected
protected:
    TMap<FName,TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy>,0> > FrameHandler;  // 0x00E0, not reflected
    FOnlineSubsystemIcarus * OnlineSubsystemIcarus;  // 0x0130, not reflected
private:
    TSharedPtr<IStompClient,0> StompClient;  // 0x0138, not reflected
    FString RelayToDestination;  // 0x0148, not reflected
    FString RelayToSubscriptionID;  // 0x0158, not reflected
    bool bSubscribedRelayTo;  // 0x0168, not reflected
    FString WaitingQueueDestination;  // 0x0170, not reflected
    FString TopicDestination;  // 0x0180, not reflected
    FString TopicSubscriptionID;  // 0x0190, not reflected
    bool bSubscribedTopic;  // 0x01A0, not reflected
    TDelegate<void __cdecl(int,bool,FUniqueNetId const &,FString const &),FDefaultDelegateUserPolicy> OnLoginCompleteDelegate;  // 0x01A8, not reflected
    FDelegateHandle OnLoginCompleteDelegateHandle;  // 0x01B8, not reflected
public:
    UFUNCTION(BlueprintCallable) bool IsConnected();  // parameters 0x1

    // Virtual functions that start here:
    //   Connect, Disconnect, Initialize
};
