// /Game/UI/Hab/FProspectRewards.FProspectRewards
// size 0xC

USTRUCT()
struct FProspectRewards
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CreditsEarned;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ProspectTimeTaken;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ProspectSuccessful;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FactionMissionSuccess;  // 0x0009, size 0x1
};
