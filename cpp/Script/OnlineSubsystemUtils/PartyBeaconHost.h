// /Script/OnlineSubsystemUtils.PartyBeaconHost
// Derives from: AOnlineBeaconHostObject > AActor > UObject
// size 0x2C0, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/PartyBeaconHost.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class APartyBeaconHost : public AOnlineBeaconHostObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() UPartyBeaconState* State;  // 0x0248, size 0x8
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> ReservationsFull;  // 0x0250, not reflected
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> ReservationChanged;  // 0x0260, not reflected
    TDelegate<void __cdecl(FUniqueNetId const &),FDefaultDelegateUserPolicy> CancelationReceived;  // 0x0270, not reflected
    TDelegate<void __cdecl(FPartyReservation const &),FDefaultDelegateUserPolicy> DuplicateReservation;  // 0x0280, not reflected
    TDelegate<void __cdecl(FPlayerReservation const &),FDefaultDelegateUserPolicy> NewPlayerAddedDelegate;  // 0x0290, not reflected
    TDelegate<bool __cdecl(TArray<FPlayerReservation,TSizedDefaultAllocator<32> > const &),FDefaultDelegateUserPolicy> ValidatePlayers;  // 0x02A0, not reflected
    UPROPERTY(Config) bool bLogoutOnSessionTimeout;  // 0x02B0, size 0x1
    UPROPERTY(Transient, Config) float SessionTimeoutSecs;  // 0x02B4, size 0x4
    UPROPERTY(Transient, Config) float TravelSessionTimeoutSecs;  // 0x02B8, size 0x4

    // Virtual functions that start here:
    //   AddPartyReservation, ChangeTeam, DumpReservations, GetMaxAvailableTeamSize, GetMaxPlayersPerTeam
    //   GetMaxReservations, GetNumConsumedReservations, GetPartyBeaconHostClass, GetPlayerValidation
    //   GetReservationCount, GetReservationPlatformCount, HandlePlayerLogout, HasCrossplayOptOutReservation
    //   InitFromBeaconState, InitHostBeacon, PlayerHasReservation, ProcessCancelReservationRequest
    //   ProcessReservationAddOrUpdateRequest, ProcessReservationRequest, ProcessReservationUpdateRequest
    //   ReconfigureTeamAndPlayerCount, RemovePartyReservation, SetTeamAssignmentMethod, SwapTeams
    //   UpdatePartyLeader, UpdatePartyReservation
};
