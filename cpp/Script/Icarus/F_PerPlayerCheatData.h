// /Script/Icarus.PerPlayerCheatData
// size 0x4, declared in Icarus/Source/Icarus/Cheats/PerPlayerCheatData.h

USTRUCT()
struct FPerPlayerCheatData
{
    UPROPERTY() bool bGodMode;  // 0x0000, size 0x1
    UPROPERTY() bool bUnlimitedResources;  // 0x0001, size 0x1
    UPROPERTY() bool bAllRecipesUnlocked;  // 0x0002, size 0x1
    UPROPERTY() bool bVerboseDamageLogging;  // 0x0003, size 0x1
};
