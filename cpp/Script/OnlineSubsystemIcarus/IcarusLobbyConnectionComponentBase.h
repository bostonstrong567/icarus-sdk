// /Script/OnlineSubsystemIcarus.IcarusLobbyConnectionComponentBase
// Derives from: UObject
// size 0x1C0, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/Lobby/IcarusLobbyConnectionComponentBase.h

UCLASS()
class UIcarusLobbyConnectionComponentBase : public UObject
{
public:
    UPROPERTY(EditAnywhere) FString AddressAndPort;  // 0x0028, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> OnLobbyConnect;  // 0x0038
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnResPongDelegate;  // 0x0050
    TMulticastDelegate<void __cdecl(FString const &,FString const &,FString const &),FDefaultDelegateUserPolicy> OnConnected;  // 0x0068
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnLobbyHasValidToken;  // 0x0080
    TMulticastDelegate<void __cdecl(FString const &),FDefaultDelegateUserPolicy> OnConnectionError;  // 0x0098
    TMulticastDelegate<void __cdecl(FString const &),FDefaultDelegateUserPolicy> OnError;  // 0x00B0
    TMulticastDelegate<void __cdecl(FString const &),FDefaultDelegateUserPolicy> OnClosed;  // 0x00C8
    TMap<FName,TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TDelegate<void __cdecl(TSharedRef<FIcarusWSFrame,1> const &),FDefaultDelegateUserPolicy>,0> > FrameHandler;  // 0x00E0, protected
    FOnlineSubsystemIcarus * OnlineSubsystemIcarus;  // 0x0130, protected
    TSharedPtr<IStompClient,0> StompClient;  // 0x0138, private
    FString RelayToDestination;  // 0x0148, private
    FString RelayToSubscriptionID;  // 0x0158, private
    bool bSubscribedRelayTo;  // 0x0168, private
    FString WaitingQueueDestination;  // 0x0170, private
    FString TopicDestination;  // 0x0180, private
    FString TopicSubscriptionID;  // 0x0190, private
    bool bSubscribedTopic;  // 0x01A0, private
    TDelegate<void __cdecl(int,bool,FUniqueNetId const &,FString const &),FDefaultDelegateUserPolicy> OnLoginCompleteDelegate;  // 0x01A8, private
    FDelegateHandle OnLoginCompleteDelegateHandle;  // 0x01B8, private

    UFUNCTION(BlueprintCallable) bool IsConnected();  // parameters 0x1

    // Virtual functions that start here:
    //   Connect, Disconnect, Initialize
};
