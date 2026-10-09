// /Script/OnlineSubsystemIcarus.IcarusBuildVersion
// size 0x20, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusTypes.h

USTRUCT()
struct FIcarusBuildVersion
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Major;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Minor;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Patch;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Changelist;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString BuildType;  // 0x0010, size 0x10
};
