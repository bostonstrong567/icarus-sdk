// /Script/Engine.GameInstance
// Derives from: UObject
// size 0x1A8, declared in Engine/Source/Runtime/Engine/Classes/Engine/GameInstance.h

UCLASS(Transient, Config=Game)
class UGameInstance : public UObject
{
public:
    UPROPERTY() TArray<ULocalPlayer*> LocalPlayers;  // 0x0038, size 0x10
    UPROPERTY() UOnlineSession* OnlineSession;  // 0x0048, size 0x8
    UPROPERTY() TArray<UObject*> ReferencedObjects;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FOnPawnControllerChanged OnPawnControllerChangedDelegates;  // 0x0078, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FWorldContext * WorldContext;  // 0x0030, protected
    TMulticastDelegate<void __cdecl(FString const &,enum ETravelType,bool),FDefaultDelegateUserPolicy> NotifyPreClientTravelDelegates;  // 0x0060, protected
    FDelegateHandle OnPlayTogetherEventReceivedDelegateHandle;  // 0x0088, protected
    FString PIEMapName;  // 0x0090
    FOnLocalPlayerEvent OnLocalPlayerAddedEvent;  // 0x00A0
    FOnLocalPlayerEvent OnLocalPlayerRemovedEvent;  // 0x00B8
    FTimerManager * TimerManager;  // 0x00D0
    FLatentActionManager * LatentActionManager;  // 0x00D8
    FSubsystemCollection<UGameInstanceSubsystem> SubsystemCollection;  // 0x00E0, private

    UFUNCTION(Exec) void DebugCreatePlayer(int32 ControllerId);  // parameters 0x4
    UFUNCTION(Exec) void DebugRemovePlayer(int32 ControllerId);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void HandleNetworkError(TEnumAsByte<ENetworkFailure> FailureType, bool bIsServer);  // parameters 0x2
    UFUNCTION(BlueprintImplementableEvent) void HandleTravelError(TEnumAsByte<ETravelFailure> FailureType);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveInit();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveShutdown();

    // Virtual functions that start here:
    //   AddLocalPlayer, AddUserToReplay, ClientTravelToSession, CreateGameModeForURL, CreateInitialPlayer
    //   DebugCreatePlayer, DebugRemovePlayer, DelayPendingNetGameTravel, GetOnlinePlatformName
    //   GetOnlineSessionClass, HandleDemoPlaybackFailure, HandleDisconnectCommand
    //   HandleGameNetControlMessage, HandleOpenCommand, HandleReconnectCommand, HandleTravelCommand, Init
    //   JoinSession, LoadComplete, OnSeamlessTravelDuringReplay, OnStart, OnWorldChanged
    //   OverrideGameModeClass, PlayReplay, PreloadContentForURL, ReceivedNetworkEncryptionAck
    //   ReceivedNetworkEncryptionToken, RegisterReferencedObject, RemoveLocalPlayer, ReturnToMainMenu
    //   Shutdown, StartGameInstance, StartRecordingReplay, StopRecordingReplay, UnregisterReferencedObject
};
