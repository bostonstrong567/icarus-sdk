// /Script/IcarusGenerated.ResGetAvailableProspects
// size 0x18, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResGetAvailableProspects.h

USTRUCT()
struct FResGetAvailableProspects
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FProspectInfo> Prospects;  // 0x0008, size 0x10
};
