// /Script/OnlineSubsystemUtils.PartyBeaconState
// Derives from: UObject
// size 0xA0, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/PartyBeaconState.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class UPartyBeaconState : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Transient) FName SessionName;  // 0x0028, size 0x8
    UPROPERTY(Transient) int32 NumConsumedReservations;  // 0x0030, size 0x4
    UPROPERTY(Transient) int32 MaxReservations;  // 0x0034, size 0x4
    UPROPERTY(Transient) int32 NumTeams;  // 0x0038, size 0x4
    UPROPERTY(Transient) int32 NumPlayersPerTeam;  // 0x003C, size 0x4
    UPROPERTY(Transient) FName TeamAssignmentMethod;  // 0x0040, size 0x8
    UPROPERTY(Transient) int32 ReservedHostTeamNum;  // 0x0048, size 0x4
    UPROPERTY(Transient) int32 ForceTeamNum;  // 0x004C, size 0x4
    UPROPERTY(Config) bool bRestrictCrossConsole;  // 0x0050, size 0x1
    UPROPERTY(Config) TArray<FString> PlatformCrossplayRestrictions;  // 0x0058, size 0x10
    UPROPERTY(Config) TArray<FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping;  // 0x0068, size 0x10
    UPROPERTY(Transient) bool bEnableRemovalRequests;  // 0x0078, size 0x1
    UPROPERTY(Transient) TArray<FPartyReservation> Reservations;  // 0x0080, size 0x10
    TArray<TSharedPtr<FUniqueNetId const ,0>,TSizedDefaultAllocator<32> > PlayersPendingJoin;  // 0x0090, not reflected

    // Virtual functions that start here:
    //   AddReservation, AreTeamsAvailable, BestFitTeamAssignmentJiggle, ChangeTeam, CrossPlayAllowed
    //   DoesReservationFit, DumpReservations, GetExistingReservation
    //   GetExistingReservationContainingMember, GetMaxAvailableTeamSize, GetMaxPlayersPerTeam
    //   GetMaxReservations, GetNumConsumedReservations, GetNumPlayersOnTeam, GetNumTeams, GetPartyLeader
    //   GetPlayerValidation, GetRemainingReservations, GetReservationCount, GetReservationPlatformCount
    //   GetReservations, GetSessionName, GetTeamAssignment, GetTeamForCurrentPlayer
    //   HasCrossplayOptOutReservation, InitState, InitTeamArray, IsBeaconFull, PlayerHasReservation
    //   ReconfigureTeamAndPlayerCount, RemovePlayer, RemoveReservation, SetTeamAssignmentMethod, SwapTeams
    //   UpdateMemberPlatform, UpdatePartyLeader
};
