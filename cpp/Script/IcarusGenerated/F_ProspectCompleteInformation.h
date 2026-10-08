// /Script/IcarusGenerated.ProspectCompleteInformation
// size 0x110, declared in Icarus/Source/IcarusGenerated/Public/Struct/ProspectCompleteInformation.h

USTRUCT()
struct FProspectCompleteInformation
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo ProspectInfo;  // 0x0000, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FactionMissionSuccessful;  // 0x00A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAttachment ProspectRewards;  // 0x00A8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int64 Duration;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAttachment FactionMissionRewards;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTrackedStat> TrackedStats;  // 0x0100, size 0x10
};
