// /Script/IcarusGenerated.ResGetLastProspect
// size 0xB0, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResGetLastProspect.h

USTRUCT()
struct FResGetLastProspect
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo ProspectInformation;  // 0x0008, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FactionMissionStatus;  // 0x00A8, size 0x4
};
