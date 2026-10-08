// /Script/OnlineSubsystemUtils.SpectatorBeaconHost
// Derives from: AOnlineBeaconHostObject > AActor > UObject
// size 0x2C0, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/SpectatorBeaconHost.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{
public:
    UPROPERTY() USpectatorBeaconState* State;  // 0x0248, size 0x8
    UPROPERTY(Config) bool bLogoutOnSessionTimeout;  // 0x02B0, size 0x1
    UPROPERTY(Transient, Config) float SessionTimeoutSecs;  // 0x02B4, size 0x4
    UPROPERTY(Transient, Config) float TravelSessionTimeoutSecs;  // 0x02B8, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> ReservationsFull;  // 0x0250, protected
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> ReservationChanged;  // 0x0260, protected
    TDelegate<void __cdecl(FUniqueNetId const &),FDefaultDelegateUserPolicy> CancelationReceived;  // 0x0270, protected
    TDelegate<void __cdecl(FSpectatorReservation const &),FDefaultDelegateUserPolicy> DuplicateReservation;  // 0x0280, protected
    TDelegate<void __cdecl(FPlayerReservation const &),FDefaultDelegateUserPolicy> NewPlayerAddedDelegate;  // 0x0290, protected
    TDelegate<bool __cdecl(FPlayerReservation const &),FDefaultDelegateUserPolicy> ValidatePlayers;  // 0x02A0, protected

    // Virtual functions that start here:
    //   AddSpectatorReservation, DumpReservations, GetMaxReservations, GetNumConsumedReservations
    //   GetPlayerValidation, GetReservationCount, GetSpectatorBeaconHostClass, HandlePlayerLogout
    //   InitFromBeaconState, InitHostBeacon, PlayerHasReservation, ProcessCancelReservationRequest
    //   ProcessReservationRequest, RemoveSpectatorReservation
};
