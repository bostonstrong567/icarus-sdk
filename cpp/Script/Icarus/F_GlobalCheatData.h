// /Script/Icarus.GlobalCheatData
// size 0x3, declared in Icarus/Source/Icarus/Cheats/GlobalCheatData.h

USTRUCT()
struct FGlobalCheatData
{
public:
    UPROPERTY() bool bBuildingIntegrityDisabled;  // 0x0000, size 0x1
    UPROPERTY() bool bShelteredRequiredDisabled;  // 0x0001, size 0x1
    UPROPERTY() bool bLandMinesDontExplode;  // 0x0002, size 0x1
};
