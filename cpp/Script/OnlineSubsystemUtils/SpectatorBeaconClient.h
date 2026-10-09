// /Script/OnlineSubsystemUtils.SpectatorBeaconClient
// Derives from: AOnlineBeaconClient > AOnlineBeacon > AActor > UObject
// size 0x398, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/SpectatorBeaconClient.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class ASpectatorBeaconClient : public AOnlineBeaconClient
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    TDelegate<void __cdecl(enum ESpectatorReservationResult::Type),FDefaultDelegateUserPolicy> ReservationRequestComplete;  // 0x02B0, not reflected
    TDelegate<void __cdecl(int),FDefaultDelegateUserPolicy> ReservationCountUpdate;  // 0x02C0, not reflected
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> ReservationFull;  // 0x02D0, not reflected
    UPROPERTY() FString DestSessionId;  // 0x02E0, size 0x10
    UPROPERTY() FSpectatorReservation PendingReservation;  // 0x02F0, size 0x78
    UPROPERTY() ESpectatorClientRequestType RequestType;  // 0x0368, size 0x1
    UPROPERTY() bool bPendingReservationSent;  // 0x0369, size 0x1
    UPROPERTY() bool bCancelReservation;  // 0x036A, size 0x1
    FTimerHandle CancelRPCFailsafe;  // 0x0370, not reflected
    FTimerHandle PendingResponseTimerHandle;  // 0x0378, not reflected
    FTimerHandle PendingCancelResponseTimerHandle;  // 0x0380, not reflected
    FTimerHandle PendingReservationUpdateTimerHandle;  // 0x0388, not reflected
    FTimerHandle PendingReservationFullTimerHandle;  // 0x0390, not reflected
public:
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSendReservationFull();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSendReservationUpdates(int32 NumRemainingReservations);  // parameters 0x4
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerCancelReservationRequest(FUniqueNetIdRepl Spectator);  // parameters 0x28
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerReservationRequest(FString SessionId, FSpectatorReservation Reservation);  // parameters 0x88

    // Virtual functions that start here:
    //   CancelReservation, ClientCancelReservationResponse, ClientCancelReservationResponse_Implementation
    //   ClientReservationResponse, ClientReservationResponse_Implementation, ClientSendReservationFull
    //   ClientSendReservationFull_Implementation, ClientSendReservationUpdates
    //   ClientSendReservationUpdates_Implementation, RequestReservation, ServerCancelReservationRequest
    //   ServerCancelReservationRequest_Implementation, ServerCancelReservationRequest_Validate
    //   ServerReservationRequest, ServerReservationRequest_Implementation
    //   ServerReservationRequest_Validate
};
