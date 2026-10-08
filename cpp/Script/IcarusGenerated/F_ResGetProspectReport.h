// /Script/IcarusGenerated.ResGetProspectReport
// size 0xD0, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResGetProspectReport.h

USTRUCT()
struct FResGetProspectReport
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo ProspectInfo;  // 0x0008, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAttachment CurrentRewards;  // 0x00A8, size 0x28
};
