// /Script/OnlineSubsystemUtils.PartyReservation
// size 0x50, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/PartyBeaconState.h

USTRUCT()
struct FPartyReservation
{
public:
    UPROPERTY(Transient) int32 TeamNum;  // 0x0000, size 0x4
    UPROPERTY(Transient) FUniqueNetIdRepl PartyLeader;  // 0x0008, size 0x28
    UPROPERTY(Transient) TArray<FPlayerReservation> PartyMembers;  // 0x0030, size 0x10
    UPROPERTY(Transient) TArray<FPlayerReservation> RemovedPartyMembers;  // 0x0040, size 0x10
};
