// /Game/BP/MiscConstructs/Prospect/FProspectServerInfo.FProspectServerInfo
// size 0x1B0

USTRUCT()
struct FProspectServerInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo ProspectInfo;  // 0x0000, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlueprintSessionResult Session;  // 0x00A0, size 0x108
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FromServer;  // 0x01A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Locked;  // 0x01A9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DedicatedServer;  // 0x01AA, size 0x1
};
