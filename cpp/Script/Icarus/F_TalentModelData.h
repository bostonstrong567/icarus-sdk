// /Script/Icarus.TalentModelData
// size 0x10, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/TalentModelInterface.generated.h

USTRUCT()
struct FTalentModelData
{
public:
    UPROPERTY() ETalentState State;  // 0x0000, size 0x1
    UPROPERTY() int32 Rank;  // 0x0004, size 0x4
    UPROPERTY() int32 MaxRank;  // 0x0008, size 0x4
    UPROPERTY() bool bLocked;  // 0x000C, size 0x1
};
