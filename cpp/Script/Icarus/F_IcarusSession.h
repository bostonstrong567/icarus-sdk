// /Script/Icarus.IcarusSession
// size 0x1C0, declared in Icarus/Source/Icarus/Session/IcarusSession.h

USTRUCT()
struct FIcarusSession
{
public:
    UPROPERTY(BlueprintReadWrite) FProspectInfo ProspectInfo;  // 0x0000, size 0xA0
    UPROPERTY(BlueprintReadWrite) FBlueprintSessionResult Session;  // 0x00A0, size 0x108
    UPROPERTY(BlueprintReadWrite) bool FromServer;  // 0x01A8, size 0x1
    UPROPERTY(BlueprintReadWrite) bool Locked;  // 0x01A9, size 0x1
    UPROPERTY(BlueprintReadWrite) bool DedicatedServer;  // 0x01AA, size 0x1
    UPROPERTY(BlueprintReadWrite) FString GameVersion;  // 0x01B0, size 0x10
};
