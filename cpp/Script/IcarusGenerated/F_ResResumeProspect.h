// /Script/IcarusGenerated.ResResumeProspect
// size 0xF8, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResResumeProspect.h

USTRUCT()
struct FResResumeProspect
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString HostID;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo Prospect;  // 0x0018, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectBlob ProspectBlob;  // 0x00B8, size 0x40
};
