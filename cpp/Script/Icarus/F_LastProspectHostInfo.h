// /Script/Icarus.LastProspectHostInfo
// size 0x38, declared in Icarus/Source/Icarus/PlayerData/AssociatedProspects.h

USTRUCT()
struct FLastProspectHostInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ELastProspectHostType LastHostType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString SteamP2PHostId;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString DedicatedServerIP;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CachedServerName;  // 0x0028, size 0x10
};
