// /Script/OnlineSubsystemIcarus.BackendSchemaVersion
// size 0xC, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/OnlineSubsystemIcarusTypes.h

USTRUCT()
struct FBackendSchemaVersion
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Major;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Minor;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Changelist;  // 0x0008, size 0x4
};
