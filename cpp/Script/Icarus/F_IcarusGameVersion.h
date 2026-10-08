// /Script/Icarus.IcarusGameVersion
// size 0x30, declared in Icarus/Source/Icarus/Subsystems/GameInstance/VersionSubsystem.h

USTRUCT()
struct FIcarusGameVersion
{

    // Not reflected:
    int32 Major;  // 0x0000
    int32 Minor;  // 0x0004
    int32 Patch;  // 0x0008
    int32 Changelist;  // 0x000C
    FString BuildType;  // 0x0010
    FString FeatureLevel;  // 0x0020
};
