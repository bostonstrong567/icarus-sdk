// /Script/Icarus.FavoriteEntry
// size 0x8, declared in Icarus/Source/Icarus/Subsystems/GameInstance/MatchmakingSubsystem.h

USTRUCT()
struct FFavoriteEntry
{
public:
    uint32 IP;  // 0x0000, not reflected
    uint16 ConPort;  // 0x0004, not reflected
    uint16 QPort;  // 0x0006, not reflected
};
