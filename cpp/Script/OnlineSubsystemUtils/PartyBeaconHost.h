// /Script/OnlineSubsystemUtils.PartyBeaconHost
// Derives from: AOnlineBeaconHostObject > AActor > UObject
// size 0x2C0, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/PartyBeaconHost.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:
    UPROPERTY() UPartyBeaconState* State;  // 0x0248, size 0x8
    UPROPERTY(Config) bool bLogoutOnSessionTimeout;  // 0x02B0, size 0x1
    UPROPERTY(Transient, Config) float SessionTimeoutSecs;  // 0x02B4, size 0x4
    UPROPERTY(Transient, Config) float TravelSessionTimeoutSecs;  // 0x02B8, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> ReservationsFull;  // 0x0250, protected
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> ReservationChanged;  // 0x0260, protected
    TDelegate<void __cdecl(FUniqueNetId const &),FDefaultDelegateUserPolicy> CancelationReceived;  // 0x0270, protected
    TDelegate<void __cdecl(FPartyReservation const &),FDefaultDelegateUserPolicy> DuplicateReservation;  // 0x0280, protected
    TDelegate<void __cdecl(FPlayerReservation const &),FDefaultDelegateUserPolicy> NewPlayerAddedDelegate;  // 0x0290, protected
    TDelegate<bool __cdecl(TArray<FPlayerReservation,TSizedDefaultAllocator<32> > const &),FDefaultDelegateUserPolicy> ValidatePlayers;  // 0x02A0, protected

    // Virtual functions that start here:
    //   AddPartyReservation, ChangeTeam, DumpReservations, GetMaxAvailableTeamSize, GetMaxPlayersPerTeam
    //   GetMaxReservations, GetNumConsumedReservations, GetPartyBeaconHostClass, GetPlayerValidation
    //   GetReservationCount, GetReservationPlatformCount, HandlePlayerLogout, HasCrossplayOptOutReservation
    //   InitFromBeaconState, InitHostBeacon, PlayerHasReservation, ProcessCancelReservationRequest
    //   ProcessReservationAddOrUpdateRequest, ProcessReservationRequest, ProcessReservationUpdateRequest
    //   ReconfigureTeamAndPlayerCount, RemovePartyReservation, SetTeamAssignmentMethod, SwapTeams
    //   UpdatePartyLeader, UpdatePartyReservation
};
