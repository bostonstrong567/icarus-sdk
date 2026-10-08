// /Script/IcarusGenerated.ResGetProspect
// size 0xE8, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResGetProspect.h

USTRUCT()
struct FResGetProspect
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo Prospect;  // 0x0008, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectBlob ProspectBlob;  // 0x00A8, size 0x40
};
