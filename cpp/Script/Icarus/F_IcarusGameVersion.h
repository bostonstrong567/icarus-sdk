// /Script/Icarus.IcarusGameVersion
// size 0x30, declared in Icarus/Source/Icarus/Subsystems/GameInstance/VersionSubsystem.h

USTRUCT()
struct FIcarusGameVersion
{
public:
    int32 Major;  // 0x0000, not reflected
    int32 Minor;  // 0x0004, not reflected
    int32 Patch;  // 0x0008, not reflected
    int32 Changelist;  // 0x000C, not reflected
    FString BuildType;  // 0x0010, not reflected
    FString FeatureLevel;  // 0x0020, not reflected
};
