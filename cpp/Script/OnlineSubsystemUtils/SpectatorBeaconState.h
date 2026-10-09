// /Script/OnlineSubsystemUtils.SpectatorBeaconState
// Derives from: UObject
// size 0x60, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/SpectatorBeaconState.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class USpectatorBeaconState : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Transient) FName SessionName;  // 0x0028, size 0x8
    UPROPERTY(Transient) int32 NumConsumedReservations;  // 0x0030, size 0x4
    UPROPERTY(Transient) int32 MaxReservations;  // 0x0034, size 0x4
    UPROPERTY(Config) bool bRestrictCrossConsole;  // 0x0038, size 0x1
    UPROPERTY(Transient) TArray<FSpectatorReservation> Reservations;  // 0x0040, size 0x10
    TArray<TSharedPtr<FUniqueNetId const ,0>,TSizedDefaultAllocator<32> > PlayersPendingJoin;  // 0x0050, not reflected

    // Virtual functions that start here:
    //   AddReservation, CrossPlayAllowed, DoesReservationFit, DumpReservations, GetExistingReservation
    //   GetMaxReservations, GetNumConsumedReservations, GetPlayerValidation, GetRemainingReservations
    //   GetReservationCount, GetReservationPlatformCount, GetReservations, GetSessionName
    //   HasCrossplayOptOutReservation, InitState, IsBeaconFull, PlayerHasReservation, RemovePlayer
    //   RemoveReservation, UpdateMemberPlatform
};
