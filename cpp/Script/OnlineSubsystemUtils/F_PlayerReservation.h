// /Script/OnlineSubsystemUtils.PlayerReservation
// size 0x50, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Public/OnlineBeaconReservation.h

USTRUCT()
struct FPlayerReservation
{
public:
    UPROPERTY(Transient) FUniqueNetIdRepl UniqueId;  // 0x0000, size 0x28
    UPROPERTY(Transient) FString ValidationStr;  // 0x0028, size 0x10
    UPROPERTY(Transient) FString Platform;  // 0x0038, size 0x10
    UPROPERTY(Transient) bool bAllowCrossplay;  // 0x0048, size 0x1
    UPROPERTY(Transient) float ElapsedTime;  // 0x004C, size 0x4
};
