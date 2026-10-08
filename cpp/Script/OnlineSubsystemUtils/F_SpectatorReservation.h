// /Script/OnlineSubsystemUtils.SpectatorReservation
// size 0x78, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/SpectatorBeaconState.h

USTRUCT()
struct FSpectatorReservation
{
    UPROPERTY(Transient) FUniqueNetIdRepl SpectatorId;  // 0x0000, size 0x28
    UPROPERTY(Transient) FPlayerReservation Spectator;  // 0x0028, size 0x50
};
