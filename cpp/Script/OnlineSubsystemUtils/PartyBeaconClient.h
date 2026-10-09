// /Script/OnlineSubsystemUtils.PartyBeaconClient
// Derives from: AOnlineBeaconClient > AOnlineBeacon > AActor > UObject
// size 0x370, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/PartyBeaconClient.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class APartyBeaconClient : public AOnlineBeaconClient
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    TDelegate<void __cdecl(enum EPartyReservationResult::Type),FDefaultDelegateUserPolicy> ReservationRequestComplete;  // 0x02B0, not reflected
    TDelegate<void __cdecl(int),FDefaultDelegateUserPolicy> ReservationCountUpdate;  // 0x02C0, not reflected
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> ReservationFull;  // 0x02D0, not reflected
    UPROPERTY() FString DestSessionId;  // 0x02E0, size 0x10
    UPROPERTY() FPartyReservation PendingReservation;  // 0x02F0, size 0x50
    UPROPERTY() EClientRequestType RequestType;  // 0x0340, size 0x1
    UPROPERTY() bool bPendingReservationSent;  // 0x0341, size 0x1
    UPROPERTY() bool bCancelReservation;  // 0x0342, size 0x1
    FTimerHandle CancelRPCFailsafe;  // 0x0348, not reflected
    FTimerHandle PendingResponseTimerHandle;  // 0x0350, not reflected
    FTimerHandle PendingCancelResponseTimerHandle;  // 0x0358, not reflected
    FTimerHandle PendingReservationUpdateTimerHandle;  // 0x0360, not reflected
    FTimerHandle PendingReservationFullTimerHandle;  // 0x0368, not reflected
public:
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSendReservationFull();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSendReservationUpdates(int32 NumRemainingReservations);  // parameters 0x4
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerAddOrUpdateReservationRequest(FString SessionId, FPartyReservation Reservation);  // parameters 0x60
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader);  // parameters 0x28
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerRemoveMemberFromReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);  // parameters 0x60
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerReservationRequest(FString SessionId, FPartyReservation Reservation);  // parameters 0x60
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUpdateReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);  // parameters 0x60

    // Virtual functions that start here:
    //   CancelReservation, ClientCancelReservationResponse, ClientCancelReservationResponse_Implementation
    //   ClientReservationResponse, ClientReservationResponse_Implementation, ClientSendReservationFull
    //   ClientSendReservationFull_Implementation, ClientSendReservationUpdates
    //   ClientSendReservationUpdates_Implementation, RequestAddOrUpdateReservation, RequestReservation
    //   RequestReservationUpdate, ServerAddOrUpdateReservationRequest
    //   ServerAddOrUpdateReservationRequest_Implementation, ServerAddOrUpdateReservationRequest_Validate
    //   ServerCancelReservationRequest, ServerCancelReservationRequest_Implementation
    //   ServerCancelReservationRequest_Validate, ServerRemoveMemberFromReservationRequest
    //   ServerRemoveMemberFromReservationRequest_Implementation
    //   ServerRemoveMemberFromReservationRequest_Validate, ServerReservationRequest
    //   ServerReservationRequest_Implementation, ServerReservationRequest_Validate
    //   ServerUpdateReservationRequest, ServerUpdateReservationRequest_Implementation
    //   ServerUpdateReservationRequest_Validate
};
